
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int respool; int handler_baton; int (* handler ) (TYPE_1__*,int *,int ,int ) ;} ;
typedef TYPE_1__ serf_request_t ;
typedef int apr_status_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_request_t *VAR_0,
                                   serf_request_t **VAR_1,
                                   int VAR_2)
{

    if (VAR_0->handler && VAR_2) {



        (*VAR_0->handler)(VAR_0, ((void*)0), VAR_0->handler_baton,
                            VAR_0->respool);
    }

    if (*VAR_1 == VAR_0) {
        *VAR_1 = VAR_0->next;
    }
    else {
        serf_request_t *VAR_3 = *VAR_1;

        while (VAR_3->next && VAR_3->next != VAR_0)
            VAR_3 = VAR_3->next;

        if (VAR_3->next) {
            VAR_3->next = VAR_3->next->next;
        }
    }

    return FUNC_0(VAR_0);
}
