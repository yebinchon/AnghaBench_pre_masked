
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef int svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int ,int ,int ,int ,void*,int ,int ,int *) ;

svn_error_t *
FUNC_3(svn_mergeinfo_catalog_t *VAR_2,
                           svn_repos_t *VAR_3,
                           const apr_array_header_t *VAR_4,
                           svn_revnum_t VAR_5,
                           svn_mergeinfo_inheritance_t VAR_6,
                           svn_boolean_t VAR_7,
                           svn_repos_authz_func_t VAR_8,
                           void *VAR_9,
                           apr_pool_t *VAR_10)
{
  svn_mergeinfo_catalog_t VAR_11 = FUNC_1(VAR_10);
  FUNC_0(FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
                                      VAR_7,
                                      VAR_8, VAR_9,
                                      VAR_1, VAR_11,
                                      VAR_10));
  *VAR_2 = VAR_11;

  return VAR_0;
}
