
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; int out; } ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* change_dir_prop ) (int ,char const*,TYPE_2__ const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,TYPE_2__ const*,int *) ;
 int FUNC_2 (int ,int *,char*,char const*,char*) ;
 int FUNC_3 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                const char *VAR_2,
                const svn_string_t *VAR_3,
                apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_1;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;

  FUNC_0(FUNC_3(VAR_6, VAR_4));
  FUNC_0(FUNC_2(VAR_6->out, VAR_4, "change_dir_prop : %s -> %s\n",
                            VAR_2, VAR_3 ? VAR_3->data : "<deleted>"));

  FUNC_0(VAR_6->wrapped_editor->change_dir_prop(VAR_5->wrapped_dir_baton,
                                              VAR_2,
                                              VAR_3,
                                              VAR_4));

  return VAR_0;
}
