#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

#include "qwidgetserialtx.h"
#include "qwidgetserialrx.h"
#include "qwidgetdraw.h"
#include "qwidgetdraw1.h"
#include "qwidgetdraw2.h"
#include"login.h"


int main(int argc, char * argv[])
{
    QApplication a(argc,argv);
    QWidget *mainWin =new QWidget();
    mainWin->setStyleSheet("background-color:black");

    mainWin->resize(1200,600);
    mainWin->setWindowTitle("实习起飞组");
    //波形
    QVBoxLayout *layoutWave = new QVBoxLayout();

    QWidgetDraw *drawmap= new QWidgetDraw();
    QWidgetDraw1 *drawmap1= new QWidgetDraw1();
    QWidgetDraw2 *drawmap2= new QWidgetDraw2();

    drawmap->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
    drawmap1->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
    drawmap2->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);


    drawmap->setLabelText("ECG II");
    drawmap1->setLabelText("SPO2");
    drawmap2->setLabelText("RESP");

    QWidgetSerialTx *serialTx =new QWidgetSerialTx(mainWin);
    QWidgetSerialRx *serialRx =new QWidgetSerialRx(mainWin);

    mainWin->connect(serialRx,&QWidgetSerialRx::rxDataSignal,drawmap,&QWidgetDraw::refresh);
    mainWin->connect(serialRx,&QWidgetSerialRx::rxDataSignal1,drawmap1,&QWidgetDraw1::refresh);
    mainWin->connect(serialRx,&QWidgetSerialRx::rxDataSignal2,drawmap2,&QWidgetDraw2::refresh);

    layoutWave->addWidget(drawmap);
    layoutWave->addWidget(drawmap1);
    layoutWave->addWidget(drawmap2);

    //标签
    QWidget *mainWin2 =new QWidget(mainWin);

    mainWin2->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);

    QLabel *Text1 = new QLabel();
    QLabel *Text2 = new QLabel();
    QLabel *Text3 = new QLabel();
    QLabel *Text4 = new QLabel();
    QLabel *Text5 = new QLabel();
    QLabel *Text6 = new QLabel();
    QLabel *Text7 = new QLabel();
    QLabel *Text8 = new QLabel();
    QLabel *Text9 = new QLabel();
    QLabel *Text10 = new QLabel();
    QLabel *Text11 = new QLabel();
    QLabel *Text12 = new QLabel();
    QLabel *Text13 = new QLabel();
    QLabel *Text14 = new QLabel();
    QLabel *Text15 = new QLabel();
    QLabel *Text16 = new QLabel();
    QLabel *Text17 = new QLabel();
    QLabel *Text18 = new QLabel();
    QLabel *Text19 = new QLabel();
    QLabel *Text20 = new QLabel();
    QLabel *Text21 = new QLabel();
    QLabel *Text22 = new QLabel();
    QLabel *Text23 = new QLabel();
    QLabel *Text24 = new QLabel();
    QLabel *Text25 = new QLabel();
    QLabel *Text26 = new QLabel();
    QLabel *Text27 = new QLabel();
    QLabel *Text28 = new QLabel();
    QLabel *Text29 = new QLabel();
    QLabel *Text30 = new QLabel();
    QLabel *Text31 = new QLabel();

    Text1->setText("HR");
    Text1->setParent(mainWin2);
    Text1->setGeometry(0,0,150,20);
    Text1->setStyleSheet("color : white;background-color: gray");

    Text2->setText("ST");
    Text2->setParent(mainWin2);
    Text2->setGeometry(150,0,150,20);
    Text2->setStyleSheet("color : white;background-color: gray");

    Text3->setText("NIBP");
    Text3->setParent(mainWin2);
    Text3->setGeometry(0,150,300,20);
    Text3->setStyleSheet("color : white;background-color: gray");

    Text4->setText("SpO2");
    Text4->setParent(mainWin2);
    Text4->setGeometry(0,300,150,20);
    Text4->setStyleSheet("color : white;background-color: gray");

    Text5->setText("TEMP");
    Text5->setParent(mainWin2);
    Text5->setGeometry(150,300,150,20);
    Text5->setStyleSheet("color : white;background-color: gray");

    Text6->setText("RESP");
    Text6->setParent(mainWin2);
    Text6->setGeometry(0,450,150,20);
    Text6->setStyleSheet("color : white;background-color: gray");

    Text7->setText("CO2");
    Text7->setParent(mainWin2);
    Text7->setGeometry(150,450,150,20);
    Text7->setStyleSheet("color : white;background-color: gray");

    Text8->setText("bpm");
    Text8->setParent(mainWin2);
    Text8->setGeometry(110,21,40,20);
    Text8->setStyleSheet("color : green");

    Text9->setText("80");
    Text9->setParent(mainWin2);
    Text9->setGeometry(45,45,60,60);
    Text9->setStyleSheet("color : green; font-size: 60px");

    Text10->setText("ST1 -?-");
    Text10->setParent(mainWin2);
    Text10->setGeometry(195,21,80,30);
    Text10->setStyleSheet("color : green; font-size: 20px");

    Text11->setText("ST2 -?-");
    Text11->setParent(mainWin2);
    Text11->setGeometry(195,51,80,30);
    Text11->setStyleSheet("color : green; font-size: 20px");

    Text12->setText("PVCs -?-");
    Text12->setParent(mainWin2);
    Text12->setGeometry(195,81,80,30);
    Text12->setStyleSheet("color : green; font-size: 20px");

    Text13->setText("00:00:00");
    Text13->setParent(mainWin2);
    Text13->setGeometry(110,171,100,20);
    Text13->setStyleSheet("color : blue");

    Text14->setText("mmHg");
    Text14->setParent(mainWin2);
    Text14->setGeometry(239,171,60,20);
    Text14->setStyleSheet("color : blue");

    Text15->setText("-?-");
    Text15->setParent(mainWin2);
    Text15->setGeometry(20,215,80,40);
    Text15->setStyleSheet("color : blue; font-size: 25px");

    Text16->setText("/ -?-");
    Text16->setParent(mainWin2);
    Text16->setGeometry(80,215,120,40);
    Text16->setStyleSheet("color : blue; font-size: 45px");

    Text17->setText("-?-");
    Text17->setParent(mainWin2);
    Text17->setGeometry(220,215,50,40);
    Text17->setStyleSheet("color : blue; font-size: 30px");

    Text18->setText("98");
    Text18->setParent(mainWin2);
    Text18->setGeometry(45,345,60,60);
    Text18->setStyleSheet("color : red; font-size: 60px");

    Text19->setText("%");
    Text19->setParent(mainWin2);
    Text19->setGeometry(130,350,40,40);
    Text19->setStyleSheet("color : red; font-size: 20px");

    Text20->setText("84");
    Text20->setParent(mainWin2);
    Text20->setGeometry(90,400,50,50);
    Text20->setStyleSheet("color : red; font-size: 30px");

    Text21->setText("bpm");
    Text21->setParent(mainWin2);
    Text21->setGeometry(120,420,50,20);
    Text21->setStyleSheet("color : red; font-size: 20px");

    Text22->setText("T1 -?-");
    Text22->setParent(mainWin2);
    Text22->setGeometry(150,350,80,40);
    Text22->setStyleSheet("color : purple; font-size: 20px");

    Text23->setText("T2 -?-");
    Text23->setParent(mainWin2);
    Text23->setGeometry(150,380,80,40);
    Text23->setStyleSheet("color : purple; font-size: 20px");

    Text24->setText("TD -?-");
    Text24->setParent(mainWin2);
    Text24->setGeometry(230,365,80,40);
    Text24->setStyleSheet("color : purple; font-size: 20px");

    Text25->setText("℃");
    Text25->setParent(mainWin2);
    Text25->setGeometry(260,321,40,40);
    Text25->setStyleSheet("color : purple; font-size: 20px");

    Text26->setText("-?-");
    Text26->setParent(mainWin2);
    Text26->setGeometry(35,480,90,60);
    Text26->setStyleSheet("color : yellow; font-size: 60px");

    Text27->setText("-?-");
    Text27->setParent(mainWin2);
    Text27->setGeometry(180,480,90,60);
    Text27->setStyleSheet("color : yellow; font-size: 40px");

    Text28->setText("bpm");
    Text28->setParent(mainWin2);
    Text28->setGeometry(115,471,40,20);
    Text28->setStyleSheet("color : yellow; font-size: 20px");

    Text29->setText("mmHg");
    Text29->setParent(mainWin2);
    Text29->setGeometry(240,471,60,20);
    Text29->setStyleSheet("color : yellow; font-size: 20px");

    Text30->setText("ins -?-");
    Text30->setParent(mainWin2);
    Text30->setGeometry(145,550,60,20);
    Text30->setStyleSheet("color : yellow; font-size: 15px");

    Text31->setText("awrr -?-");
    Text31->setParent(mainWin2);
    Text31->setGeometry(215,550,80,20);
    Text31->setStyleSheet("color : yellow; font-size: 15px");




    QHBoxLayout *layoutMain = new QHBoxLayout();
    layoutMain->addLayout(layoutWave);
    layoutMain->addWidget(mainWin2);

    //配置拉伸因子
    layoutMain->setStretchFactor(layoutWave,3);
    layoutMain->setStretchFactor(mainWin2,1);

    mainWin->setLayout(layoutMain);

    login login1;
    if(login1.exec() == QDialog::Accepted)
    {
        mainWin->show();

    }

    //mainWin->show();
    return a.exec();
}
