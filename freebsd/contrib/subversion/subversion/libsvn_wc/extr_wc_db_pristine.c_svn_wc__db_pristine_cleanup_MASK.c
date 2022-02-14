
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_6(svn_wc__db_t *VAR_1,
                            const char *VAR_2,
                            apr_pool_t *VAR_3)
{
  svn_wc__db_wcroot_t *VAR_4;
  const char *VAR_5;

  FUNC_1(FUNC_4(VAR_2));

  FUNC_0(FUNC_5(&VAR_4, &VAR_5, VAR_1,
                              VAR_2, VAR_3, VAR_3));
  FUNC_2(VAR_4);

  FUNC_0(FUNC_3(VAR_4, VAR_3));

  return VAR_0;
}
