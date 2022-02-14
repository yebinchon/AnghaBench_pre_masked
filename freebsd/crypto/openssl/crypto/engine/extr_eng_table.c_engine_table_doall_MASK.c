
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int engine_table_doall_cb ;
struct TYPE_6__ {void* arg; int * cb; } ;
struct TYPE_5__ {int piles; } ;
typedef TYPE_1__ ENGINE_TABLE ;
typedef TYPE_2__ ENGINE_PILE_DOALL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;

void FUNC_1(ENGINE_TABLE *VAR_1, engine_table_doall_cb *VAR_2,
                        void *VAR_3)
{
    ENGINE_PILE_DOALL VAR_4;
    VAR_4.cb = VAR_2;
    VAR_4.arg = VAR_3;
    if (VAR_1)
        FUNC_0(&VAR_1->piles, VAR_0, &VAR_4);
}
