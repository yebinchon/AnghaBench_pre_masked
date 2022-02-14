
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blocked; int * currjob; } ;
typedef TYPE_1__ async_ctx ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 () ;

void FUNC_2(void)
{
    async_ctx *VAR_1;

    if (!FUNC_0(VAR_0, ((void*)0)))
        return;

    VAR_1 = FUNC_1();
    if (VAR_1 == ((void*)0) || VAR_1->currjob == ((void*)0)) {



        return;
    }
    VAR_1->blocked++;
}
