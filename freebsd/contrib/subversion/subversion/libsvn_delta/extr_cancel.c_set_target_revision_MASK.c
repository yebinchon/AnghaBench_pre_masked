
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int wrapped_edit_baton; TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* set_target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                    svn_revnum_t VAR_1,
                    apr_pool_t *VAR_2)
{
  struct edit_baton *VAR_3 = VAR_0;

  FUNC_0(VAR_3->cancel_func(VAR_3->cancel_baton));

  return VAR_3->wrapped_editor->set_target_revision(VAR_3->wrapped_edit_baton,
                                                 VAR_1,
                                                 VAR_2);
}
