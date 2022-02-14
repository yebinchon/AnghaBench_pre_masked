
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thread_local_inits_st {int async; int err_state; int rand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 struct thread_local_inits_st* FUNC_2 (int) ;
 int VAR_3 ;

int FUNC_3(uint64_t VAR_4)
{
    struct thread_local_inits_st *VAR_5;

    if (!FUNC_0(0, ((void*)0)))
        return 0;

    VAR_5 = FUNC_2(1);

    if (VAR_5 == ((void*)0))
        return 0;

    if (VAR_4 & VAR_0) {




        VAR_5->async = 1;
    }

    if (VAR_4 & VAR_1) {




        VAR_5->err_state = 1;
    }

    if (VAR_4 & VAR_2) {




        VAR_5->rand = 1;
    }

    return 1;
}
