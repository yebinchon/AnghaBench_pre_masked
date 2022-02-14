
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int wrapped_edit_baton; TYPE_1__* wrapped_editor; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* set_target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *,char*,int ) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0,
                    svn_revnum_t VAR_1,
                    apr_pool_t *VAR_2)
{
  struct edit_baton *VAR_3 = VAR_0;

  FUNC_0(FUNC_3(VAR_3, VAR_2));
  FUNC_0(FUNC_2(VAR_3->out, VAR_2, "set_target_revision : %ld\n",
                            VAR_1));

  return VAR_3->wrapped_editor->set_target_revision(VAR_3->wrapped_edit_baton,
                                                 VAR_1,
                                                 VAR_2);
}
