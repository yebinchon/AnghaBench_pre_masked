
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_freeze_func_t ;
typedef int svn_error_t ;
struct freeze_baton_t {int scratch_pool; void* freeze_baton; int freeze_func; scalar_t__ counter; int * paths; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct freeze_baton_t*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

svn_error_t *
FUNC_4(apr_array_header_t *VAR_1,
                 svn_repos_freeze_func_t VAR_2,
                 void *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct freeze_baton_t VAR_5;

  VAR_5.paths = VAR_1;
  VAR_5.counter = 0;
  VAR_5.freeze_func = VAR_2;
  VAR_5.freeze_baton = VAR_3;
  VAR_5.scratch_pool = FUNC_2(VAR_4);

  FUNC_0(FUNC_1(&VAR_5, VAR_4));

  FUNC_3(VAR_5.scratch_pool);
  return VAR_0;
}
