
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int l30; TYPE_2__* k; } ;
typedef TYPE_1__ s ;
struct TYPE_14__ {int f; unsigned long j; size_t v; scalar_t__ l31; scalar_t__ p; int l33; int l73; int y; int o; scalar_t__ l34; TYPE_1__* d; int l38; int l46; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int,unsigned char) ;
 int FUNC_2 (TYPE_1__*,int,unsigned char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10(
e*VAR_0,unsigned long VAR_1){s*VAR_2=VAR_0->d;e*VAR_3;int VAR_4;{if(!(VAR_0->f!=3&&VAR_0->f!=6))goto
l574;return;l574:;}VAR_0->j=VAR_1&4294967294UL;{if(!(VAR_2->k[VAR_0->v].l31||VAR_2->k[VAR_0->
v].f!=3))goto l573;VAR_0->j=0;l573:;}{if(!(!VAR_2->k[VAR_0->v].l46))goto l570;VAR_0->
j&=~(1<<16);l570:;}{VAR_3=VAR_2->k;l569:if(!(VAR_3<VAR_2->k+4))goto l567;goto l564;
l568:++VAR_3;goto l569;l564:{if(!((VAR_3->f==3||VAR_3->f==6)&&VAR_3->p!=VAR_0->p&&VAR_3->v==VAR_0
->v))goto l562;VAR_0->j&=~VAR_3->j;l562:;}goto l568;l567:;}{if(!(VAR_2->l30&&VAR_2->k
->l34))goto l561;{VAR_4=1;l557:if(!(VAR_4<32))goto l525;goto l380;l526:++VAR_4;
goto l557;l380:{if(!((VAR_0->j>>VAR_4&1)))goto l490;{FUNC_6(VAR_2->k+VAR_0->v,VAR_4);FUNC_7(VAR_2
->k+VAR_0->v,VAR_4);}l490:;}goto l526;l525:;}l561:;}{if(!((VAR_0->j&65534)==0&&VAR_0
->l31!=0))goto l348;VAR_0->l33|=16;goto l466;l348:;VAR_0->l33&=~16;l466:;}FUNC_2(VAR_0
->d,VAR_0->l73,VAR_0->l33);;{if(!(VAR_0->l38))goto l377;{int VAR_5;int VAR_6;{if(!(VAR_0->l31
))goto l378;VAR_6=4294967295UL;goto l379;l378:;VAR_6=VAR_0->j;l379:;}FUNC_2(VAR_0->d,9,VAR_0->
p<<6);{VAR_5=1;l395:if(!(VAR_5<32))goto l323;goto l411;l396:++VAR_5;goto l395;
l411:{{l338:if(!(FUNC_9(VAR_0->d,0)&1))goto l413;{FUNC_8(128,0);}goto l338;l413:
;}FUNC_2(VAR_0->d,10,(unsigned char)(VAR_6>>VAR_5&1));}goto l396;l323:;}{l407:if(!(FUNC_9(VAR_0
->d,0)&1))goto l442;{FUNC_8(128,0);}goto l407;l442:;}FUNC_2(VAR_0->d,10,(
unsigned char)VAR_6&1);{VAR_5=1;l325:if(!(VAR_5<32))goto l426;goto l412;l425:++VAR_5;
goto l325;l412:{{l275:if(!(FUNC_9(VAR_0->d,0)&1))goto l492;{FUNC_8(128,0);}goto
l275;l492:;}FUNC_2(VAR_0->d,10,(unsigned char)(VAR_6>>VAR_5&1));}goto l425;l426:;}{
l263:if(!(FUNC_9(VAR_0->d,0)&1))goto l444;{FUNC_8(128,0);}goto l263;l444:;}FUNC_2(VAR_0->
d,10,(unsigned char)VAR_6&1);}l377:;}{if(!(VAR_0->f==3))goto l427;{FUNC_1(VAR_0,34,(
unsigned char)(VAR_0->j&254));FUNC_1(VAR_0,34+1,(unsigned char)(VAR_0->j>>8));FUNC_1(VAR_0,34+2
,(unsigned char)(VAR_0->j>>16));FUNC_1(VAR_0,34+3,(unsigned char)(VAR_0->j>>24));FUNC_1(VAR_0,
43,(unsigned char)(VAR_0->j&254));FUNC_1(VAR_0,43+1,(unsigned char)(VAR_0->j>>8));FUNC_1(VAR_0,
43+2,(unsigned char)(VAR_0->j>>16));FUNC_1(VAR_0,43+3,(unsigned char)(VAR_0->j>>24));}
l427:;}{if(!(!VAR_0->l34))goto l473;{FUNC_3(VAR_2->k+0);FUNC_3(VAR_2->k+1);}goto l294
;l473:;{{if(!(VAR_2->l30!=2))goto l456;FUNC_4(VAR_2);l456:;}{VAR_3=VAR_2->k;l487:if(!(VAR_3
<VAR_2->k+4))goto l489;goto l455;l471:VAR_3++;goto l487;l455:FUNC_5(VAR_3,&VAR_3->o);
goto l471;l489:;}}l294:;}FUNC_0(VAR_0,VAR_0->y);}
