
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; int l41; int y; unsigned long j; int l35; int l33; int l43; scalar_t__ x; scalar_t__ l53; int l73; TYPE_2__* d; scalar_t__ l146; scalar_t__ l52; int l62; scalar_t__ l31; } ;
typedef TYPE_1__ e ;
struct TYPE_5__ {int l80; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int,int,int*,int*) ;

void FUNC_2(e
 *VAR_0,int VAR_1){int VAR_2,VAR_3;{if(!(VAR_0->f==2||((VAR_0->f==3)&&VAR_0->l31)))goto l240;
{int VAR_4=(VAR_1+32000)/64000*64;{if(!(VAR_0->l52))goto l236;VAR_4=2048;l236:;}VAR_0
->l41&=~7;{if(!(!VAR_4||VAR_4>1024))goto l235;{VAR_0->l41|=0;VAR_0->y=2048000;}
goto l232;l235:;{if(!(VAR_4>512))goto l231;{VAR_0->l41|=2;VAR_0->y=1024000;}
goto l229;l231:;{if(!(VAR_4>256))goto l228;{VAR_0->l41|=3;VAR_0->y=512000;}goto
l901;l228:;{if(!(VAR_4>128))goto l880;{VAR_0->l41|=4;VAR_0->y=256000;}goto l837
;l880:;{if(!(VAR_4>64))goto l524;{VAR_0->l41|=5;VAR_0->y=128000;}goto l522;l524
:;{VAR_0->l41|=6;VAR_0->y=64000;}l522:;}l837:;}l901:;}l229:;}l232:;}FUNC_0(VAR_0->d,VAR_0
->l62,VAR_0->l41);}goto l520;l240:;{if(!((VAR_0->f==3||VAR_0->f==6)&&!VAR_0->l52))goto
l518;{unsigned long VAR_5=VAR_0->j;int VAR_6;VAR_0->y=0;{VAR_6=0;l516:if(!(VAR_6<32))goto
l512;goto l494;l515:++VAR_6;goto l516;l494:{if(!((VAR_5>>VAR_6)&1))goto l500;VAR_0
->y+=64000;l500:;}goto l515;l512:;}}goto l478;l518:;{if(!(VAR_0->f==3&&VAR_0
->l52))goto l383;{VAR_0->y=2048000;}goto l347;l383:;VAR_0->y=VAR_1;l347:;}l478:;}
l520:;}VAR_0->l35&=~55;{if(!(VAR_0->f==4||VAR_0->f==7||VAR_0->f==8))goto l385;{VAR_0->y=VAR_0
->d->l80;VAR_0->l35|=12;VAR_3=VAR_2=0;}goto l345;l385:;{if(!(!VAR_0->y||VAR_0->f!=1))goto
l387;{VAR_0->l146=0;{if(!(VAR_0->f==1))goto l344;VAR_0->l53=0;l344:;}VAR_3=VAR_2=0;VAR_0
->l33|=4;}goto l389;l387:;{if(!(VAR_0->l146))goto l341;{VAR_0->l35|=54;FUNC_1(VAR_0
->d->l80/16,VAR_0->y,&VAR_3,&VAR_2);VAR_0->l33&=~4;}goto l340;l341:;{if(!(VAR_0->l53))goto
l393;{VAR_0->l35|=55;FUNC_1(VAR_0->d->l80,VAR_0->y,&VAR_3,&VAR_2);VAR_0->l33&=~4;}goto l317
;l393:;{VAR_0->l35|=48;FUNC_1(VAR_0->d->l80,VAR_0->y,&VAR_3,&VAR_2);VAR_0->l33&=~4;}l317:;}
l340:;}l389:;}l345:;}FUNC_0(VAR_0->d,VAR_0->l73,VAR_0->l33&~4); * (volatile unsigned
long* )((VAR_0)->x+8)=VAR_0->l35; * (volatile unsigned long* )((VAR_0)->x+44)=VAR_3
<<8|VAR_2;FUNC_0(VAR_0->d,VAR_0->l73,VAR_0->l33);{if(!(VAR_0->f==1&&VAR_0->l53))goto l415;VAR_0->l43
|=256;goto l416;l415:;VAR_0->l43&=~256;l416:;} * (volatile unsigned long*
)((VAR_0)->x+12)=VAR_0->l43;}
