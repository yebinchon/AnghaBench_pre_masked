
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int wrapped_edit_baton; TYPE_1__* wrapped_editor; } ;
typedef TYPE_2__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int * (* abort_edit ) (int ,int *) ;} ;


 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
           apr_pool_t *VAR_1)
{
  edit_baton_t *VAR_2 = VAR_0;
  return VAR_2->wrapped_editor->abort_edit(VAR_2->wrapped_edit_baton, VAR_1);
}
