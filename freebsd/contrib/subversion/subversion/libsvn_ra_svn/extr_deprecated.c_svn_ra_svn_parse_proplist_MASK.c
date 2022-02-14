
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int **) ;
 int * FUNC_2 (int const*,int *) ;

svn_error_t *
FUNC_3(const apr_array_header_t *VAR_0,
                          apr_pool_t *VAR_1,
                          apr_hash_t **VAR_2)
{
  svn_ra_svn__list_t *VAR_3
    = FUNC_2(VAR_0, VAR_1);
  return FUNC_0(FUNC_1(VAR_3, VAR_1, VAR_2));
}
