
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int *,int,int const*,int *) ;
 int FUNC_3 (int **,int *,int ) ;
 int FUNC_4 (int*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_sqlite__db_t *VAR_4,
                                    svn_wc__db_wcroot_t *VAR_5,
                                    const svn_checksum_t *VAR_6,
                                    const char *VAR_7,
                                    apr_pool_t *VAR_8)
{
  svn_sqlite__stmt_t *VAR_9;
  int VAR_10;


  FUNC_0(FUNC_3(&VAR_9, VAR_4,
                                    VAR_1));
  FUNC_0(FUNC_2(VAR_9, 1, VAR_6, VAR_8));
  FUNC_0(FUNC_4(&VAR_10, VAR_9));


  if (VAR_10 > 0)
    {






      svn_boolean_t VAR_11 = VAR_3;


      FUNC_0(FUNC_1(VAR_7, VAR_11,
                                  VAR_8));
    }

  return VAR_2;
}
