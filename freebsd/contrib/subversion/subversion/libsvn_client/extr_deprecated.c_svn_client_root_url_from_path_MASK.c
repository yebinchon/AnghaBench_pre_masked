
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const**,int *,char const*,int *,int *,int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

svn_error_t *
FUNC_7(const char **VAR_0,
                              const char *VAR_1,
                              svn_client_ctx_t *VAR_2,
                              apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_5(VAR_3);
  svn_error_t *VAR_5;
  if (!FUNC_4(VAR_1))
    FUNC_0(FUNC_2(&VAR_1, VAR_1, VAR_3));

  VAR_5 = FUNC_1(VAR_0, ((void*)0), VAR_1,
                                  VAR_2, VAR_3, VAR_4);


  FUNC_6(VAR_4);
  return FUNC_3(VAR_5);
}
