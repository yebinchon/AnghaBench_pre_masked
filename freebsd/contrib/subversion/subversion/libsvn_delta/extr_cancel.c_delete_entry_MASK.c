
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* delete_entry ) (char const*,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_0,
             svn_revnum_t VAR_1,
             void *VAR_2,
             apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;

  FUNC_0(VAR_5->cancel_func(VAR_5->cancel_baton));

  return VAR_5->wrapped_editor->delete_entry(VAR_0,
                                          VAR_1,
                                          VAR_4->wrapped_dir_baton,
                                          VAR_3);
}
