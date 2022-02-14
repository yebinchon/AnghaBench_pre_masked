
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {int len; } ;
typedef TYPE_2__ request_context_t ;
typedef int apr_int64_t ;



void FUNC_0(
    serf_bucket_t *VAR_0,
    apr_int64_t VAR_1)
{
    request_context_t *VAR_2 = (request_context_t *)VAR_0->data;

    VAR_2->len = VAR_1;
}
