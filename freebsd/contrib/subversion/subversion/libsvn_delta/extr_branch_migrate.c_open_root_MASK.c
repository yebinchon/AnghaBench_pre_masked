
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
struct dir_baton {struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct dir_baton* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
          svn_revnum_t VAR_2,
          apr_pool_t *VAR_3,
          void **VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  struct dir_baton *VAR_6 = FUNC_0(VAR_3, sizeof(*VAR_6));






  VAR_6->edit_baton = VAR_5;

  *VAR_4 = VAR_6;

  return VAR_0;
}
