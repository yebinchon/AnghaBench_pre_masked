
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_x__revision_file_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int **,int *,int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;

svn_error_t *
FUNC_5(svn_fs_x__revision_file_t **VAR_3,
                                  svn_fs_t *VAR_4,
                                  svn_fs_x__txn_id_t VAR_5,
                                  apr_pool_t* VAR_6,
                                  apr_pool_t *VAR_7)
{
  apr_file_t *VAR_8;
  FUNC_0(FUNC_4(&VAR_8,
                           FUNC_2(VAR_4, VAR_5,
                                                        VAR_7),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_6));

  return FUNC_1(FUNC_3(VAR_3, VAR_4, VAR_8,
                                                      VAR_6));
}
