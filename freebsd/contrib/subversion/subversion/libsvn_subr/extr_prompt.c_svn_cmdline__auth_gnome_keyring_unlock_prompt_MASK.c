
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_cmdline_prompt_baton2_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,char const*) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char const**,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_5(char **VAR_2,
                                              const char *VAR_3,
                                              void *VAR_4,
                                              apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;
  svn_cmdline_prompt_baton2_t *VAR_8 = VAR_4;

  VAR_7 = FUNC_2(VAR_5, FUNC_1("Password for '%s' GNOME keyring: "),
                             VAR_3);
  FUNC_0(FUNC_4(&VAR_6, VAR_7, VAR_1, VAR_8, VAR_5));
  *VAR_2 = FUNC_3(VAR_5, VAR_6);
  return VAR_0;
}
