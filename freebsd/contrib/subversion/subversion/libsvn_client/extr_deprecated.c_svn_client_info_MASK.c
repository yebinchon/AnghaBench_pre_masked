
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_opt_revision_t ;
typedef int svn_info_receiver_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int const*,int const*,int ,void*,int ,int *,int *,int *) ;

svn_error_t *
FUNC_2(const char *VAR_0,
                const svn_opt_revision_t *VAR_1,
                const svn_opt_revision_t *VAR_2,
                svn_info_receiver_t VAR_3,
                void *VAR_4,
                svn_boolean_t VAR_5,
                svn_client_ctx_t *VAR_6,
                apr_pool_t *VAR_7)
{
  return FUNC_1(VAR_0, VAR_1, VAR_2,
                          VAR_3, VAR_4,
                          FUNC_0(VAR_5),
                          ((void*)0), VAR_6, VAR_7);
}
