
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

svn_error_t *
FUNC_4(svn_sqlite__db_t *VAR_2,
                               svn_error_t *VAR_3)
{
  svn_sqlite__stmt_t *VAR_4;


  if (VAR_3)
    {
      return FUNC_2(FUNC_1(VAR_2, VAR_3));
    }
  else
    {
      VAR_3 = FUNC_0(&VAR_4, VAR_2,
                                   VAR_0);
      if (!VAR_3)
        VAR_3 = FUNC_2(FUNC_3(VAR_4));
      if (VAR_3)
        return FUNC_2(FUNC_1(VAR_2, VAR_3));
    }

  return VAR_1;
}
