
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t l115; TYPE_2__* k; int * l94; } ;
typedef TYPE_1__ s ;
struct TYPE_7__ {int f; } ;
typedef TYPE_2__ e ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_2(s*VAR_0){unsigned long VAR_1;
e*VAR_2;{l221:if(!((VAR_1= * (volatile unsigned long* )&VAR_0->l94[VAR_0->l115])!=0
))goto l310;{ * (volatile unsigned long* )&VAR_0->l94[VAR_0->l115]=0;VAR_0->l115=
++VAR_0->l115%128;{if(!((VAR_1&3489660928UL)!=3489660928UL))goto l309;{;
goto l221;}l309:;}{VAR_2=VAR_0->k;l307:if(!(VAR_2<VAR_0->k+4))goto l302;goto l299;
l306:++VAR_2;goto l307;l299:{if(!(VAR_2->f==3&&(FUNC_1(VAR_2,7,255)&16)))goto l298;{
;FUNC_0(VAR_2);}l298:;}goto l306;l302:;}}goto l221;l310:;}}
