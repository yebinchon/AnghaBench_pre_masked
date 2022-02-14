
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_stream_open_func_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
struct file_baton {int wrapped_file_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* apply_textdelta_stream ) (TYPE_1__*,int ,char const*,int ,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,int ,char const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_delta_editor_t *VAR_0,
                       void *VAR_1,
                       const char *VAR_2,
                       svn_txdelta_stream_open_func_t VAR_3,
                       void *VAR_4,
                       apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = VAR_1;
  struct edit_baton *VAR_7 = VAR_6->edit_baton;

  FUNC_0(VAR_7->cancel_func(VAR_7->cancel_baton));

  return VAR_7->wrapped_editor->apply_textdelta_stream(VAR_7->wrapped_editor,
                                                    VAR_6->wrapped_file_baton,
                                                    VAR_2,
                                                    VAR_3, VAR_4,
                                                    VAR_5);
}
