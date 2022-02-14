
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {struct edit_baton* edit_baton; int wrapped_file_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; int cancel_baton; int (* cancel_func ) (int ) ;} ;
struct dir_baton {int wrapped_dir_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* add_file ) (char const*,int ,char const*,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct file_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
         void *VAR_2,
         const char *VAR_3,
         svn_revnum_t VAR_4,
         apr_pool_t *VAR_5,
         void **VAR_6)
{
  struct dir_baton *VAR_7 = VAR_2;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;
  struct file_baton *VAR_9 = FUNC_1(VAR_5, sizeof(*VAR_9));

  FUNC_0(VAR_8->cancel_func(VAR_8->cancel_baton));

  FUNC_0(VAR_8->wrapped_editor->add_file(VAR_1,
                                       VAR_7->wrapped_dir_baton,
                                       VAR_3,
                                       VAR_4,
                                       VAR_5,
                                       &VAR_9->wrapped_file_baton));

  VAR_9->edit_baton = VAR_8;
  *VAR_6 = VAR_9;

  return VAR_0;
}
