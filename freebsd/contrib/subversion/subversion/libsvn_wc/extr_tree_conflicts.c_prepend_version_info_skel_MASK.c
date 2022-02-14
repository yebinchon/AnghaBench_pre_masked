
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* path_in_repos; char* repos_url; int peg_rev; int node_kind; } ;
typedef TYPE_1__ svn_wc_conflict_version_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_skel_t *VAR_2,
                          const svn_wc_conflict_version_t *VAR_3,
                          apr_pool_t *VAR_4)
{
  svn_skel_t *VAR_5 = FUNC_4(VAR_4);


  FUNC_3(VAR_5, VAR_1, VAR_3->node_kind, VAR_4);


  FUNC_5(FUNC_6(VAR_3->path_in_repos
                                       ? VAR_3->path_in_repos
                                       : "", VAR_4), VAR_5);


  FUNC_5(FUNC_6(FUNC_1(VAR_4, "%ld",
                                                    VAR_3->peg_rev),
                                       VAR_4), VAR_5);


  FUNC_5(FUNC_6(VAR_3->repos_url
                                       ? VAR_3->repos_url
                                       : "", VAR_4), VAR_5);

  FUNC_5(FUNC_6("version", VAR_4), VAR_5);

  FUNC_0(FUNC_2(VAR_5));

  FUNC_5(VAR_5, VAR_2);

  return VAR_0;
}
