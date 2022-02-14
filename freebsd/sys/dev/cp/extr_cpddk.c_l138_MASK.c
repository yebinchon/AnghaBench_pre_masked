
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* k; int l30; } ;
typedef TYPE_1__ s ;
struct TYPE_7__ {int f; scalar_t__ v; scalar_t__ p; unsigned long j; int l34; int l31; TYPE_1__* d; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*,int,unsigned char) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(e*VAR_0){s*VAR_1=VAR_0->d;e*VAR_2;unsigned long VAR_3;int VAR_4;{if(!(VAR_0->l31))goto l722
;{VAR_3=0;}goto l728;l722:;{if(!(VAR_0->l34))goto l724;{VAR_3=~1;{VAR_2=VAR_1->k;l710
:if(!(VAR_2<VAR_1->k+4))goto l702;goto l701;l709:++VAR_2;goto l710;l701:{if(!((VAR_2
->f==3||VAR_2->f==6)&&VAR_2->v==VAR_0->p))goto l697;VAR_3&=~VAR_2->j;l697:;}goto l709;
l702:;}{if(!(VAR_1->l30))goto l690;{VAR_4=1;l689:if(!(VAR_4<32))goto l682;goto
l676;l678:++VAR_4;goto l689;l676:{if(!((VAR_3>>VAR_4&1)&&FUNC_1(VAR_0,VAR_4)))goto l672;
VAR_3&=~(1<<VAR_4);l672:;}goto l678;l682:;}l690:;}}goto l671;l724:;{if(!(VAR_1
->l30))goto l668;{VAR_3=VAR_0->p?(VAR_1->k[0].j|VAR_1->k[1].j):0;}goto l667;l668:;
VAR_3=~VAR_0->j;l667:;}l671:;}l728:;}FUNC_0(VAR_0,38,(unsigned char)(VAR_3&254));FUNC_0(VAR_0,
38+1,(unsigned char)(VAR_3>>8));FUNC_0(VAR_0,38+2,(unsigned char)(VAR_3>>16));FUNC_0(VAR_0,
38+3,(unsigned char)(VAR_3>>24));;}
