
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int repos_url; int repos_uuid; int path_in_repos; int peg_rev; int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_skel_t *VAR_2,
                           const svn_wc_conflict_version_t *VAR_3,
                           svn_boolean_t VAR_4,
                           apr_pool_t *VAR_5,
                           apr_pool_t *VAR_6)
{
  svn_skel_t *VAR_7;
  FUNC_0(VAR_3 || VAR_4);

  if (!VAR_3)
    {
      FUNC_4(FUNC_3(VAR_5), VAR_2);
      return VAR_0;
    }


  VAR_7 = FUNC_3(VAR_5);

  FUNC_6(FUNC_2(VAR_3->node_kind),
                        VAR_7, VAR_5);

  FUNC_5(VAR_3->peg_rev, VAR_7, VAR_5);

  FUNC_6(FUNC_1(VAR_5, VAR_3->path_in_repos), VAR_7,
                        VAR_5);

  if (!VAR_3->repos_uuid)
    FUNC_4(FUNC_3(VAR_5), VAR_7);
  else
    FUNC_6(VAR_3->repos_uuid, VAR_7, VAR_5);

  FUNC_6(FUNC_1(VAR_5, VAR_3->repos_url), VAR_7,
                        VAR_5);

  FUNC_6(VAR_1, VAR_7, VAR_5);

  FUNC_4(VAR_7, VAR_2);
  return VAR_0;
}
