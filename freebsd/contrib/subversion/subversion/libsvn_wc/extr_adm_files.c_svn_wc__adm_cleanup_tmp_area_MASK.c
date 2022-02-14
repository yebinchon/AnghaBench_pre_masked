
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char const*,int ,int *,int *,int *) ;
 char* FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (int *,char const*,int *) ;

svn_error_t *
FUNC_8(svn_wc__db_t *VAR_2,
                             const char *VAR_3,
                             apr_pool_t *VAR_4)
{
  const char *VAR_5;

  FUNC_1(FUNC_3(VAR_3));

  FUNC_0(FUNC_7(VAR_2, VAR_3, VAR_4));


  VAR_5 = FUNC_6(VAR_3, VAR_0, VAR_4);

  FUNC_0(FUNC_5(VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_4));


  return FUNC_4(FUNC_2(VAR_3, VAR_4));
}
