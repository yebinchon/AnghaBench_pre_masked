
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int wrapped_edit_baton; TYPE_1__* wrapped_editor; int indent_level; int out; } ;
struct dir_baton {void* edit_baton; int wrapped_dir_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* open_root ) (int ,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct dir_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,int *,char*,int ) ;
 int FUNC_4 (struct edit_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
          svn_revnum_t VAR_2,
          apr_pool_t *VAR_3,
          void **VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  struct dir_baton *VAR_6 = FUNC_1(VAR_3, sizeof(*VAR_6));

  FUNC_0(FUNC_4(VAR_5, VAR_3));
  FUNC_0(FUNC_3(VAR_5->out, VAR_3, "open_root : %ld\n",
                            VAR_2));
  VAR_5->indent_level++;

  FUNC_0(VAR_5->wrapped_editor->open_root(VAR_5->wrapped_edit_baton,
                                        VAR_2,
                                        VAR_3,
                                        &VAR_6->wrapped_dir_baton));

  VAR_6->edit_baton = VAR_1;

  *VAR_4 = VAR_6;

  return VAR_0;
}
