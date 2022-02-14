
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int latency; TYPE_1__* ctx; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int apr_interval_time_t ;
struct TYPE_4__ {scalar_t__ proxy_address; } ;



apr_interval_time_t FUNC_0(serf_connection_t *VAR_0)
{
    if (VAR_0->ctx->proxy_address) {


        return -1;
    }

    return VAR_0->latency;
}
