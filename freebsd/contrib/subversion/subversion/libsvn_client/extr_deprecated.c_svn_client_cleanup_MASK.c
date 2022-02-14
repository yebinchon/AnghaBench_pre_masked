
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*) ;

svn_error_t *
FUNC_7(const char *VAR_3,
                   svn_client_ctx_t *VAR_4,
                   apr_pool_t *VAR_5)
{
  const char *VAR_6;

  if (FUNC_6(VAR_3))
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_1("'%s' is not a local path"), VAR_3);

  FUNC_0(FUNC_3(&VAR_6, VAR_3, VAR_5));

  return FUNC_5(FUNC_2(VAR_6,
                                             VAR_2 ,
                                             VAR_2 ,
                                             VAR_2 ,
                                             VAR_2 ,
                                             VAR_0 ,
                                             VAR_4, VAR_5));
}
