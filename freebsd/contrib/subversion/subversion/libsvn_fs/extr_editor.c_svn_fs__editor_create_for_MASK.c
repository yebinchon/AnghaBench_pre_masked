
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int ,void*,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,char const*,int *) ;

svn_error_t *
FUNC_4(svn_editor_t **VAR_0,
                          svn_fs_t *VAR_1,
                          const char *VAR_2,
                          svn_cancel_func_t VAR_3,
                          void *VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  svn_fs_txn_t *VAR_7;

  FUNC_0(FUNC_3(&VAR_7, VAR_1, VAR_2, VAR_5));
  return FUNC_2(FUNC_1(VAR_0, VAR_7,
                                     VAR_3, VAR_4,
                                     VAR_5, VAR_6));
}
