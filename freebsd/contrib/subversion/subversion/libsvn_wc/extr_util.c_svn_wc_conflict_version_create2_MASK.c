
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* repos_url; char const* path_in_repos; char const* repos_uuid; int node_kind; int peg_rev; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,int *) ;

svn_wc_conflict_version_t *
FUNC_5(const char *VAR_0,
                                const char *VAR_1,
                                const char *VAR_2,
                                svn_revnum_t VAR_3,
                                svn_node_kind_t VAR_4,
                                apr_pool_t *VAR_5)
{
  svn_wc_conflict_version_t *VAR_6;

  VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));

    FUNC_0(FUNC_4(VAR_0, VAR_5)
                             && FUNC_3(VAR_2)
                             && FUNC_1(VAR_3)
                                                                );

  VAR_6->repos_url = VAR_0;
  VAR_6->peg_rev = VAR_3;
  VAR_6->path_in_repos = VAR_2;
  VAR_6->node_kind = VAR_4;
  VAR_6->repos_uuid = VAR_1;

  return VAR_6;
}
