
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int *) ;

svn_error_t *
FUNC_5(svn_sqlite__db_t *VAR_3)
{
  svn_sqlite__stmt_t *VAR_4;
  svn_boolean_t VAR_5;

  FUNC_0(FUNC_2(&VAR_4, VAR_3, VAR_0));
  FUNC_0(FUNC_4(&VAR_5, VAR_4));
  FUNC_0(FUNC_3(VAR_4));

  if (VAR_5)
    return FUNC_1(VAR_1, ((void*)0),
                            ((void*)0) );

  return VAR_2;
}
