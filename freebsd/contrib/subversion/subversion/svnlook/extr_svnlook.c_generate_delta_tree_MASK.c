
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_node_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int const**,void**,int *,int *,int *,int *,int *) ;
 int * FUNC_6 (void*) ;
 int FUNC_7 (int *,char*,int ,int ,int const*,void*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_repos_node_t **VAR_3,
                    svn_repos_t *VAR_4,
                    svn_fs_root_t *VAR_5,
                    svn_revnum_t VAR_6,
                    apr_pool_t *VAR_7)
{
  svn_fs_root_t *VAR_8;
  const svn_delta_editor_t *VAR_9;
  void *VAR_10;
  apr_pool_t *VAR_11 = FUNC_2(VAR_7);
  svn_fs_t *VAR_12 = FUNC_4(VAR_4);


  FUNC_0(FUNC_1(&VAR_8, VAR_12, VAR_6, VAR_7));


  FUNC_0(FUNC_5(&VAR_9, &VAR_10, VAR_4,
                                VAR_8, VAR_5, VAR_7, VAR_11));


  FUNC_0(FUNC_7(VAR_5, "", VAR_0, VAR_2,
                            VAR_9, VAR_10, ((void*)0), ((void*)0), VAR_11));


  *VAR_3 = FUNC_6(VAR_10);
  FUNC_3(VAR_11);
  return VAR_1;
}
