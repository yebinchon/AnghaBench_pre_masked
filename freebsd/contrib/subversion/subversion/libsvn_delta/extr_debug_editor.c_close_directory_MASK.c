
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int out; int indent_level; } ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* close_directory ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                apr_pool_t *VAR_2)
{
  struct dir_baton *VAR_3 = VAR_1;
  struct edit_baton *VAR_4 = VAR_3->edit_baton;

  VAR_4->indent_level--;
  FUNC_0(FUNC_3(VAR_4, VAR_2));
  FUNC_0(FUNC_2(VAR_4->out, VAR_2, "close_directory\n"));

  FUNC_0(VAR_4->wrapped_editor->close_directory(VAR_3->wrapped_dir_baton,
                                              VAR_2));

  return VAR_0;
}
