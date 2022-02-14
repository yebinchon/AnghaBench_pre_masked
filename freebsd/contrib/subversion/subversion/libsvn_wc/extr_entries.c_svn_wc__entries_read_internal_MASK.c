
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *) ;
 int FUNC_2 (int **,int *,char const*,int *,int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *) ;

svn_error_t *
FUNC_8(apr_hash_t **VAR_1,
                              svn_wc_adm_access_t *VAR_2,
                              svn_boolean_t VAR_3,
                              apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5;

  VAR_5 = FUNC_4(VAR_2);
  if (! VAR_5)
    {
      svn_wc__db_t *VAR_6 = FUNC_7(VAR_2);
      const char *VAR_7 = FUNC_3(VAR_2);
      apr_pool_t *VAR_8 = FUNC_5(VAR_2);

      FUNC_0(FUNC_2(&VAR_5, VAR_6, VAR_7,
                           VAR_8, VAR_4));

      FUNC_6(VAR_2, VAR_5);
    }

  if (VAR_3)
    *VAR_1 = VAR_5;
  else
    FUNC_0(FUNC_1(VAR_1, VAR_5,
                          FUNC_5(VAR_2),
                          VAR_4));

  return VAR_0;
}
