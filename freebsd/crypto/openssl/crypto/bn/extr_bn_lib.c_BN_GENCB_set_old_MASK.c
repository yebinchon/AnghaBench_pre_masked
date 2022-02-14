
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* cb_1 ) (int,int,void*) ;} ;
struct TYPE_5__ {int ver; TYPE_1__ cb; void* arg; } ;
typedef TYPE_2__ BN_GENCB ;



void FUNC_0(BN_GENCB *VAR_0, void (*VAR_1) (int, int, void *),
                      void *VAR_2)
{
    BN_GENCB *VAR_3 = VAR_0;
    VAR_3->ver = 1;
    VAR_3->arg = VAR_2;
    VAR_3->cb.cb_1 = VAR_1;
}
