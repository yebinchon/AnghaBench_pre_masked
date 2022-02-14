
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
struct parse_hooks_env_option_baton {char const* section; int * hooks_env; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_5(const char *VAR_1, const char *VAR_2,
                       void *VAR_3, apr_pool_t *VAR_4)
{
  struct parse_hooks_env_option_baton *VAR_5 = VAR_3;
  apr_pool_t *VAR_6 = FUNC_1(VAR_5->hooks_env);
  apr_hash_t *VAR_7;

  VAR_7 = FUNC_3(VAR_5->hooks_env, VAR_5->section);
  if (VAR_7 == ((void*)0))
    {
      VAR_7 = FUNC_0(VAR_6);
      FUNC_4(VAR_5->hooks_env, FUNC_2(VAR_6, VAR_5->section),
                    VAR_7);
    }
  FUNC_4(VAR_7, FUNC_2(VAR_6, VAR_1),
                FUNC_2(VAR_6, VAR_2));

  return VAR_0;
}
