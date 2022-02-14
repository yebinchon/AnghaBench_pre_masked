
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_cmdline_prompt_baton2_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int may_save; int password; int username; } ;
typedef TYPE_1__ svn_auth_cred_simple_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char const* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,char const*,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_7(svn_auth_cred_simple_t **VAR_3,
                               void *VAR_4,
                               const char *VAR_5,
                               const char *VAR_6,
                               svn_boolean_t VAR_7,
                               apr_pool_t *VAR_8)
{
  svn_auth_cred_simple_t *VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9));
  const char *VAR_10;
  svn_cmdline_prompt_baton2_t *VAR_11 = VAR_4;

  FUNC_0(FUNC_5(VAR_5, VAR_8));

  if (VAR_6)
    VAR_9->username = FUNC_4(VAR_8, VAR_6);
  else
    FUNC_0(FUNC_6(&(VAR_9->username), FUNC_1("Username: "), VAR_0, VAR_11, VAR_8));

  VAR_10 = FUNC_3(VAR_8, FUNC_1("Password for '%s': "), VAR_9->username);
  FUNC_0(FUNC_6(&(VAR_9->password), VAR_10, VAR_2, VAR_11, VAR_8));
  VAR_9->may_save = VAR_7;
  *VAR_3 = VAR_9;
  return VAR_1;
}
