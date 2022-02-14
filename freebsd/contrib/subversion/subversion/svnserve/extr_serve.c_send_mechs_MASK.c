
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {TYPE_1__* repository; TYPE_2__* client_info; } ;
typedef TYPE_3__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ tunnel_user; } ;
struct TYPE_5__ {int anon_access; int auth_access; scalar_t__ pwdb; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static svn_error_t *FUNC_2(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                               server_baton_t *VAR_3, enum access_type VAR_4,
                               svn_boolean_t VAR_5)
{
  if (!VAR_5 && VAR_3->repository->anon_access >= VAR_4)
    FUNC_0(FUNC_1(VAR_1, VAR_2, "ANONYMOUS"));
  if (VAR_3->client_info->tunnel_user && VAR_3->repository->auth_access >= VAR_4)
    FUNC_0(FUNC_1(VAR_1, VAR_2, "EXTERNAL"));
  if (VAR_3->repository->pwdb && VAR_3->repository->auth_access >= VAR_4)
    FUNC_0(FUNC_1(VAR_1, VAR_2, "CRAM-MD5"));
  return VAR_0;
}
