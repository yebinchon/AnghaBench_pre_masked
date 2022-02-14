
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int *,int const*,int ,int ,int,int ,int ,int ,int const*,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_0,
                    const apr_array_header_t *VAR_1,
                    svn_revnum_t VAR_2,
                    svn_revnum_t VAR_3,
                    int VAR_4,
                    svn_boolean_t VAR_5,
                    svn_boolean_t VAR_6,
                    svn_boolean_t VAR_7,
                    const apr_array_header_t *VAR_8,
                    svn_repos_authz_func_t VAR_9,
                    void *VAR_10,
                    svn_log_entry_receiver_t VAR_11,
                    void *VAR_12,
                    apr_pool_t *VAR_13)
{
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
                                    VAR_5,
                                    VAR_6,
                                    VAR_7, VAR_8,
                                    VAR_9, VAR_10,
                                    VAR_11, VAR_12, VAR_13);
}
