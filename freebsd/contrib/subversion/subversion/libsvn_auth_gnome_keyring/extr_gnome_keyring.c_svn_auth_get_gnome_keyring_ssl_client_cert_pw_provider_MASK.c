
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vtable; } ;
typedef TYPE_1__ svn_auth_provider_object_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 () ;

void
FUNC_2
    (svn_auth_provider_object_t **VAR_1,
     apr_pool_t *VAR_2)
{
  svn_auth_provider_object_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->vtable = &VAR_0;
  *VAR_1 = VAR_3;




}
