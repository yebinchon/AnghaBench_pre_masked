
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_verify_cb_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,void*,int *) ;
 int FUNC_6 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc__db_t *VAR_0,
                          const char *VAR_1,
                          svn_wc__db_verify_cb_t VAR_2,
                          void *VAR_3,
                          apr_pool_t *VAR_4)
{
  svn_wc__db_wcroot_t *VAR_5;
  const char *VAR_6;

  FUNC_1(FUNC_3(VAR_1));

  FUNC_0(FUNC_6(&VAR_5, &VAR_6, VAR_0,
                              VAR_1, VAR_4, VAR_4));
  FUNC_2(VAR_5);

  return FUNC_4(
            FUNC_5(VAR_5, VAR_2, VAR_3,
                                               VAR_4));
}
