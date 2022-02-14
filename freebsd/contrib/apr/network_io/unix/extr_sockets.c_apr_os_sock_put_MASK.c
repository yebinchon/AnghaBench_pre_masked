
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_5__ {int timeout; int local_port_unknown; int local_interface_unknown; int remote_addr_unknown; int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_pool_t ;
typedef int apr_os_sock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

apr_status_t FUNC_2(apr_socket_t **VAR_3, apr_os_sock_t *VAR_4,
                           apr_pool_t *VAR_5)
{

    if ((*VAR_3) == ((void*)0)) {
        FUNC_0(VAR_3, VAR_5);



        FUNC_1(*VAR_3, VAR_0, VAR_2, 0);
        (*VAR_3)->timeout = -1;
    }
    (*VAR_3)->local_port_unknown = (*VAR_3)->local_interface_unknown = 1;
    (*VAR_3)->remote_addr_unknown = 1;
    (*VAR_3)->socketdes = *VAR_4;
    return VAR_1;
}
