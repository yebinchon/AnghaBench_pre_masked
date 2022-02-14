
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int ,char const*,char const*,int *,int const*,int ,int ,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_0,
                              svn_revnum_t VAR_1,
                              const char *VAR_2,
                              const char *VAR_3,
                              const svn_string_t *VAR_4,
                              svn_boolean_t VAR_5,
                              svn_boolean_t VAR_6,
                              svn_repos_authz_func_t VAR_7,
                              void *VAR_8,
                              apr_pool_t *VAR_9)
{
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0),
                                       VAR_4,
                                       VAR_5,
                                       VAR_6,
                                       VAR_7,
                                       VAR_8, VAR_9);
}
