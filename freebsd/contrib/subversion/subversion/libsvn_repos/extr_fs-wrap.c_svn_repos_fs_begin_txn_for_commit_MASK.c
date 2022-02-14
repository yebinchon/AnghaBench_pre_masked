
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int **,int *,int ,int *,int *) ;
 int FUNC_3 (char const*,int *) ;

svn_error_t *
FUNC_4(svn_fs_txn_t **VAR_2,
                                  svn_repos_t *VAR_3,
                                  svn_revnum_t VAR_4,
                                  const char *VAR_5,
                                  const char *VAR_6,
                                  apr_pool_t *VAR_7)
{
  apr_hash_t *VAR_8 = FUNC_0(VAR_7);
  if (VAR_5)
    FUNC_1(VAR_8, VAR_0,
                  FUNC_3(VAR_5, VAR_7));
  if (VAR_6)
    FUNC_1(VAR_8, VAR_1,
                  FUNC_3(VAR_6, VAR_7));
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8,
                                            VAR_7);
}
