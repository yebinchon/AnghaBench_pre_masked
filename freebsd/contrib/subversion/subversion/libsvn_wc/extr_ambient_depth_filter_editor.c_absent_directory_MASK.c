
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct edit_baton {TYPE_1__* wrapped_editor; } ;
struct dir_baton {int wrapped_baton; scalar_t__ ambiently_excluded; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* absent_directory ) (char const*,int ,int *) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_1,
                 void *VAR_2,
                 apr_pool_t *VAR_3)
{
  struct dir_baton *VAR_4 = VAR_2;
  struct edit_baton *VAR_5 = VAR_4->edit_baton;


  if (VAR_4->ambiently_excluded)
    return VAR_0;

  return VAR_5->wrapped_editor->absent_directory(VAR_1, VAR_4->wrapped_baton, VAR_3);
}
