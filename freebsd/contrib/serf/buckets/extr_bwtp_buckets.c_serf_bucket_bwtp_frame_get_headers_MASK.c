
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_9__ {TYPE_1__* headers; } ;
typedef TYPE_2__ incoming_context_t ;
typedef TYPE_2__ frame_context_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

serf_bucket_t *FUNC_2(
    serf_bucket_t *VAR_0)
{
    if (FUNC_0(VAR_0)) {
        frame_context_t *VAR_1 = VAR_0->data;

        return VAR_1->headers;
    }
    else if (FUNC_1(VAR_0)) {
        incoming_context_t *VAR_2 = VAR_0->data;

        return VAR_2->headers;
    }

    return ((void*)0);
}
