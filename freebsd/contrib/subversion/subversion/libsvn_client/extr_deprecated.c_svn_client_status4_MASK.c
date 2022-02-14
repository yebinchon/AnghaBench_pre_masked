
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_status_func3_t ;
typedef int svn_revnum_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct status4_wrapper_baton {void* old_baton; int old_func; int wc_ctx; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,TYPE_1__*,char const*,int const*,int ,int ,int ,int ,int ,int ,int const*,int ,struct status4_wrapper_baton*,int *) ;

svn_error_t *
FUNC_1(svn_revnum_t *VAR_2,
                   const char *VAR_3,
                   const svn_opt_revision_t *VAR_4,
                   svn_wc_status_func3_t VAR_5,
                   void *VAR_6,
                   svn_depth_t VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9,
                   svn_boolean_t VAR_10,
                   svn_boolean_t VAR_11,
                   const apr_array_header_t *VAR_12,
                   svn_client_ctx_t *VAR_13,
                   apr_pool_t *VAR_14)
{
  struct status4_wrapper_baton VAR_15;

  VAR_15.wc_ctx = VAR_13->wc_ctx;
  VAR_15.old_func = VAR_5;
  VAR_15.old_baton = VAR_6;

  return FUNC_0(VAR_2, VAR_13, VAR_3, VAR_4, VAR_7, VAR_8,
                            VAR_9, VAR_10, VAR_11, VAR_0,
                            VAR_12, VAR_1, &VAR_15, VAR_14);
}
