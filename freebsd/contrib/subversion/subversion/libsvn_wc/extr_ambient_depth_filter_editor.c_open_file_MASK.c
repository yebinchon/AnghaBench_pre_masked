
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
struct TYPE_2__ {int * (* open_file ) (char const*,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct file_baton**,struct dir_baton*,char const*,int ,int *) ;
 int * FUNC_2 (char const*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_2,
          void *VAR_3,
          svn_revnum_t VAR_4,
          apr_pool_t *VAR_5,
          void **VAR_6)
{
  struct dir_baton *VAR_7 = VAR_3;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;
  struct file_baton *VAR_9;

  FUNC_0(FUNC_1(&VAR_9, VAR_7, VAR_2, VAR_0, VAR_5));
  *VAR_6 = VAR_9;
  if (VAR_9->ambiently_excluded)
    return VAR_1;

  return VAR_8->wrapped_editor->open_file(VAR_2, VAR_7->wrapped_baton,
                                       VAR_4, VAR_5,
                                       &VAR_9->wrapped_baton);
}
