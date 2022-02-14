
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status_func2_t ;
typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct status3_wrapper_baton {void* old_baton; int old_func; int member_0; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,int const*,int ,struct status3_wrapper_baton*,int ,int ,int ,int ,int ,int const*,int *,int *) ;

svn_error_t *
FUNC_1(svn_revnum_t *VAR_1,
                   const char *VAR_2,
                   const svn_opt_revision_t *VAR_3,
                   svn_wc_status_func2_t VAR_4,
                   void *VAR_5,
                   svn_depth_t VAR_6,
                   svn_boolean_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9,
                   svn_boolean_t VAR_10,
                   const apr_array_header_t *VAR_11,
                   svn_client_ctx_t *VAR_12,
                   apr_pool_t *VAR_13)
{
  struct status3_wrapper_baton VAR_14 = { 0 };
  VAR_14.old_func = VAR_4;
  VAR_14.old_baton = VAR_5;
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0,
                            &VAR_14, VAR_6, VAR_7, VAR_8, VAR_9,
                            VAR_10, VAR_11, VAR_12, VAR_13);
}
