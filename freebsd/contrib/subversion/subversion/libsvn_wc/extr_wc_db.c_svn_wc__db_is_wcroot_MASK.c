
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_3,
                     svn_wc__db_t *VAR_4,
                     const char *VAR_5,
                     apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;

  FUNC_1(FUNC_3(VAR_5));

  FUNC_0(FUNC_4(&VAR_7, &VAR_8, VAR_4,
                              VAR_5, VAR_6, VAR_6));
  FUNC_2(VAR_7);

  if (*VAR_8 != '\0')
    {
      *VAR_3 = VAR_0;

      return VAR_1;
    }

   *VAR_3 = VAR_2;

   return VAR_1;
}
