
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int FUNC_2 (int **,char const*,int *) ;
 char* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_t *VAR_1,
                      svn_fs_x__txn_id_t VAR_2,
                      apr_off_t VAR_3,
                      apr_uint64_t VAR_4,
                      apr_pool_t *VAR_5)
{
  const char *VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5);
  apr_file_t *VAR_7;
  FUNC_0(FUNC_2(&VAR_7, VAR_6, VAR_5));
  FUNC_0(FUNC_1(VAR_7, VAR_3, 0,
                                              VAR_4, VAR_5));
  FUNC_0(FUNC_4(VAR_7, VAR_5));

  return VAR_0;
}
