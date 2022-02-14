
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_auth_cred_ssl_client_cert_t ;
struct TYPE_4__ {scalar_t__ retries; int realmstring; TYPE_1__* pb; } ;
typedef TYPE_2__ ssl_client_cert_prompt_iter_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {scalar_t__ retry_limit; int prompt_baton; int * (* prompt_func ) (int **,int ,int ,int,int *) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int **,int ,int ,int,int *) ;
 char* FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_2,
                                 void *VAR_3,
                                 void *VAR_4,
                                 apr_hash_t *VAR_5,
                                 const char *VAR_6,
                                 apr_pool_t *VAR_7)
{
  ssl_client_cert_prompt_iter_baton_t *VAR_8 = VAR_3;
  const char *VAR_9 = FUNC_1(VAR_5,
                                            VAR_0);

  if ((VAR_8->pb->retry_limit >= 0) && (VAR_8->retries >= VAR_8->pb->retry_limit))
    {

      *VAR_2 = ((void*)0);
      return VAR_1;
    }
  VAR_8->retries++;

  return VAR_8->pb->prompt_func((svn_auth_cred_ssl_client_cert_t **)
                             VAR_2, VAR_8->pb->prompt_baton,
                             VAR_8->realmstring, ! VAR_9, VAR_7);
}
