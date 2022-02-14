
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status_func2_t ;
typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char const*,int const*,int ,void*,int ,int ,int ,int ,int ,int *,int *,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_0,
                   const char *VAR_1,
                   const svn_opt_revision_t *VAR_2,
                   svn_wc_status_func2_t VAR_3,
                   void *VAR_4,
                   svn_boolean_t VAR_5,
                   svn_boolean_t VAR_6,
                   svn_boolean_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9,
                   svn_client_ctx_t *VAR_10,
                   apr_pool_t *VAR_11)
{
  return FUNC_1(VAR_0, VAR_1, VAR_2,
                            VAR_3, VAR_4,
                            FUNC_0(VAR_5),
                            VAR_6, VAR_7, VAR_8, VAR_9, ((void*)0),
                            VAR_10, VAR_11);
}
