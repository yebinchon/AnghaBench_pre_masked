
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct file_baton {int wrapped_file_baton; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int out; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* absent_file ) (char const*,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int ,int *,char*,char const*) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
            void *VAR_2,
            apr_pool_t *VAR_3)
{
  struct file_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;

  FUNC_0(FUNC_3(VAR_5, VAR_3));
  FUNC_0(FUNC_2(VAR_5->out, VAR_3, "absent_file : %s\n", VAR_1));

  FUNC_0(VAR_5->wrapped_editor->absent_file(VAR_1, VAR_4->wrapped_file_baton,
                                          VAR_3));

  return VAR_0;
}
