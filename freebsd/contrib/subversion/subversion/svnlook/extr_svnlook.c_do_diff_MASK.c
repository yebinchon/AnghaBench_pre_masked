
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fs; int repos; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_stream_t ;
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
 int FUNC_4 (int *,char const*,int *,int *,int *,char*,char*,TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,scalar_t__,int *) ;
 int FUNC_8 (int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svnlook_ctxt_t *VAR_3, apr_pool_t *VAR_4)
{
  svn_fs_root_t *VAR_5, *VAR_6;
  svn_revnum_t VAR_7;
  svn_repos_node_t *VAR_8;

  FUNC_0(FUNC_3(&VAR_5, VAR_3, VAR_4));
  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4));
  if (VAR_7 == VAR_0)
    return VAR_1;

  FUNC_0(FUNC_1(&VAR_8, VAR_3->repos, VAR_5, VAR_7, VAR_4));
  if (VAR_8)
    {
      svn_stream_t *VAR_9;
      const char *VAR_10 = FUNC_6(VAR_4);

      FUNC_0(FUNC_7(&VAR_6, VAR_3->fs, VAR_7, VAR_4));
      FUNC_0(FUNC_5(VAR_2));
      FUNC_0(FUNC_8(&VAR_9, VAR_4));

      FUNC_0(FUNC_4(VAR_9, VAR_10, VAR_5, VAR_6, VAR_8,
                              "", "", VAR_3, VAR_4));
    }
  return VAR_1;
}
