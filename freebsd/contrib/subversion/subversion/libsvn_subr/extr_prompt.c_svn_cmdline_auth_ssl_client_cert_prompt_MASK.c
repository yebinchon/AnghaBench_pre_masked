
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_cmdline_prompt_baton2_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {char const* cert_file; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_ssl_client_cert_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const**,int ,int ,int *,int *) ;
 int FUNC_5 (char const**,char const*,int *) ;

svn_error_t *
FUNC_6
  (svn_auth_cred_ssl_client_cert_t **VAR_2,
   void *VAR_3,
   const char *VAR_4,
   svn_boolean_t VAR_5,
   apr_pool_t *VAR_6)
{
  svn_auth_cred_ssl_client_cert_t *VAR_7 = ((void*)0);
  const char *VAR_8 = ((void*)0);
  const char *VAR_9 = ((void*)0);
  svn_cmdline_prompt_baton2_t *VAR_10 = VAR_3;

  FUNC_0(FUNC_3(VAR_4, VAR_6));
  FUNC_0(FUNC_4(&VAR_8, FUNC_1("Client certificate filename: "),
                 VAR_0, VAR_10, VAR_6));
  FUNC_0(FUNC_5(&VAR_9, VAR_8, VAR_6));

  VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7));
  VAR_7->cert_file = VAR_9;
  VAR_7->may_save = VAR_5;
  *VAR_2 = VAR_7;

  return VAR_1;
}
