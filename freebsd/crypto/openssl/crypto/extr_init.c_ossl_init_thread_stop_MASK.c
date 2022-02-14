
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_local_inits_st {scalar_t__ rand; scalar_t__ err_state; scalar_t__ async; } ;


 int FUNC_0 (struct thread_local_inits_st*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct thread_local_inits_st *VAR_1)
{

    if (VAR_1 == ((void*)0))
        return;

    if (VAR_1->async) {




        FUNC_1();
    }

    if (VAR_1->err_state) {




        FUNC_3();
    }

    if (VAR_1->rand) {




        FUNC_2();
    }

    FUNC_0(VAR_1);
}
