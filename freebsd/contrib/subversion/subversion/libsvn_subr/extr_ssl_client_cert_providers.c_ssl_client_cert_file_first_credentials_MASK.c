
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_config_t ;
struct TYPE_3__ {char const* cert_file; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_ssl_client_cert_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,char const*,int ,int *) ;
 void* FUNC_2 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void **VAR_5,
                                       void **VAR_6,
                                       void *VAR_7,
                                       apr_hash_t *VAR_8,
                                       const char *VAR_9,
                                       apr_pool_t *VAR_10)
{
  svn_config_t *VAR_11 = FUNC_2(VAR_8,
                                    VAR_1);
  const char *VAR_12 = FUNC_2(VAR_8,
                                           VAR_2);
  const char *VAR_13;

  VAR_13 =
    FUNC_1(VAR_11, VAR_12,
                                  VAR_3,
                                  ((void*)0));

  if (VAR_13 != ((void*)0))
    {
      svn_auth_cred_ssl_client_cert_t *VAR_14 =
        FUNC_0(VAR_10, sizeof(*VAR_14));

      VAR_14->cert_file = VAR_13;
      VAR_14->may_save = VAR_0;
      *VAR_5 = VAR_14;
    }
  else
    {
      *VAR_5 = ((void*)0);
    }

  *VAR_6 = ((void*)0);
  return VAR_4;
}
