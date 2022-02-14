
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* progress_baton; int progress_func; } ;
typedef TYPE_1__ socket_context_t ;
typedef int serf_progress_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;



void FUNC_0(
    serf_bucket_t *VAR_0,
    const serf_progress_t VAR_1,
    void *VAR_2)
{
    socket_context_t *VAR_3 = VAR_0->data;

    VAR_3->progress_func = VAR_1;
    VAR_3->progress_baton = VAR_2;
}
