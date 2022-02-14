
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ssl_ctx; } ;
typedef TYPE_1__ ssl_context_t ;
typedef int serf_ssl_context_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;



serf_ssl_context_t *FUNC_0(
     serf_bucket_t *VAR_0)
{
    ssl_context_t *VAR_1 = VAR_0->data;
    return VAR_1->ssl_ctx;
}
