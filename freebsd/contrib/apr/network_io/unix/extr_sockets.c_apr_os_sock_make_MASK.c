
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_16__ {int timeout; int local_port_unknown; int local_interface_unknown; int connected; int remote_addr_unknown; int pool; scalar_t__ inherit; TYPE_4__* remote_addr; TYPE_2__* local_addr; int socketdes; } ;
typedef TYPE_5__ apr_socket_t ;
typedef int apr_pool_t ;
struct TYPE_17__ {scalar_t__ remote; scalar_t__ local; int * os_sock; int protocol; int type; int family; } ;
typedef TYPE_6__ apr_os_sock_info_t ;
struct TYPE_18__ {int sin_port; } ;
struct TYPE_14__ {TYPE_8__ sin; } ;
struct TYPE_15__ {TYPE_3__ sa; void* port; int salen; } ;
struct TYPE_12__ {TYPE_8__ sin; } ;
struct TYPE_13__ {TYPE_1__ sa; void* port; int salen; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__**,int *) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (TYPE_8__*,scalar_t__,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ) ;
 int VAR_1 ;

apr_status_t FUNC_5(apr_socket_t **VAR_2,
                              apr_os_sock_info_t *VAR_3,
                              apr_pool_t *VAR_4)
{
    FUNC_0(VAR_2, VAR_4);
    FUNC_4(*VAR_2, VAR_3->family, VAR_3->type, VAR_3->protocol);
    (*VAR_2)->timeout = -1;
    (*VAR_2)->socketdes = *VAR_3->os_sock;
    if (VAR_3->local) {
        FUNC_2(&(*VAR_2)->local_addr->sa.sin,
               VAR_3->local,
               (*VAR_2)->local_addr->salen);

        (*VAR_2)->local_addr->port = FUNC_3((*VAR_2)->local_addr->sa.sin.sin_port);
    }
    else {
        (*VAR_2)->local_port_unknown = (*VAR_2)->local_interface_unknown = 1;
    }
    if (VAR_3->remote) {

        (*VAR_2)->connected = 1;

        FUNC_2(&(*VAR_2)->remote_addr->sa.sin,
               VAR_3->remote,
               (*VAR_2)->remote_addr->salen);

        (*VAR_2)->remote_addr->port = FUNC_3((*VAR_2)->remote_addr->sa.sin.sin_port);
    }
    else {
        (*VAR_2)->remote_addr_unknown = 1;
    }

    (*VAR_2)->inherit = 0;
    FUNC_1((*VAR_2)->pool, (void *)(*VAR_2),
                              VAR_1, VAR_1);
    return VAR_0;
}
