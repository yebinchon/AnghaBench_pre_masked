
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct node_baton {int wrapped_baton; int filtered; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* close_directory ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                apr_pool_t *VAR_2)
{
  struct node_baton *VAR_3 = VAR_1;
  struct edit_baton *VAR_4 = VAR_3->edit_baton;


  if (! VAR_3->filtered)
    FUNC_0(VAR_4->wrapped_editor->close_directory(VAR_3->wrapped_baton, VAR_2));

  return VAR_0;
}
