
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {int head_req; } ;
typedef TYPE_2__ response_context_t ;



void FUNC_0(
    serf_bucket_t *VAR_0)
{
    response_context_t *VAR_1 = VAR_0->data;

    VAR_1->head_req = 1;
}
