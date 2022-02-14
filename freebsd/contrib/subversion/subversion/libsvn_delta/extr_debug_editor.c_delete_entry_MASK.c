
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int out; } ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* delete_entry ) (char const*,int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int ,int ,int *) ;
 int FUNC_2 (int ,int *,char*,char const*,int ) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_0,
             svn_revnum_t VAR_1,
             void *VAR_2,
             apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;

  FUNC_0(FUNC_3(VAR_5, VAR_3));
  FUNC_0(FUNC_2(VAR_5->out, VAR_3, "delete_entry : %s:%ld\n",
                            VAR_0, VAR_1));

  return VAR_5->wrapped_editor->delete_entry(VAR_0,
                                          VAR_1,
                                          VAR_4->wrapped_dir_baton,
                                          VAR_3);
}
