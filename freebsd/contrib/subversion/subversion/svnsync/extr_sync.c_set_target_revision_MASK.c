
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int wrapped_edit_baton; TYPE_1__* wrapped_editor; } ;
typedef TYPE_2__ edit_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int * (* set_target_revision ) (int ,int ,int *) ;} ;


 int * FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                    svn_revnum_t VAR_1,
                    apr_pool_t *VAR_2)
{
  edit_baton_t *VAR_3 = VAR_0;
  return VAR_3->wrapped_editor->set_target_revision(VAR_3->wrapped_edit_baton,
                                                 VAR_1, VAR_2);
}
