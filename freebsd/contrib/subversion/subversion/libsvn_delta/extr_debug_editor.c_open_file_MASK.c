
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {struct edit_baton* edit_baton; int wrapped_file_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int indent_level; int out; } ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* open_file ) (char const*,int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct file_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (char const*,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *,char*,char const*,int ) ;
 int FUNC_4 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_1,
          void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  struct dir_baton *VAR_6 = VAR_2;
  struct edit_baton *VAR_7 = VAR_6->edit_baton;
  struct file_baton *VAR_8 = FUNC_1(VAR_4, sizeof(*VAR_8));

  FUNC_0(FUNC_4(VAR_7, VAR_4));
  FUNC_0(FUNC_3(VAR_7->out, VAR_4, "open_file : '%s':%ld\n",
                            VAR_1, VAR_3));

  VAR_7->indent_level++;

  FUNC_0(VAR_7->wrapped_editor->open_file(VAR_1,
                                        VAR_6->wrapped_dir_baton,
                                        VAR_3,
                                        VAR_4,
                                        &VAR_8->wrapped_file_baton));

  VAR_8->edit_baton = VAR_7;
  *VAR_5 = VAR_8;

  return VAR_0;
}
