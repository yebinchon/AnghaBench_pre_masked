
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int svn_auth_ssl_server_cert_info_t ;
typedef int svn_auth_cred_ssl_server_trust_t ;
struct TYPE_2__ {int prompt_baton; int (* prompt_func ) (int **,int ,char const*,int,int const*,int,int *) ;} ;
typedef TYPE_1__ ssl_server_trust_prompt_provider_baton_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (int **,int ,char const*,int,int const*,int,int *) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void **VAR_5,
                                   void **VAR_6,
                                   void *VAR_7,
                                   apr_hash_t *VAR_8,
                                   const char *VAR_9,
                                   apr_pool_t *VAR_10)
{
  ssl_server_trust_prompt_provider_baton_t *VAR_11 = VAR_7;
  apr_uint32_t *VAR_12 = FUNC_2(VAR_8,
                                         VAR_2);
  const char *VAR_13 = FUNC_2(VAR_8,
                                            VAR_0);
  const svn_auth_ssl_server_cert_info_t *VAR_14 =
    FUNC_2(VAR_8, VAR_1);
  svn_boolean_t VAR_15 = (!VAR_13
                            && !(*VAR_12 & VAR_3));

  FUNC_0(VAR_11->prompt_func((svn_auth_cred_ssl_server_trust_t **)VAR_5,
                          VAR_11->prompt_baton, VAR_9, *VAR_12, VAR_14,
                          VAR_15, VAR_10));

  *VAR_6 = ((void*)0);
  return VAR_4;
}
