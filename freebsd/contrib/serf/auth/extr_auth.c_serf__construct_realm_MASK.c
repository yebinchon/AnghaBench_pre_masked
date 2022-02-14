
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* proxy_address; } ;
typedef TYPE_3__ serf_context_t ;
struct TYPE_6__ {int port; int hostname; int scheme; } ;
struct TYPE_9__ {TYPE_3__* ctx; TYPE_1__ host_info; } ;
typedef TYPE_4__ serf_connection_t ;
typedef scalar_t__ peer_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int port; int hostname; } ;


 scalar_t__ VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ,char const*,...) ;

const char *FUNC_1(peer_t VAR_1,
                                  serf_connection_t *VAR_2,
                                  const char *VAR_3,
                                  apr_pool_t *VAR_4)
{
    if (VAR_1 == VAR_0) {
        return FUNC_0(VAR_4, "<%s://%s:%d> %s",
                            VAR_2->host_info.scheme,
                            VAR_2->host_info.hostname,
                            VAR_2->host_info.port,
                            VAR_3);
    } else {
        serf_context_t *VAR_5 = VAR_2->ctx;

        return FUNC_0(VAR_4, "<http://%s:%d> %s",
                            VAR_5->proxy_address->hostname,
                            VAR_5->proxy_address->port,
                            VAR_3);
    }
}
