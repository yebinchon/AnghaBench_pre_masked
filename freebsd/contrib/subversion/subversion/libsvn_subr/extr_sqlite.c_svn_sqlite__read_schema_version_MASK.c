
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,char*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

svn_error_t *
FUNC_6(int *VAR_0,
                                svn_sqlite__db_t *VAR_1,
                                apr_pool_t *VAR_2)
{
  svn_sqlite__stmt_t *VAR_3;

  FUNC_0(FUNC_1(&VAR_3, VAR_1, "PRAGMA user_version;", VAR_2));
  FUNC_0(FUNC_5(VAR_3));

  *VAR_0 = FUNC_3(VAR_3, 0);

  return FUNC_2(FUNC_4(VAR_3));
}
