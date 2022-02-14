
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int *) ;

svn_error_t *
FUNC_7(const char *VAR_0,
                   svn_wc_adm_access_t *VAR_1,
                   apr_pool_t *VAR_2)
{
  const char *VAR_3;
  svn_wc_context_t *VAR_4;

  FUNC_0(FUNC_1(&VAR_3, VAR_0, VAR_2));
  FUNC_0(FUNC_4(&VAR_4, ((void*)0) ,
                                         FUNC_3(VAR_1),
                                         VAR_2));

  FUNC_0(FUNC_6(VAR_4, VAR_3, VAR_2));

  return FUNC_2(FUNC_5(VAR_4));

}
