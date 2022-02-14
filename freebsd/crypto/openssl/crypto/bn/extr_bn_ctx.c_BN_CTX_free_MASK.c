
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int size; TYPE_2__* head; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {TYPE_6__ pool; TYPE_5__ stack; } ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* vals; } ;
struct TYPE_8__ {int dmax; } ;
typedef TYPE_2__ BN_POOL_ITEM ;
typedef TYPE_3__ BN_CTX ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_4(BN_CTX *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    FUNC_1(&VAR_2->stack);
    FUNC_0(&VAR_2->pool);
    FUNC_2(VAR_2);
}
