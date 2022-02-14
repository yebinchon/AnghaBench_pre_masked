
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int svn_auth_ssl_server_cert_info_t ;
struct TYPE_4__ {int accepted_failures; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_ssl_server_trust_t ;
struct trust_server_cert_non_interactive_baton {scalar_t__ trust_server_cert_other_failure; scalar_t__ trust_server_cert_not_yet_valid; scalar_t__ trust_server_cert_expired; scalar_t__ trust_server_cert_cn_mismatch; scalar_t__ trust_server_cert_unknown_ca; } ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_auth_cred_ssl_server_trust_t **VAR_7,
                                  void *VAR_8,
                                  const char *VAR_9,
                                  apr_uint32_t VAR_10,
                                  const svn_auth_ssl_server_cert_info_t
                                    *VAR_11,
                                  svn_boolean_t VAR_12,
                                  apr_pool_t *VAR_13)
{
  struct trust_server_cert_non_interactive_baton *VAR_14 = VAR_8;
  apr_uint32_t VAR_15;
  *VAR_7 = ((void*)0);


  VAR_15 = VAR_10 & ~(
        (VAR_14->trust_server_cert_unknown_ca ? VAR_5 : 0)
      | (VAR_14->trust_server_cert_cn_mismatch ? VAR_1 : 0)
      | (VAR_14->trust_server_cert_expired ? VAR_2 : 0)
      | (VAR_14->trust_server_cert_not_yet_valid ? VAR_3 : 0)
      | (VAR_14->trust_server_cert_other_failure ? VAR_4 : 0)
  );


  if (VAR_15 == 0)
    {
      *VAR_7 = FUNC_0(VAR_13, sizeof(**VAR_7));
      (*VAR_7)->may_save = VAR_0;
      (*VAR_7)->accepted_failures = VAR_10;
    }

  return VAR_6;
}
