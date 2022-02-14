
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,int const*) ;
 int FUNC_6 (int **,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_wc__db_t *VAR_0,
           const char *VAR_1,
           const char *VAR_2,
           const svn_string_t *VAR_3,
           apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5;

  FUNC_1(FUNC_3(VAR_1));







  FUNC_0(FUNC_6(&VAR_5, VAR_0, VAR_1,
                                        VAR_4, VAR_4));

  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_2(VAR_4);

  FUNC_5(VAR_5, VAR_2, VAR_3);
  return FUNC_4(FUNC_7(VAR_0, VAR_1,
                                                       VAR_5,
                                                       VAR_4));
}
