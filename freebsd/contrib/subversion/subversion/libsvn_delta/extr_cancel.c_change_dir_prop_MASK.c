
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* change_dir_prop ) (int ,char const*,int const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                const char *VAR_1,
                const svn_string_t *VAR_2,
                apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_0;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;

  FUNC_0(VAR_5->cancel_func(VAR_5->cancel_baton));

  return VAR_5->wrapped_editor->change_dir_prop(VAR_4->wrapped_dir_baton,
                                             VAR_1,
                                             VAR_2,
                                             VAR_3);
}
