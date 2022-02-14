
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int authz_id; int full; int * pool; } ;
typedef TYPE_1__ svn_authz_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,char const*,char const*,int ,int *,int *,int *) ;

svn_error_t *
FUNC_3(svn_authz_t **VAR_1,
                      const char *VAR_2,
                      const char *VAR_3,
                      svn_boolean_t VAR_4,
                      svn_repos_t *VAR_5,
                      apr_pool_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_authz_t *VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8));
  VAR_8->pool = VAR_6;

  FUNC_0(FUNC_2(&VAR_8->full, &VAR_8->authz_id, VAR_2, VAR_3,
                     VAR_4, VAR_5, VAR_6, VAR_7));

  *VAR_1 = VAR_8;
  return VAR_0;
}
