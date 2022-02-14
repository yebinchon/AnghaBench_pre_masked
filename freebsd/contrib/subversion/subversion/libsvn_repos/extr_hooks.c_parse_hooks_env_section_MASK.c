
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
struct parse_hooks_env_section_baton {int cfg; int hooks_env; } ;
struct parse_hooks_env_option_baton {char const* section; int hooks_env; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ,struct parse_hooks_env_option_baton*,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(const char *VAR_2, void *VAR_3, apr_pool_t *VAR_4)
{
  struct parse_hooks_env_section_baton *VAR_5 = VAR_3;
  struct parse_hooks_env_option_baton VAR_6;

  VAR_6.section = VAR_2;
  VAR_6.hooks_env = VAR_5->hooks_env;

  (void)FUNC_0(VAR_5->cfg, VAR_2, VAR_1, &VAR_6, VAR_4);

  return VAR_0;
}
