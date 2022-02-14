
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_status_func2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *,int *) ;
 int * FUNC_3 (int const**,void**,void**,int *,int *,char const*,int ,int ,int ,int *,int ,void*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_4(const svn_delta_editor_t **VAR_0,
                          void **VAR_1,
                          void **VAR_2,
                          svn_revnum_t *VAR_3,
                          svn_wc_adm_access_t *VAR_4,
                          const char *VAR_5,
                          apr_hash_t *VAR_6,
                          svn_boolean_t VAR_7,
                          svn_boolean_t VAR_8,
                          svn_boolean_t VAR_9,
                          svn_wc_status_func2_t VAR_10,
                          void *VAR_11,
                          svn_cancel_func_t VAR_12,
                          void *VAR_13,
                          svn_wc_traversal_info_t *VAR_14,
                          apr_pool_t *VAR_15)
{
  apr_array_header_t *VAR_16;

  FUNC_1(FUNC_2(&VAR_16, VAR_6, VAR_15));
  return FUNC_3(VAR_0,
                                   VAR_1,
                                   VAR_2,
                                   VAR_3,
                                   VAR_4,
                                   VAR_5,
                                   FUNC_0(VAR_7),
                                   VAR_8,
                                   VAR_9,
                                   VAR_16,
                                   VAR_10,
                                   VAR_11,
                                   VAR_12,
                                   VAR_13,
                                   VAR_14,
                                   VAR_15);
}
