
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct file_baton {int wrapped_file_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* apply_textdelta ) (int ,char const*,int *,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const*,int *,int *,void**) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                const char *VAR_1,
                apr_pool_t *VAR_2,
                svn_txdelta_window_handler_t *VAR_3,
                void **VAR_4)
{
  struct file_baton *VAR_5 = VAR_0;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;

  FUNC_0(VAR_6->cancel_func(VAR_6->cancel_baton));

  return VAR_6->wrapped_editor->apply_textdelta(VAR_5->wrapped_file_baton,
                                             VAR_1,
                                             VAR_2,
                                             VAR_3,
                                             VAR_4);
}
