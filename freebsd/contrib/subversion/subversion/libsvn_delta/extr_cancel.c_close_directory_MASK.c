
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* close_directory ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                apr_pool_t *VAR_1)
{
  struct dir_baton *VAR_2 = VAR_0;
  struct edit_baton *VAR_3 = VAR_2->edit_baton;

  FUNC_0(VAR_3->cancel_func(VAR_3->cancel_baton));

  return VAR_3->wrapped_editor->close_directory(VAR_2->wrapped_dir_baton, VAR_1);
}
