
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks3_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct diff_callbacks3_wrapper_baton {int anchor_abspath; int anchor; int * db; void* baton; int const* callbacks3; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct diff_callbacks3_wrapper_baton* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const**,void**,int *,int ,char const*,int ,int ,int ,int ,int ,int ,int ,int const*,int *,struct diff_callbacks3_wrapper_baton*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_7(svn_wc_adm_access_t *VAR_3,
                        const char *VAR_4,
                        const svn_wc_diff_callbacks3_t *VAR_5,
                        void *VAR_6,
                        svn_depth_t VAR_7,
                        svn_boolean_t VAR_8,
                        svn_boolean_t VAR_9,
                        svn_boolean_t VAR_10,
                        svn_cancel_func_t VAR_11,
                        void *VAR_12,
                        const apr_array_header_t *VAR_13,
                        const svn_delta_editor_t **VAR_14,
                        void **VAR_15,
                        apr_pool_t *VAR_16)
{
  struct diff_callbacks3_wrapper_baton *VAR_17 = FUNC_1(VAR_16, sizeof(*VAR_17));
  svn_wc_context_t *VAR_18;
  svn_wc__db_t *VAR_19 = FUNC_3(VAR_3);

  FUNC_0(FUNC_4(&VAR_18, ((void*)0), VAR_19, VAR_16));

  VAR_17->callbacks3 = VAR_5;
  VAR_17->baton = VAR_6;
  VAR_17->db = VAR_19;
  VAR_17->anchor = FUNC_5(VAR_3);
  VAR_17->anchor_abspath = FUNC_2(VAR_3);

  FUNC_0(FUNC_6(VAR_14,
                                   VAR_15,
                                   VAR_18,
                                   VAR_17->anchor_abspath,
                                   VAR_4,
                                   VAR_7,
                                   VAR_8,
                                   VAR_0,
                                   VAR_0,
                                   VAR_9,
                                   VAR_10,
                                   VAR_0,
                                   VAR_13,
                                   &VAR_2,
                                   VAR_17,
                                   VAR_11,
                                   VAR_12,
                                   VAR_16,
                                   VAR_16));



   return VAR_1;
}
