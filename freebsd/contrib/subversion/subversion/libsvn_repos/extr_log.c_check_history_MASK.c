
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct path_info {scalar_t__ history_rev; scalar_t__ done; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct path_info*,int *,int ,int ,void*,scalar_t__,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_boolean_t *VAR_2,
              struct path_info *VAR_3,
              svn_fs_t *VAR_4,
              svn_revnum_t VAR_5,
              svn_boolean_t VAR_6,
              svn_repos_authz_func_t VAR_7,
              void *VAR_8,
              svn_revnum_t VAR_9,
              apr_pool_t *VAR_10,
              apr_pool_t *VAR_11)
{


  if (VAR_3->done)
    return VAR_0;





  if (VAR_3->history_rev < VAR_5)
    return VAR_0;




  *VAR_2 = VAR_1;
  return FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7,
                     VAR_8, VAR_9, VAR_10, VAR_11);
}
