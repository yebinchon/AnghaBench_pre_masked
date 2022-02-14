
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* ascii_cert; void* issuer_dname; void* valid_until; void* valid_from; void* fingerprint; void* hostname; } ;
typedef TYPE_1__ svn_auth_ssl_server_cert_info_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,void*) ;

svn_auth_ssl_server_cert_info_t *
FUNC_2
  (const svn_auth_ssl_server_cert_info_t *VAR_0, apr_pool_t *VAR_1)
{
  svn_auth_ssl_server_cert_info_t *VAR_2
    = FUNC_0(VAR_1, sizeof(*VAR_2));

  *VAR_2 = *VAR_0;

  VAR_2->hostname = FUNC_1(VAR_1, VAR_2->hostname);
  VAR_2->fingerprint = FUNC_1(VAR_1, VAR_2->fingerprint);
  VAR_2->valid_from = FUNC_1(VAR_1, VAR_2->valid_from);
  VAR_2->valid_until = FUNC_1(VAR_1, VAR_2->valid_until);
  VAR_2->issuer_dname = FUNC_1(VAR_1, VAR_2->issuer_dname);
  VAR_2->ascii_cert = FUNC_1(VAR_1, VAR_2->ascii_cert);

  return VAR_2;
}
