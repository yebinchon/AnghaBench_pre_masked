
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int username_prompt_provider_baton_t ;
struct TYPE_3__ {scalar_t__ retries; } ;
typedef TYPE_1__ username_prompt_iter_baton_t ;
typedef int svn_error_t ;
typedef int svn_auth_cred_username_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int **,int *,int *,char const*,int ,int,int *) ;
 char* FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void **VAR_3,
                            void **VAR_4,
                            void *VAR_5,
                            apr_hash_t *VAR_6,
                            const char *VAR_7,
                            apr_pool_t *VAR_8)
{
  username_prompt_provider_baton_t *VAR_9 = VAR_5;
  username_prompt_iter_baton_t *VAR_10 = FUNC_1(VAR_8, sizeof(*VAR_10));
  const char *VAR_11 = FUNC_3(VAR_6,
                                            VAR_0);

  FUNC_0(FUNC_2
          ((svn_auth_cred_username_t **) VAR_3, VAR_9,
           VAR_6, VAR_7, VAR_2, ! VAR_11, VAR_8));

  VAR_10->retries = 0;
  *VAR_4 = VAR_10;

  return VAR_1;
}
