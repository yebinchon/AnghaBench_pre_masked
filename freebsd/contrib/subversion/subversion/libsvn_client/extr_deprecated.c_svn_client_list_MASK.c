
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_list_func_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int const*,int const*,int ,int ,int ,int ,void*,int *,int *) ;

svn_error_t *
FUNC_2(const char *VAR_0,
                const svn_opt_revision_t *VAR_1,
                const svn_opt_revision_t *VAR_2,
                svn_boolean_t VAR_3,
                apr_uint32_t VAR_4,
                svn_boolean_t VAR_5,
                svn_client_list_func_t VAR_6,
                void *VAR_7,
                svn_client_ctx_t *VAR_8,
                apr_pool_t *VAR_9)
{
  return FUNC_1(VAR_0,
                          VAR_1,
                          VAR_2,
                          FUNC_0(VAR_3),
                          VAR_4,
                          VAR_5,
                          VAR_6,
                          VAR_7,
                          VAR_8,
                          VAR_9);
}
