
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* provider_baton; int * vtable; } ;
typedef TYPE_1__ svn_auth_provider_object_t ;
typedef int svn_auth_plaintext_prompt_func_t ;
struct TYPE_5__ {int plaintext_answers; void* prompt_baton; int plaintext_prompt_func; } ;
typedef TYPE_2__ simple_provider_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;
 int VAR_0 ;

void
FUNC_2
  (svn_auth_provider_object_t **VAR_1,
   svn_auth_plaintext_prompt_func_t VAR_2,
   void* VAR_3,
   apr_pool_t *VAR_4)
{
  svn_auth_provider_object_t *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  simple_provider_baton_t *VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_6));

  VAR_6->plaintext_prompt_func = VAR_2;
  VAR_6->prompt_baton = VAR_3;
  VAR_6->plaintext_answers = FUNC_0(VAR_4);

  VAR_5->vtable = &VAR_0;
  VAR_5->provider_baton = VAR_6;
  *VAR_1 = VAR_5;
}
