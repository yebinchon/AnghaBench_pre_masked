
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int error ;
typedef int apr_status_t ;
typedef int apr_socklen_t ;
struct TYPE_11__ {scalar_t__ timeout; int local_port_unknown; int local_interface_unknown; int connected; TYPE_2__* local_addr; TYPE_8__* remote_addr; scalar_t__ remote_addr_unknown; int socketdes; } ;
typedef TYPE_3__ apr_socket_t ;
struct TYPE_9__ {int sin; } ;
struct TYPE_12__ {int port; int family; int salen; TYPE_1__ sa; int ipaddr_len; int ipaddr_ptr; } ;
typedef TYPE_4__ apr_sockaddr_t ;
struct TYPE_13__ {int salen; TYPE_1__ sa; } ;
struct TYPE_10__ {scalar_t__ port; int ipaddr_len; int ipaddr_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_8__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int ,struct sockaddr const*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,char*,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

apr_status_t FUNC_5(apr_socket_t *VAR_9, apr_sockaddr_t *VAR_10)
{
    int VAR_11;

    do {
        VAR_11 = FUNC_2(VAR_9->socketdes,
                     (const struct sockaddr *)&VAR_10->sa.sin,
                     VAR_10->salen);
    } while (VAR_11 == -1 && VAR_7 == VAR_3);




    if ((VAR_11 == -1) && (VAR_7 == VAR_2 || VAR_7 == VAR_1)
                   && (VAR_9->timeout > 0)) {
        VAR_11 = FUNC_1(((void*)0), VAR_9, 0);
        if (VAR_11 != VAR_0) {
            return VAR_11;
        }
    }


    if (FUNC_4(VAR_10->ipaddr_ptr, VAR_8, VAR_10->ipaddr_len)) {



        VAR_9->remote_addr_unknown = 0;


        VAR_9->remote_addr->sa = VAR_10->sa;
        VAR_9->remote_addr->salen = VAR_10->salen;

        FUNC_0(VAR_9->remote_addr, VAR_10->family, VAR_10->port);
    }

    if (VAR_9->local_addr->port == 0) {

        VAR_9->local_port_unknown = 1;
    }
    if (!FUNC_4(VAR_9->local_addr->ipaddr_ptr,
                VAR_8,
                VAR_9->local_addr->ipaddr_len)) {



        VAR_9->local_interface_unknown = 1;
    }

    if (VAR_11 == -1 && VAR_7 != VAR_4) {
        return VAR_7;
    }


    VAR_9->connected=1;

    return VAR_0;
}
