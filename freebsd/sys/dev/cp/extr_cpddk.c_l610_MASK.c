
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* k; } ;
typedef TYPE_2__ s ;
struct TYPE_5__ {int* j; scalar_t__* l40; } ;
struct TYPE_7__ {scalar_t__ p; TYPE_1__ o; TYPE_2__* d; } ;
typedef TYPE_3__ e ;



__attribute__((used)) static int FUNC_0(e*VAR_0,int
VAR_1){s*VAR_2=VAR_0->d;e*VAR_3;int VAR_4;{VAR_3=VAR_2->k;l882:if(!(VAR_3<VAR_2->k+4))goto l872;goto
l850;l874:++VAR_3;goto l882;l850:{VAR_4=1;l766:if(!(VAR_4<32))goto l755;goto l736
;l764:++VAR_4;goto l766;l736:{if(!(VAR_3->o.j[VAR_4]==VAR_1&&VAR_3->o.l40[VAR_4]==VAR_0->p))goto
l735;{VAR_3->o.j[VAR_4]=0;return 1;}l735:;}goto l764;l755:;}goto l874;l872:;}
return 0;}
