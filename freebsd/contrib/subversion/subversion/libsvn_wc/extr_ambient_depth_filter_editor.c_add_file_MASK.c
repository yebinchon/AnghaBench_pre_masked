
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {int wrapped_baton; scalar_t__ ambiently_excluded; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
struct dir_baton {int wrapped_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* add_file ) (char const*,int ,char const*,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file_baton**,struct dir_baton*,char const*,int ,int *) ;
 int * FUNC_2 (char const*,int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_2,
         void *VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         apr_pool_t *VAR_6,
         void **VAR_7)
{
  struct dir_baton *VAR_8 = VAR_3;
  struct edit_baton *VAR_9 = VAR_8->edit_baton;
  struct file_baton *VAR_10 = ((void*)0);

  FUNC_0(FUNC_1(&VAR_10, VAR_8, VAR_2, VAR_1, VAR_6));
  *VAR_7 = VAR_10;

  if (VAR_10->ambiently_excluded)
    return VAR_0;

  return VAR_9->wrapped_editor->add_file(VAR_2, VAR_8->wrapped_baton,
                                      VAR_4, VAR_5,
                                      VAR_6, &VAR_10->wrapped_baton);
}
