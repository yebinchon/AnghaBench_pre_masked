
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_0,
                         svn_wc__db_t *VAR_1,
                         const char *VAR_2,
                         apr_pool_t *VAR_3,
                         apr_pool_t *VAR_4)
{
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(FUNC_1(VAR_2));




  return FUNC_2(FUNC_3(VAR_0, VAR_1, VAR_2,
                                               VAR_3, VAR_4));
}
