
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {TYPE_1__* headers; } ;
typedef TYPE_2__ request_context_t ;



serf_bucket_t *FUNC_0(
    serf_bucket_t *VAR_0)
{
    return ((request_context_t *)VAR_0->data)->headers;
}
