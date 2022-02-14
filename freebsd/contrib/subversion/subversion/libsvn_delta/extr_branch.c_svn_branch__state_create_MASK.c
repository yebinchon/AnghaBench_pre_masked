
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_cancel_func_t ;
typedef int svn_branch__state_vtable_t ;
struct TYPE_7__ {TYPE_4__* vtable; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int * state_pool; void* finished; void* within_callback; void* cancel_baton; int cancel_func; } ;
struct TYPE_8__ {TYPE_1__ vpriv; } ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 TYPE_4__* FUNC_1 (int *,int const*,int) ;

svn_branch__state_t *
FUNC_2(const svn_branch__state_vtable_t *VAR_1,
                         svn_cancel_func_t VAR_2,
                         void *VAR_3,
                         apr_pool_t *VAR_4)
{
  svn_branch__state_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));

  VAR_5->vtable = FUNC_1(VAR_4, VAR_1, sizeof(*VAR_1));

  VAR_5->vtable->vpriv.cancel_func = VAR_2;
  VAR_5->vtable->vpriv.cancel_baton = VAR_3;







  return VAR_5;
}
