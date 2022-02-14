
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int serf_bucket_aggregate_eof_t ;
struct TYPE_5__ {void* hold_open_baton; int hold_open; } ;
typedef TYPE_2__ aggregate_context_t ;



void FUNC_0(serf_bucket_t *VAR_0,
                                     serf_bucket_aggregate_eof_t VAR_1,
                                     void *VAR_2)
{
    aggregate_context_t *VAR_3 = VAR_0->data;
    VAR_3->hold_open = VAR_1;
    VAR_3->hold_open_baton = VAR_2;
}
