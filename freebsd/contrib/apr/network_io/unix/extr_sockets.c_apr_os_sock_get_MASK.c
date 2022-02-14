
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {int socketdes; } ;
typedef TYPE_1__ apr_socket_t ;
typedef int apr_os_sock_t ;


 int VAR_0 ;

apr_status_t FUNC_0(apr_os_sock_t *VAR_1, apr_socket_t *VAR_2)
{
    *VAR_1 = VAR_2->socketdes;
    return VAR_0;
}
