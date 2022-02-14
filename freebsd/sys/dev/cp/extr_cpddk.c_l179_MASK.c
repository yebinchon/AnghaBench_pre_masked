
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int l116; TYPE_2__* k; int l30; } ;
typedef TYPE_1__ s ;
typedef int l72 ;
struct TYPE_10__ {int* j; int* l40; } ;
struct TYPE_9__ {int f; int p; int v; int j; TYPE_3__ o; int l46; int l34; TYPE_1__* d; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_4(e*VAR_0,l72*VAR_1){s*VAR_2=VAR_0->d;e*VAR_3;int VAR_4;{if
(!(VAR_0->f!=3||!VAR_0->l34))goto l247;return;l247:;}{if(!(!VAR_2->l30))goto l248
;FUNC_3(&VAR_0->o,0,sizeof(VAR_0->o));goto l249;l248:;FUNC_2(&VAR_0->o,VAR_1,
sizeof(VAR_0->o));l249:;}VAR_0->o.j[0]=0;{if(!(!VAR_0->l46))goto l250;VAR_0->o.j[16]=
0;l250:;}{VAR_4=1;l251:if(!(VAR_4<32))goto l252;goto l253;l894:++VAR_4;goto l251;
l253:{if(!(VAR_0->o.j[VAR_4]&=31))goto l688;{{if(!((VAR_2->k+2)->f!=3))goto l680;
VAR_0->o.l40[VAR_4]&=1;goto l677;l680:;VAR_0->o.l40[VAR_4]&=3;l677:;}{VAR_3=VAR_2->k;l673:if(
!(VAR_3<VAR_2->k+4))goto l152;goto l670;l209:++VAR_3;goto l673;l670:{{if(!(VAR_3->f!=
3))goto l663;goto l209;l663:;}{if(!(VAR_3->p==VAR_0->o.l40[VAR_4]&&VAR_0->o.j[VAR_4]==16
&&!VAR_3->l46))goto l660;{VAR_0->o.j[VAR_4]=0;goto l152;}l660:;}{if(!((VAR_3->v==VAR_0->o
.l40[VAR_4]&&((VAR_3->j>>VAR_0->o.j[VAR_4])&1))||(VAR_3->v==VAR_0->p&&((VAR_3->j>>VAR_4)&1))))goto
l658;{VAR_0->o.j[VAR_4]=0;goto l152;}l658:;}{if(!(VAR_3->p==VAR_0->p))goto l611;goto
l152;l611:;}}goto l209;l152:;}}l688:;}goto l894;l252:;}FUNC_0(VAR_2,8,VAR_2->l116&
~1);FUNC_0(VAR_2,28,VAR_0->p<<5);FUNC_0(VAR_2,31,139);{VAR_4=1;l606:if(!(VAR_4<32))goto l602;goto
l601;l605:++VAR_4;goto l606;l601:FUNC_0(VAR_2,31,(!VAR_0->o.j[VAR_4])?141:(VAR_0->o.l40[VAR_4]<<5)|
VAR_0->o.j[VAR_4]);goto l605;l602:;}FUNC_0(VAR_2,8,VAR_2->l116);{VAR_4=0;l600:if(!(VAR_4<4))goto
l598;goto l597;l196:VAR_4++;goto l600;l597:{{if(!((VAR_2->k+VAR_4)->f!=3))goto
l594;goto l196;l594:;}FUNC_1(VAR_2->k+VAR_4);}goto l196;l598:;}}
