
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct file_baton {int wrapped_file_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* close_file ) (int ,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
           const char *VAR_1,
           apr_pool_t *VAR_2)
{
  struct file_baton *VAR_3 = VAR_0;
  struct edit_baton *VAR_4 = VAR_3->edit_baton;

  FUNC_0(VAR_4->cancel_func(VAR_4->cancel_baton));

  return VAR_4->wrapped_editor->close_file(VAR_3->wrapped_file_baton,
                                        VAR_1, VAR_2);
}
