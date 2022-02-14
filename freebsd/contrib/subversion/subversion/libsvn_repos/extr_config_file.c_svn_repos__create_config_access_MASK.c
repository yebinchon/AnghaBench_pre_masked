
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_repos_t ;
struct TYPE_4__ {int * pool; int * repos; } ;
typedef TYPE_1__ config_access_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;

config_access_t *
FUNC_2(svn_repos_t *VAR_0,
                                apr_pool_t *VAR_1)
{
  apr_pool_t *VAR_2 = FUNC_1(VAR_1);
  config_access_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->repos = VAR_0;
  VAR_3->pool = VAR_2;

  return VAR_3;
}
