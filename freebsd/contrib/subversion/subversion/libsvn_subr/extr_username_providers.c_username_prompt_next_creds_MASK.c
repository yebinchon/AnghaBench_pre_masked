
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ retry_limit; } ;
typedef TYPE_1__ username_prompt_provider_baton_t ;
struct TYPE_5__ {scalar_t__ retries; } ;
typedef TYPE_2__ username_prompt_iter_baton_t ;
typedef int svn_error_t ;
typedef int svn_auth_cred_username_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int **,TYPE_1__*,int *,char const*,int ,int,int *) ;
 char* FUNC_1 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_3,
                           void *VAR_4,
                           void *VAR_5,
                           apr_hash_t *VAR_6,
                           const char *VAR_7,
                           apr_pool_t *VAR_8)
{
  username_prompt_iter_baton_t *VAR_9 = VAR_4;
  username_prompt_provider_baton_t *VAR_10 = VAR_5;
  const char *VAR_11 = FUNC_1(VAR_6,
                                            VAR_1);

  if ((VAR_10->retry_limit >= 0) && (VAR_9->retries >= VAR_10->retry_limit))
    {

      *VAR_3 = ((void*)0);
      return VAR_2;
    }
  VAR_9->retries++;

  return FUNC_0
         ((svn_auth_cred_username_t **) VAR_3, VAR_10,
          VAR_6, VAR_7, VAR_0, ! VAR_11, VAR_8);
}
