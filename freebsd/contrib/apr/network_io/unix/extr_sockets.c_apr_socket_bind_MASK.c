
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int apr_status_t ;
struct TYPE_9__ {int local_port_unknown; TYPE_4__* local_addr; int socketdes; } ;
typedef TYPE_3__ apr_socket_t ;
struct TYPE_7__ {scalar_t__ sin_port; } ;
struct TYPE_8__ {TYPE_1__ sin; } ;
struct TYPE_10__ {TYPE_2__ sa; int salen; } ;
typedef TYPE_4__ apr_sockaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int ) ;
 int VAR_1 ;

apr_status_t FUNC_1(apr_socket_t *VAR_2, apr_sockaddr_t *VAR_3)
{
    if (FUNC_0(VAR_2->socketdes,
             (struct sockaddr *)&VAR_3->sa, VAR_3->salen) == -1) {
        return VAR_1;
    }
    else {
        VAR_2->local_addr = VAR_3;

        if (VAR_2->local_addr->sa.sin.sin_port == 0) {
            VAR_2->local_port_unknown = 1;
        }
        return VAR_0;
    }
}
