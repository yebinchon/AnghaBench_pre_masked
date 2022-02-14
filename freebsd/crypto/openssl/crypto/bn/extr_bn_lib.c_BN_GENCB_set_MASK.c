
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* cb_2 ) (int,int,TYPE_2__*) ;} ;
struct TYPE_7__ {int ver; TYPE_1__ cb; void* arg; } ;
typedef TYPE_2__ BN_GENCB ;



void FUNC_0(BN_GENCB *VAR_0, int (*VAR_1) (int, int, BN_GENCB *),
                  void *VAR_2)
{
    BN_GENCB *VAR_3 = VAR_0;
    VAR_3->ver = 2;
    VAR_3->arg = VAR_2;
    VAR_3->cb.cb_2 = VAR_1;
}
