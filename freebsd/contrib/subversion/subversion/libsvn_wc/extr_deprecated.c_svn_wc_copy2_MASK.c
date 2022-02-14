
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
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 char* FUNC_2 (int ,char const*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,char const*,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_9(const char *VAR_1,
             svn_wc_adm_access_t *VAR_2,
             const char *VAR_3,
             svn_cancel_func_t VAR_4,
             void *VAR_5,
             svn_wc_notify_func2_t VAR_6,
             void *VAR_7,
             apr_pool_t *VAR_8)
{
  svn_wc_context_t *VAR_9;
  svn_wc__db_t *VAR_10 = FUNC_5(VAR_2);
  const char *VAR_11;
  const char *VAR_12;

  FUNC_0(FUNC_6(&VAR_9, ((void*)0), VAR_10, VAR_8));
  FUNC_0(FUNC_1(&VAR_11, VAR_1, VAR_8));

  VAR_12 = FUNC_2(FUNC_4(VAR_2),
                                VAR_3, VAR_8);

  FUNC_0(FUNC_8(VAR_9,
                       VAR_11,
                       VAR_12,
                       VAR_0 ,
                       VAR_4, VAR_5,
                       VAR_6, VAR_7,
                       VAR_8));

  return FUNC_3(FUNC_7(VAR_9));
}
