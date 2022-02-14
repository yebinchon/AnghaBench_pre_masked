
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_error_t ;
struct file_baton {int wrapped_baton; scalar_t__ ambiently_excluded; struct edit_baton* edit_baton; } ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* change_file_prop ) (int ,char const*,int const*,int *) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char const*,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                 const char *VAR_2,
                 const svn_string_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct file_baton *VAR_5 = VAR_1;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;

  if (VAR_5->ambiently_excluded)
    return VAR_0;

  return VAR_6->wrapped_editor->change_file_prop(VAR_5->wrapped_baton,
                                              VAR_2, VAR_3, VAR_4);
}
