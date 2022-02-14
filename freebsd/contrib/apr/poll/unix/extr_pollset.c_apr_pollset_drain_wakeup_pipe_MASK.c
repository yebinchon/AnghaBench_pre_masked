
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rb ;
typedef int apr_size_t ;
struct TYPE_3__ {int * wakeup_pipe; } ;
typedef TYPE_1__ apr_pollset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int*) ;

void FUNC_1(apr_pollset_t *VAR_1)
{
    char VAR_2[512];
    apr_size_t VAR_3 = sizeof(VAR_2);

    while (FUNC_0(VAR_1->wakeup_pipe[0], VAR_2, &VAR_3) == VAR_0) {





        if (VAR_3 != sizeof(VAR_2))
            break;
    }
}
