
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

svn_error_t *
FUNC_10(apr_int64_t *VAR_2,
                            svn_sqlite__db_t *VAR_3,
                            apr_pool_t *VAR_4)
{
  svn_sqlite__stmt_t *VAR_5;
  svn_boolean_t VAR_6;



  FUNC_0(FUNC_7(&VAR_5, VAR_3, VAR_0));
  FUNC_0(FUNC_9(&VAR_6, VAR_5));
  if (!VAR_6)
    return FUNC_3(VAR_1, FUNC_8(VAR_5),
                             FUNC_2("Missing a row in WCROOT."));

  FUNC_1(!FUNC_6(VAR_5, 0));
  *VAR_2 = FUNC_5(VAR_5, 0);

  return FUNC_4(FUNC_8(VAR_5));
}
