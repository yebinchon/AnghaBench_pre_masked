
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int remote_addr_unknown; int pollset; TYPE_2__* remote_addr; int * pool; TYPE_2__* local_addr; } ;
typedef TYPE_1__ apr_socket_t ;
struct TYPE_5__ {int * pool; } ;
typedef TYPE_2__ apr_sockaddr_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(apr_socket_t **VAR_0, apr_pool_t *VAR_1)
{
    *VAR_0 = (apr_socket_t *)FUNC_0(VAR_1, sizeof(apr_socket_t));
    (*VAR_0)->pool = VAR_1;
    (*VAR_0)->local_addr = (apr_sockaddr_t *)FUNC_0((*VAR_0)->pool,
                                                       sizeof(apr_sockaddr_t));
    (*VAR_0)->local_addr->pool = VAR_1;
    (*VAR_0)->remote_addr = (apr_sockaddr_t *)FUNC_0((*VAR_0)->pool,
                                                        sizeof(apr_sockaddr_t));
    (*VAR_0)->remote_addr->pool = VAR_1;
    (*VAR_0)->remote_addr_unknown = 1;



    (void) FUNC_1(&(*VAR_0)->pollset, 1, VAR_1, 0);

}
