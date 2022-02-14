
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int target_revision; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1,
                    svn_revnum_t VAR_2,
                    apr_pool_t *VAR_3)
{
  struct edit_baton *VAR_4 = VAR_1;

  VAR_4->target_revision = VAR_2;
  return VAR_0;
}
