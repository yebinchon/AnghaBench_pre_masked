
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_status_func2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct status_editor3_compat_baton {void* old_baton; int old_func; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 struct status_editor3_compat_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int * FUNC_1 (int const**,void**,void**,int *,int *,char const*,int ,int ,int ,int const*,int ,struct status_editor3_compat_baton*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_2(const svn_delta_editor_t **VAR_1,
                          void **VAR_2,
                          void **VAR_3,
                          svn_revnum_t *VAR_4,
                          svn_wc_adm_access_t *VAR_5,
                          const char *VAR_6,
                          svn_depth_t VAR_7,
                          svn_boolean_t VAR_8,
                          svn_boolean_t VAR_9,
                          const apr_array_header_t *VAR_10,
                          svn_wc_status_func2_t VAR_11,
                          void *VAR_12,
                          svn_cancel_func_t VAR_13,
                          void *VAR_14,
                          svn_wc_traversal_info_t *VAR_15,
                          apr_pool_t *VAR_16)
{

  struct status_editor3_compat_baton *VAR_17 = FUNC_0(VAR_16, sizeof(*VAR_17));

  VAR_17->old_func = VAR_11;
  VAR_17->old_baton = VAR_12;

  return FUNC_1(VAR_1, VAR_2, VAR_3,
                                   VAR_4, VAR_5, VAR_6, VAR_7,
                                   VAR_8, VAR_9, VAR_10,
                                   VAR_0, VAR_17,
                                   VAR_13, VAR_14, VAR_15,
                                   VAR_16);
}
