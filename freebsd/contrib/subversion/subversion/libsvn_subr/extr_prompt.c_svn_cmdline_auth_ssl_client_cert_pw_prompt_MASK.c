
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_cmdline_prompt_baton2_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {char const* password; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_ssl_client_cert_pw_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int ,char const*) ;
 int FUNC_4 (char const**,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_5
  (svn_auth_cred_ssl_client_cert_pw_t **VAR_2,
   void *VAR_3,
   const char *VAR_4,
   svn_boolean_t VAR_5,
   apr_pool_t *VAR_6)
{
  svn_auth_cred_ssl_client_cert_pw_t *VAR_7 = ((void*)0);
  const char *VAR_8;
  const char *VAR_9 = FUNC_3(VAR_6, FUNC_1("Passphrase for '%s': "), VAR_4);
  svn_cmdline_prompt_baton2_t *VAR_10 = VAR_3;

  FUNC_0(FUNC_4(&VAR_8, VAR_9, VAR_1, VAR_10, VAR_6));

  VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7));
  VAR_7->password = VAR_8;
  VAR_7->may_save = VAR_5;
  *VAR_2 = VAR_7;

  return VAR_0;
}
