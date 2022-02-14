
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct file_baton {int wrapped_file_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* apply_textdelta ) (int ,char const*,int *,int *,void**) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *,int *,void**) ;
 int FUNC_2 (int ,int *,char*,char const*) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                const char *VAR_2,
                apr_pool_t *VAR_3,
                svn_txdelta_window_handler_t *VAR_4,
                void **VAR_5)
{
  struct file_baton *VAR_6 = VAR_1;
  struct edit_baton *VAR_7 = VAR_6->edit_baton;

  FUNC_0(FUNC_3(VAR_7, VAR_3));
  FUNC_0(FUNC_2(VAR_7->out, VAR_3, "apply_textdelta : %s\n",
                            VAR_2));

  FUNC_0(VAR_7->wrapped_editor->apply_textdelta(VAR_6->wrapped_file_baton,
                                              VAR_2,
                                              VAR_3,
                                              VAR_4,
                                              VAR_5));

  return VAR_0;
}
