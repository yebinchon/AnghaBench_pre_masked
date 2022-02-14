
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int prompt_baton; int (* prompt_func ) (TYPE_2__**,int ,char const*,scalar_t__,int *) ;} ;
typedef TYPE_1__ username_prompt_provider_baton_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_8__ {int may_save; int username; } ;
typedef TYPE_2__ svn_auth_cred_username_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_2__**,int ,char const*,scalar_t__,int *) ;
 char* FUNC_4 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_auth_cred_username_t **VAR_3,
                          username_prompt_provider_baton_t *VAR_4,
                          apr_hash_t *VAR_5,
                          const char *VAR_6,
                          svn_boolean_t VAR_7,
                          svn_boolean_t VAR_8,
                          apr_pool_t *VAR_9)
{
  const char *VAR_10 = ((void*)0);

  *VAR_3 = ((void*)0);


  if (VAR_7)
    VAR_10 = FUNC_4(VAR_5, VAR_0);







  if (VAR_10)
    {
      *VAR_3 = FUNC_1(VAR_9, sizeof(**VAR_3));
      (*VAR_3)->username = FUNC_2(VAR_9, VAR_10);
      (*VAR_3)->may_save = VAR_2;
    }
  else
    {
      FUNC_0(VAR_4->prompt_func(VAR_3, VAR_4->prompt_baton, VAR_6,
                              VAR_8, VAR_9));
    }

  return VAR_1;
}
