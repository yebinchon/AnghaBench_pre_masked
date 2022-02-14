
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ l30; TYPE_2__* k; } ;
typedef TYPE_1__ s ;
struct TYPE_9__ {int f; int v; int p; int j; int l34; TYPE_1__* d; int l31; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

void FUNC_4(e*VAR_0,int VAR_1){s*VAR_2=VAR_0->d;e*VAR_3;int VAR_4;{
if(!(VAR_0->f!=3&&VAR_0->f!=6))goto l661;{VAR_0->v=VAR_0->p;FUNC_1(VAR_0);return;}l661:;}{
if(!(VAR_0->l31))goto l659;VAR_1=VAR_0->p;l659:;}{if(!(!VAR_0->l34))goto l656;VAR_1=(VAR_0->p
==1)?(VAR_2->l30?0:1):VAR_0->p;l656:;}{if(!((VAR_0->d->k+2)->f==3))goto l647;VAR_1&=3
;goto l646;l647:;VAR_1&=1;l646:;}VAR_0->v=VAR_1;{VAR_3=VAR_2->k;l644:if(!(VAR_3<VAR_2->k+4))goto
l642;goto l641;l633:++VAR_3;goto l644;l641:{if(!((VAR_3->f==3||VAR_3->f==6)&&VAR_3!=VAR_0
&&VAR_3->v==VAR_0->v))goto l637;VAR_0->j&=~VAR_3->j;l637:;}goto l633;l642:;}{if(!(VAR_0->
l34))goto l634;{{if(!(VAR_2->l30))goto l629;{VAR_4=1;l630:if(!(VAR_4<32))goto l369
;goto l368;l733:++VAR_4;goto l630;l368:{if(!((VAR_0->j>>VAR_4&1)&&(FUNC_2(VAR_0,VAR_4)||
FUNC_3(VAR_0,VAR_4))))goto l737;VAR_0->j&=~(1<<VAR_4);l737:;}goto l733;l369:;}l629:;}
FUNC_1(VAR_0);}l634:;}FUNC_0(VAR_0,VAR_0->j);}
