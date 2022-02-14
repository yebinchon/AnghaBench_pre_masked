
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_diff_t ;
typedef int svn_diff_fns_t ;
typedef int svn_diff_fns2_t ;
struct fns_wrapper_baton {int dummy; } ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,struct fns_wrapper_baton*,int *,int *) ;
 int FUNC_1 (int **,struct fns_wrapper_baton**,int const*,void*,int *) ;

svn_error_t *
FUNC_2(svn_diff_t **VAR_0,
              void *VAR_1,
              const svn_diff_fns_t *VAR_2,
              apr_pool_t *VAR_3)
{
  svn_diff_fns2_t *VAR_4;
  struct fns_wrapper_baton *VAR_5;

  FUNC_1(&VAR_4, &VAR_5, VAR_2, VAR_1, VAR_3);
  return FUNC_0(VAR_0, VAR_5, VAR_4, VAR_3);
}
