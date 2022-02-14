
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_rangelist_t ;
typedef int svn_merge_range_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int,int) ;
 int FUNC_2 (char const**,char const*,int *,int *) ;
 int FUNC_3 (char const*) ;

svn_error_t *
FUNC_4(svn_rangelist_t **VAR_1,
                     const char *VAR_2,
                     apr_pool_t *VAR_3)
{
  const char *VAR_4 = VAR_2;

  *VAR_1 = FUNC_1(VAR_3, 1, sizeof(svn_merge_range_t *));
  FUNC_0(FUNC_2(&VAR_4, VAR_4 + FUNC_3(VAR_4), *VAR_1, VAR_3));
  return VAR_0;
}
