
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
struct dir_baton {int wrapped_baton; scalar_t__ ambiently_excluded; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* close_directory ) (int ,int *) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                apr_pool_t *VAR_2)
{
  struct dir_baton *VAR_3 = VAR_1;
  struct edit_baton *VAR_4 = VAR_3->edit_baton;

  if (VAR_3->ambiently_excluded)
    return VAR_0;

  return VAR_4->wrapped_editor->close_directory(VAR_3->wrapped_baton, VAR_2);
}
