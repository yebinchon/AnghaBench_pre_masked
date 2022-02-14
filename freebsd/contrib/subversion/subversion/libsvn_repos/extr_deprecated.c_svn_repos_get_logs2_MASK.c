
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_log_message_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int * FUNC_0 (int *,int const*,int ,int ,int ,int ,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_repos_t *VAR_0,
                    const apr_array_header_t *VAR_1,
                    svn_revnum_t VAR_2,
                    svn_revnum_t VAR_3,
                    svn_boolean_t VAR_4,
                    svn_boolean_t VAR_5,
                    svn_repos_authz_func_t VAR_6,
                    void *VAR_7,
                    svn_log_message_receiver_t VAR_8,
                    void *VAR_9,
                    apr_pool_t *VAR_10)
{
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0,
                             VAR_4, VAR_5,
                             VAR_6, VAR_7, VAR_8,
                             VAR_9, VAR_10);
}
