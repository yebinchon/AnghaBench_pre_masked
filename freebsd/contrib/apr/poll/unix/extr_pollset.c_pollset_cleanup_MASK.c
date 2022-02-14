
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_5__ {int flags; int ** wakeup_pipe; TYPE_1__* provider; } ;
typedef TYPE_2__ apr_pollset_t ;
struct TYPE_4__ {int (* cleanup ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_2)
{
    apr_pollset_t *VAR_3 = (apr_pollset_t *) VAR_2;
    if (VAR_3->provider->cleanup) {
        (*VAR_3->provider->cleanup)(VAR_3);
    }
    if (VAR_3->flags & VAR_0) {

        if (VAR_3->wakeup_pipe[0]) {



            FUNC_1(VAR_3->wakeup_pipe[0]);

            VAR_3->wakeup_pipe[0] = ((void*)0);
        }
        if (VAR_3->wakeup_pipe[1]) {



            FUNC_1(VAR_3->wakeup_pipe[1]);

            VAR_3->wakeup_pipe[1] = ((void*)0);
        }
    }

    return VAR_1;
}
