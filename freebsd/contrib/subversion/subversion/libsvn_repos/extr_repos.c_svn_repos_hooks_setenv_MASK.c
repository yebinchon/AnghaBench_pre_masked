
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; void* hooks_env_path; int conf_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char const* VAR_1 ;
 void* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (int ,char const*,int ) ;

svn_error_t *
FUNC_3(svn_repos_t *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4)
{
  if (VAR_3 == ((void*)0))
    VAR_2->hooks_env_path = FUNC_2(VAR_2->conf_path,
                                            VAR_1,
                                            VAR_2->pool);
  else if (!FUNC_1(VAR_3))
    VAR_2->hooks_env_path = FUNC_2(VAR_2->conf_path,
                                            VAR_3,
                                            VAR_2->pool);
  else
    VAR_2->hooks_env_path = FUNC_0(VAR_2->pool, VAR_3);

  return VAR_0;
}
