
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* k; int l30; } ;
typedef TYPE_1__ s ;
struct TYPE_7__ {unsigned char* j; int* l40; } ;
typedef TYPE_2__ l72 ;
struct TYPE_8__ {int f; size_t v; unsigned long j; size_t p; int o; int l46; int l34; } ;
typedef TYPE_3__ e ;


 int FUNC_0 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(s*VAR_0){e
 *VAR_1;unsigned long VAR_2[4]={0,0,0,0},VAR_3[2]={0,0};l72 VAR_4[4];int VAR_5;{if(!(!
VAR_0->l30||!VAR_0->k->l34))goto l474;return;l474:;}{VAR_1=VAR_0->k;l475:if(!(VAR_1<VAR_0->k+
4))goto l246;goto l486;l190:VAR_1++;goto l475;l486:{{if(!(VAR_1->f!=3&&VAR_1->f!=
6))goto l496;goto l190;l496:;}VAR_2[VAR_1->v]|=VAR_1->j;{if(!(!VAR_1->l46))goto l488;
VAR_2[VAR_1->p]|=(1<<16);l488:;}}goto l190;l246:;}VAR_3[0]=~(VAR_2[0]|VAR_2[1]);VAR_3[1
]=~(VAR_2[2]|VAR_2[3]);{VAR_5=1;l495:if(!(VAR_5<32))goto l491;goto l505;l503:VAR_5++;goto
l495;l505:{{if(!((VAR_3[0]>>VAR_5)&1))goto l506;{VAR_4[0].j[VAR_5]=(unsigned char)VAR_5
;VAR_4[1].j[VAR_5]=(unsigned char)VAR_5;VAR_4[0].l40[VAR_5]=1;VAR_4[1].l40[VAR_5]=0;}goto l799;
l506:;{VAR_4[0].j[VAR_5]=0;VAR_4[1].j[VAR_5]=0;VAR_4[0].l40[VAR_5]=0;VAR_4[1].l40[VAR_5]=0;}l799:;}{
if(!((VAR_3[1]>>VAR_5)&1))goto l501;{VAR_4[2].j[VAR_5]=(unsigned char)VAR_5;VAR_4[3].j[VAR_5]=
(unsigned char)VAR_5;VAR_4[2].l40[VAR_5]=3;VAR_4[3].l40[VAR_5]=2;}goto l502;l501:;{VAR_4[2].j
[VAR_5]=0;VAR_4[3].j[VAR_5]=0;VAR_4[2].l40[VAR_5]=0;VAR_4[3].l40[VAR_5]=0;}l502:;}}goto l503;l491
:;}FUNC_0(&VAR_0->k[0].o,VAR_4+0,sizeof(l72));FUNC_0(&VAR_0->k[1].o,VAR_4+1,sizeof(
l72));FUNC_0(&VAR_0->k[2].o,VAR_4+2,sizeof(l72));FUNC_0(&VAR_0->k[3].o,VAR_4+3,sizeof
(l72));}
