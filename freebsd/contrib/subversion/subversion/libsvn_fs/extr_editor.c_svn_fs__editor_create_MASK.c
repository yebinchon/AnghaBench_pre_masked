
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_cancel_func_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int ,void*,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,int ,int ,int *) ;
 int FUNC_4 (char const**,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;

svn_error_t *
FUNC_6(svn_editor_t **VAR_0,
                      const char **VAR_1,
                      svn_fs_t *VAR_2,
                      apr_uint32_t VAR_3,
                      svn_cancel_func_t VAR_4,
                      void *VAR_5,
                      apr_pool_t *VAR_6,
                      apr_pool_t *VAR_7)
{
  svn_revnum_t VAR_8;
  svn_fs_txn_t *VAR_9;

  FUNC_0(FUNC_5(&VAR_8, VAR_2, VAR_7));
  FUNC_0(FUNC_3(&VAR_9, VAR_2, VAR_8, VAR_3, VAR_6));
  FUNC_0(FUNC_4(VAR_1, VAR_9, VAR_6));
  return FUNC_2(FUNC_1(VAR_0, VAR_9,
                                     VAR_4, VAR_5,
                                     VAR_6, VAR_7));
}
