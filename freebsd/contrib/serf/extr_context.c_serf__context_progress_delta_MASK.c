
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int progress_written; int progress_read; int progress_baton; int (* progress_func ) (int ,int ,int ) ;} ;
typedef TYPE_1__ serf_context_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(
    void *VAR_0,
    apr_off_t VAR_1,
    apr_off_t VAR_2)
{
    serf_context_t *VAR_3 = VAR_0;

    VAR_3->progress_read += VAR_1;
    VAR_3->progress_written += VAR_2;

    if (VAR_3->progress_func)
        VAR_3->progress_func(VAR_3->progress_baton,
                           VAR_3->progress_read,
                           VAR_3->progress_written);
}
