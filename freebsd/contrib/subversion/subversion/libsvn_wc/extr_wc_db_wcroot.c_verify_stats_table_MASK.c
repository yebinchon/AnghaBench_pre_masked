
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_sqlite__db_t *VAR_3,
                   int VAR_4,
                   apr_pool_t *VAR_5)
{
  svn_sqlite__stmt_t *VAR_6;
  svn_boolean_t VAR_7;

  if (VAR_4 != VAR_2)
    return VAR_1;

  FUNC_0(FUNC_2(&VAR_6, VAR_3,
                                    VAR_0));
  FUNC_0(FUNC_4(&VAR_7, VAR_6));
  FUNC_0(FUNC_3(VAR_6));

  if (!VAR_7)
    {
      FUNC_1(
          FUNC_5(VAR_3, VAR_5));
    }

  return VAR_1;
}
