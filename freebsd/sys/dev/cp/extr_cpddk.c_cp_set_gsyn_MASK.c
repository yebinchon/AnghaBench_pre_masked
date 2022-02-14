
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int l30; TYPE_2__* k; } ;
typedef TYPE_1__ s ;
struct TYPE_7__ {int f; int l26; unsigned char l61; int l41; int l62; TYPE_1__* d; int l64; int p; int l31; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(e*VAR_0,int VAR_1){switch(VAR_0->f){case 3:{unsigned char
VAR_2=0;e*VAR_3;s*VAR_4=VAR_0->d;{if(!(VAR_0->l31&&VAR_1!=0))goto l540;VAR_1=1;l540:;}
switch(VAR_1){default:VAR_1=0;VAR_2=0;break;case 1:VAR_1=2+VAR_0->p;VAR_2=1+VAR_0->p;
break;case 2:VAR_2=1;break;case 3:VAR_2=2;break;case 4:VAR_2=3;{if(!(VAR_4->k[2
].f!=3))goto l691;return;l691:;}break;case 5:VAR_2=4;{if(!(VAR_4->k[3].f!=3
))goto l692;return;l692:;}break;}{VAR_3=VAR_4->k;l693:if(!(VAR_3<VAR_4->k+4))goto l536
;goto l535;l212:VAR_3++;goto l693;l535:{{if(!(VAR_3->f!=3||(!VAR_4->l30&&VAR_3!=VAR_0)))goto
l533;goto l212;l533:;}FUNC_0(VAR_4,VAR_3->l64,VAR_3->l26&~128);VAR_3->l26&=~7;VAR_3->l26|=VAR_2;
VAR_3->l61=(unsigned char)VAR_1;FUNC_0(VAR_4,VAR_3->l64,VAR_3->l26);}goto l212;l536:;}}break
;case 2:{if(!(VAR_1))goto l699;{VAR_0->l61=1;VAR_0->l41|=8;}goto l703;l699:;{VAR_0
->l61=0;VAR_0->l41&=~8;}l703:;}FUNC_0(VAR_0->d,VAR_0->l62,VAR_0->l41);break;case 4:case 7:
case 8:{if(!(VAR_1))goto l704;VAR_0->l61=1;goto l705;l704:;VAR_0->l61=0;l705:;}
FUNC_1(VAR_0);break;}}
