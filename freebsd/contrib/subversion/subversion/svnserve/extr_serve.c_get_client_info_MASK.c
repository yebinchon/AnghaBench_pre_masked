
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_7__ {int tunnel; } ;
typedef TYPE_1__ serve_params_t ;
struct TYPE_8__ {int remote_host; int * authz_user; int * user; int tunnel_user; int tunnel; } ;
typedef TYPE_2__ client_info_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;

client_info_t *
FUNC_3(svn_ra_svn_conn_t *VAR_0,
                serve_params_t *VAR_1,
                apr_pool_t *VAR_2)
{
  client_info_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->tunnel = VAR_1->tunnel;
  VAR_3->tunnel_user = FUNC_1(VAR_1, VAR_2);
  VAR_3->user = ((void*)0);
  VAR_3->authz_user = ((void*)0);
  VAR_3->remote_host = FUNC_2(VAR_0);

  return VAR_3;
}
