
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef char svn_config_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {char const* password; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_ssl_client_cert_pw_t ;
typedef int (* svn_auth__password_get_t ) (int *,char const**,int *,char const*,int *,int *,int ,int *) ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int * VAR_7 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 char* FUNC_2 (char*,char const*,int ,int *) ;
 int * FUNC_3 (int **,int ,char const*,char const*,int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ) ;

svn_error_t *
FUNC_6(void **VAR_8,
                                       void **VAR_9,
                                       void *VAR_10,
                                       apr_hash_t *VAR_11,
                                       const char *VAR_12,
                                       svn_auth__password_get_t VAR_13,
                                       const char *VAR_14,
                                       apr_pool_t *VAR_15)
{
  svn_config_t *VAR_16 = FUNC_5(VAR_11,
                                    VAR_2);
  const char *VAR_17 = FUNC_5(VAR_11,
                                           VAR_5);
  svn_boolean_t VAR_18 = FUNC_5(VAR_11,
                                                VAR_4)
      != ((void*)0);
  const char *VAR_19 =
    FUNC_2(VAR_16, VAR_17,
                                  VAR_6,
                                  ((void*)0));
  if (! VAR_19)
    {
      svn_error_t *VAR_20;
      apr_hash_t *VAR_21 = ((void*)0);
      const char *VAR_22 = FUNC_5(VAR_11,
                                             VAR_3);


      VAR_20 = FUNC_3(&VAR_21,
                                      VAR_1,
                                      VAR_12, VAR_22, VAR_15);
      FUNC_4(VAR_20);
      if (! VAR_20 && VAR_21)
        {
          svn_boolean_t VAR_23;

          FUNC_0(VAR_13(&VAR_23, &VAR_19, VAR_21, VAR_12,
                                 ((void*)0), VAR_11, VAR_18, VAR_15));
          if (!VAR_23)
            VAR_19 = ((void*)0);
        }
    }

  if (VAR_19)
    {
      svn_auth_cred_ssl_client_cert_pw_t *VAR_24
        = FUNC_1(VAR_15, sizeof(*VAR_24));
      VAR_24->password = VAR_19;
      VAR_24->may_save = VAR_0;
      *VAR_8 = VAR_24;
    }
  else *VAR_8 = ((void*)0);
  *VAR_9 = ((void*)0);
  return VAR_7;
}
