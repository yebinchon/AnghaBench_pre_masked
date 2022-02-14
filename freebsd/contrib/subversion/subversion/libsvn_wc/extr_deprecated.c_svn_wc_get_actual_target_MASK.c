
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_5(const char *VAR_0,
                         const char **VAR_1,
                         const char **VAR_2,
                         apr_pool_t *VAR_3)
{
  svn_wc_context_t *VAR_4;

  FUNC_0(FUNC_2(&VAR_4, ((void*)0), VAR_3, VAR_3));
  FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_4, VAR_0, VAR_3, VAR_3));

  return FUNC_1(FUNC_3(VAR_4));
}
