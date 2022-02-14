
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func2_t ;
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
 int FUNC_1 (int) ;
 int * VAR_1 ;
 struct traversal_info_update_baton* FUNC_2 (int *,int) ;
 struct conflict_func_1to2_baton* FUNC_3 (int *,int) ;
 int * VAR_2 ;
 int FUNC_4 (char const**,char const*,int *) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int *,int *) ;
 int FUNC_9 (int const**,void**,int *,int *,int ,char const*,char const*,int ,int ,int ,int ,int ,char const*,int const*,int *,int *,int *,struct conflict_func_1to2_baton*,int *,struct traversal_info_update_baton*,int ,void*,int ,void*,int *,int *) ;
 int * VAR_3 ;

svn_error_t *
FUNC_10(svn_revnum_t *VAR_4,
                          svn_wc_adm_access_t *VAR_5,
                          const char *VAR_6,
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
                          const char *VAR_18,
                          const apr_array_header_t *VAR_19,
                          const svn_delta_editor_t **VAR_20,
                          void **VAR_21,
                          svn_wc_traversal_info_t *VAR_22,
                          apr_pool_t *VAR_23)
{
  svn_wc_context_t *VAR_24;
  svn_wc__db_t *VAR_25 = FUNC_7(VAR_5);
  svn_wc_external_update_t VAR_26 = ((void*)0);
  struct traversal_info_update_baton *VAR_27 = ((void*)0);
  struct conflict_func_1to2_baton *VAR_28 = ((void*)0);

  FUNC_1(VAR_7 && FUNC_5(VAR_7, VAR_23));

  FUNC_0(FUNC_8(&VAR_24, ((void*)0), VAR_25, VAR_23));

  if (VAR_22)
    {
      VAR_27 = FUNC_2(VAR_23, sizeof(*VAR_27));
      VAR_27->db = VAR_25;
      VAR_27->traversal = VAR_22;
      VAR_26 = VAR_3;
    }

  if (VAR_16)
    {
      VAR_28 = FUNC_3(VAR_23, sizeof(*VAR_28));
      VAR_28->inner_func = VAR_16;
      VAR_28->inner_baton = VAR_17;
    }

  if (VAR_18)
    FUNC_0(FUNC_4(&VAR_18, VAR_18, VAR_23));

  FUNC_0(FUNC_9(VAR_20, VAR_21,
                                    VAR_4,
                                    VAR_24,
                                    FUNC_6(VAR_5),
                                    VAR_6, VAR_7,
                                    VAR_8,
                                    VAR_9, VAR_10,
                                    VAR_11,
                                    VAR_0 ,
                                    VAR_18,
                                    VAR_19,
                                    ((void*)0), ((void*)0),
                                    VAR_16 ? VAR_2
                                                  : ((void*)0),
                                    VAR_28,
                                    VAR_26, VAR_27,
                                    VAR_14, VAR_15,
                                    VAR_12, VAR_13,
                                    VAR_23, VAR_23));



  return VAR_1;
}
