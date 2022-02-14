
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_progress_t ;
struct TYPE_3__ {void* progress_baton; int progress_func; } ;
typedef TYPE_1__ serf_context_t ;



void FUNC_0(
    serf_context_t *VAR_0,
    const serf_progress_t VAR_1,
    void *VAR_2)
{
    VAR_0->progress_func = VAR_1;
    VAR_0->progress_baton = VAR_2;
}
