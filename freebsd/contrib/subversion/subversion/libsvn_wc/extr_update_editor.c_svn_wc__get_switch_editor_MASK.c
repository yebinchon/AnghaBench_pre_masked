
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_external_update_t ;
typedef int svn_wc_dirents_func_t ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc_conflict_resolver_func2_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ,char const*,char const*,int *,int ,char const*,int ,int ,int ,int ,int ,int ,int ,void*,int ,void*,int ,void*,int ,void*,int ,void*,char const*,int const*,int const**,void**,int *,int *) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

svn_error_t *
FUNC_3(const svn_delta_editor_t **VAR_1,
                          void **VAR_2,
                          svn_revnum_t *VAR_3,
                          svn_wc_context_t *VAR_4,
                          const char *VAR_5,
                          const char *VAR_6,
                          const char *VAR_7,
                          apr_hash_t *VAR_8,
                          svn_boolean_t VAR_9,
                          svn_depth_t VAR_10,
                          svn_boolean_t VAR_11,
                          svn_boolean_t VAR_12,
                          svn_boolean_t VAR_13,
                          const char *VAR_14,
                          const apr_array_header_t *VAR_15,
                          svn_wc_dirents_func_t VAR_16,
                          void *VAR_17,
                          svn_wc_conflict_resolver_func2_t VAR_18,
                          void *VAR_19,
                          svn_wc_external_update_t VAR_20,
                          void *VAR_21,
                          svn_cancel_func_t VAR_22,
                          void *VAR_23,
                          svn_wc_notify_func2_t VAR_24,
                          void *VAR_25,
                          apr_pool_t *VAR_26,
                          apr_pool_t *VAR_27)
{
  FUNC_0(VAR_7 && FUNC_2(VAR_7, VAR_27));

  return FUNC_1(VAR_3, VAR_4->db, VAR_5,
                     VAR_6, VAR_8, VAR_9,
                     VAR_7,
                     VAR_10, VAR_11, VAR_12,
                     VAR_0 ,
                     VAR_13,
                     VAR_0 ,
                     VAR_24, VAR_25,
                     VAR_22, VAR_23,
                     VAR_16, VAR_17,
                     VAR_18, VAR_19,
                     VAR_20, VAR_21,
                     VAR_14, VAR_15,
                     VAR_1, VAR_2,
                     VAR_26, VAR_27);
}
