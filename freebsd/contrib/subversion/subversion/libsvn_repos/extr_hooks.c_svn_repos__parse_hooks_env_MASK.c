
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
struct parse_hooks_env_section_baton {int * hooks_env; int * cfg; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,struct parse_hooks_env_section_baton*,int *) ;
 int FUNC_3 (int **,char const*,int ,int ,int ,int *) ;
 int FUNC_4 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_5(apr_hash_t **VAR_5,
                           const char *VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  struct parse_hooks_env_section_baton VAR_9;
  if (VAR_6)
    {
      svn_node_kind_t VAR_10;
      FUNC_0(FUNC_4(VAR_6, &VAR_10, VAR_8));

      VAR_9.hooks_env = FUNC_1(VAR_7);

      if (VAR_10 != VAR_4)
        {
          svn_config_t *VAR_11;
          FUNC_0(FUNC_3(&VAR_11, VAR_6, VAR_0,
                                  VAR_2, VAR_2, VAR_8));
          VAR_9.cfg = VAR_11;

          (void)FUNC_2(VAR_11, VAR_3,
                                               &VAR_9, VAR_8);
        }

      *VAR_5 = VAR_9.hooks_env;
    }
  else
    {
      *VAR_5 = ((void*)0);
    }

  return VAR_1;
}
