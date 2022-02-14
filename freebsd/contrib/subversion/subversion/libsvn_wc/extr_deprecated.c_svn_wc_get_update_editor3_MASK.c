
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_get_file_t ;
typedef int * svn_wc_external_update_t ;
typedef int svn_wc_context_t ;
typedef scalar_t__ svn_wc_conflict_resolver_func_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct traversal_info_update_baton {int * traversal; int * db; } ;
struct conflict_func_1to2_baton {void* inner_baton; scalar_t__ inner_func; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct traversal_info_update_baton* FUNC_1 (int *,int) ;
 struct conflict_func_1to2_baton* FUNC_2 (int *,int) ;
 int * VAR_3 ;
 int FUNC_3 (char const**,char const*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int const**,void**,int *,int *,int ,char const*,int ,int ,int ,int ,int ,int ,int ,char const*,int const*,int *,int *,int *,struct conflict_func_1to2_baton*,int *,struct traversal_info_update_baton*,int ,void*,int ,void*,int *,int *) ;
 int * VAR_4 ;

svn_error_t *
FUNC_8(svn_revnum_t *VAR_5,
                          svn_wc_adm_access_t *VAR_6,
                          const char *VAR_7,
                          svn_boolean_t VAR_8,
                          svn_depth_t VAR_9,
                          svn_boolean_t VAR_10,
                          svn_boolean_t VAR_11,
                          svn_wc_notify_func2_t VAR_12,
                          void *VAR_13,
                          svn_cancel_func_t VAR_14,
                          void *VAR_15,
                          svn_wc_conflict_resolver_func_t VAR_16,
                          void *VAR_17,
                          svn_wc_get_file_t VAR_18,
                          void *VAR_19,
                          const char *VAR_20,
                          const apr_array_header_t *VAR_21,
                          const svn_delta_editor_t **VAR_22,
                          void **VAR_23,
                          svn_wc_traversal_info_t *VAR_24,
                          apr_pool_t *VAR_25)
{
  svn_wc_context_t *VAR_26;
  svn_wc__db_t *VAR_27 = FUNC_5(VAR_6);
  svn_wc_external_update_t VAR_28 = ((void*)0);
  struct traversal_info_update_baton *VAR_29 = ((void*)0);
  struct conflict_func_1to2_baton *VAR_30 = ((void*)0);

  FUNC_0(FUNC_6(&VAR_26, ((void*)0), VAR_27, VAR_25));

  if (VAR_24)
    {
      VAR_29 = FUNC_1(VAR_25, sizeof(*VAR_29));
      VAR_29->db = VAR_27;
      VAR_29->traversal = VAR_24;
      VAR_28 = VAR_4;
    }

  if (VAR_16)
    {
      VAR_30 = FUNC_2(VAR_25, sizeof(*VAR_30));
      VAR_30->inner_func = VAR_16;
      VAR_30->inner_baton = VAR_17;
    }

  if (VAR_20)
    FUNC_0(FUNC_3(&VAR_20, VAR_20, VAR_25));

  FUNC_0(FUNC_7(VAR_22, VAR_23,
                                    VAR_5,
                                    VAR_26,
                                    FUNC_4(VAR_6),
                                    VAR_7,
                                    VAR_8,
                                    VAR_9, VAR_10,
                                    VAR_11,
                                    VAR_2 ,
                                    VAR_0 ,
                                    VAR_0 ,
                                    VAR_20,
                                    VAR_21,
                                    ((void*)0), ((void*)0),
                                    VAR_16 ? VAR_3
                                                  : ((void*)0),
                                    VAR_30,
                                    VAR_28, VAR_29,
                                    VAR_14, VAR_15,
                                    VAR_12, VAR_13,
                                    VAR_25, VAR_25));



  return VAR_1;
}
