
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct node_baton {int wrapped_baton; int filtered; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* absent_file ) (char const*,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
            void *VAR_2,
            apr_pool_t *VAR_3)
{
  struct node_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;


  if (! VAR_4->filtered)
    FUNC_0(VAR_5->wrapped_editor->absent_file(VAR_1, VAR_4->wrapped_baton, VAR_3));

  return VAR_0;
}
