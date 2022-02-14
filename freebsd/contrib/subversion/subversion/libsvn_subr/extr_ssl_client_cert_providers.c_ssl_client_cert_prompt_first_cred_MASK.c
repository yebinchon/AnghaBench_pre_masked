
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_auth_cred_ssl_client_cert_t ;
struct TYPE_4__ {int prompt_baton; int (* prompt_func ) (int **,int ,char const*,int,int *) ;} ;
typedef TYPE_1__ ssl_client_cert_prompt_provider_baton_t ;
struct TYPE_5__ {scalar_t__ retries; int realmstring; TYPE_1__* pb; } ;
typedef TYPE_2__ ssl_client_cert_prompt_iter_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int **,int ,char const*,int,int *) ;
 char* FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void **VAR_2,
                                  void **VAR_3,
                                  void *VAR_4,
                                  apr_hash_t *VAR_5,
                                  const char *VAR_6,
                                  apr_pool_t *VAR_7)
{
  ssl_client_cert_prompt_provider_baton_t *VAR_8 = VAR_4;
  ssl_client_cert_prompt_iter_baton_t *VAR_9 =
    FUNC_1(VAR_7, sizeof(*VAR_9));
  const char *VAR_10 = FUNC_4(VAR_5,
                                            VAR_0);

  FUNC_0(VAR_8->prompt_func((svn_auth_cred_ssl_client_cert_t **) VAR_2,
                          VAR_8->prompt_baton, VAR_6, ! VAR_10,
                          VAR_7));

  VAR_9->pb = VAR_8;
  VAR_9->realmstring = FUNC_2(VAR_7, VAR_6);
  VAR_9->retries = 0;
  *VAR_3 = VAR_9;

  return VAR_1;
}
