
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {struct edit_baton* edit_baton; } ;
struct edit_baton {int dummy; } ;
struct dir_baton {struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 struct file_baton* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_1,
         void *VAR_2,
         const char *VAR_3,
         svn_revnum_t VAR_4,
         apr_pool_t *VAR_5,
         void **VAR_6)
{
  struct dir_baton *VAR_7 = VAR_2;
  struct edit_baton *VAR_8 = VAR_7->edit_baton;
  struct file_baton *VAR_9 = FUNC_0(VAR_5, sizeof(*VAR_9));
  VAR_9->edit_baton = VAR_8;
  *VAR_6 = VAR_9;

  return VAR_0;
}
