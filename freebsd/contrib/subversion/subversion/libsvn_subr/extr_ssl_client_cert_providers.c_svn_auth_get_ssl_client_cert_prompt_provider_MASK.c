
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_auth_ssl_client_cert_prompt_func_t ;
struct TYPE_6__ {TYPE_2__* provider_baton; int * vtable; } ;
typedef TYPE_1__ svn_auth_provider_object_t ;
struct TYPE_7__ {int retry_limit; void* prompt_baton; int prompt_func; } ;
typedef TYPE_2__ ssl_client_cert_prompt_provider_baton_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;

void FUNC_2
  (svn_auth_provider_object_t **VAR_1,
   svn_auth_ssl_client_cert_prompt_func_t VAR_2,
   void *VAR_3,
   int VAR_4,
   apr_pool_t *VAR_5)
{
  svn_auth_provider_object_t *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
  ssl_client_cert_prompt_provider_baton_t *VAR_7 = FUNC_0(VAR_5, sizeof(*VAR_7));

  VAR_7->prompt_func = VAR_2;
  VAR_7->prompt_baton = VAR_3;
  VAR_7->retry_limit = VAR_4;

  VAR_6->vtable = &VAR_0;
  VAR_6->provider_baton = VAR_7;
  *VAR_1 = VAR_6;
}
