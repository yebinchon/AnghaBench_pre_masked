
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int apr_status_t ;
struct TYPE_9__ {TYPE_2__* local_addr; scalar_t__ local_interface_unknown; scalar_t__ local_port_unknown; int socketdes; } ;
typedef TYPE_4__ apr_socket_t ;
struct TYPE_6__ {int sin_port; } ;
struct TYPE_8__ {TYPE_1__ sin; } ;
struct TYPE_7__ {int salen; TYPE_3__ sa; int port; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static apr_status_t FUNC_3(apr_socket_t *VAR_1)
{
    VAR_1->local_addr->salen = sizeof(VAR_1->local_addr->sa);
    if (FUNC_1(VAR_1->socketdes, (struct sockaddr *)&VAR_1->local_addr->sa,
                    &VAR_1->local_addr->salen) < 0) {
        return FUNC_0();
    }
    else {
        VAR_1->local_port_unknown = VAR_1->local_interface_unknown = 0;

        VAR_1->local_addr->port = FUNC_2(VAR_1->local_addr->sa.sin.sin_port);
        return VAR_0;
    }
}
