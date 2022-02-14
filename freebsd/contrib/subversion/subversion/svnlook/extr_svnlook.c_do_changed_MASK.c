
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int copy_info; int repos; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_node_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int **,int ,int *,scalar_t__,int *) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_3 (int **,TYPE_1__*,int *) ;
 int FUNC_4 (int *,char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svnlook_ctxt_t *VAR_2, apr_pool_t *VAR_3)
{
  svn_fs_root_t *VAR_4;
  svn_revnum_t VAR_5;
  svn_repos_node_t *VAR_6;

  FUNC_0(FUNC_3(&VAR_4, VAR_2, VAR_3));
  FUNC_0(FUNC_2(&VAR_5, VAR_2, VAR_3));
  if (VAR_5 == VAR_0)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_6, VAR_2->repos, VAR_4, VAR_5, VAR_3));
  if (VAR_6)
    FUNC_0(FUNC_4(VAR_6, "", VAR_2->copy_info, VAR_3));

  return VAR_1;
}
