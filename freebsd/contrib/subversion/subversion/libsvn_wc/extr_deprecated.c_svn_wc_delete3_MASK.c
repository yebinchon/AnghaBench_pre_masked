
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int **,int *,char const*,int ,int,int ,void*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_8(const char *VAR_1,
               svn_wc_adm_access_t *VAR_2,
               svn_cancel_func_t VAR_3,
               void *VAR_4,
               svn_wc_notify_func2_t VAR_5,
               void *VAR_6,
               svn_boolean_t VAR_7,
               apr_pool_t *VAR_8)
{
  svn_wc_context_t *VAR_9;
  svn_wc__db_t *VAR_10 = FUNC_3(VAR_2);
  svn_wc_adm_access_t *VAR_11;
  const char *VAR_12;

  FUNC_0(FUNC_4(&VAR_9, ((void*)0), VAR_10, VAR_8));
  FUNC_0(FUNC_1(&VAR_12, VAR_1, VAR_8));



  FUNC_0(FUNC_5(&VAR_11, VAR_2, VAR_1,
                                VAR_0, -1, VAR_3, VAR_4, VAR_8));

  FUNC_0(FUNC_7(VAR_9,
                         VAR_12,
                         VAR_7,
                         VAR_0,
                         VAR_3, VAR_4,
                         VAR_5, VAR_6,
                         VAR_8));

  return FUNC_2(FUNC_6(VAR_9));
}
