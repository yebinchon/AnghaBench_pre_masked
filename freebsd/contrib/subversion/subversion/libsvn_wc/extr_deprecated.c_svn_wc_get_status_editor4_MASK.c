
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_status_func3_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct status4_wrapper_baton {char const* anchor_abspath; int * anchor_relpath; int * wc_ctx; void* old_baton; int old_func; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 struct status4_wrapper_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*,char const*,int ,int *,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int const**,void**,void**,int *,int *,char const*,char const*,int ,int ,int ,int,int ,int const*,int ,struct status4_wrapper_baton*,int ,void*,int *,int *) ;

svn_error_t *
FUNC_10(const svn_delta_editor_t **VAR_5,
                          void **VAR_6,
                          void **VAR_7,
                          svn_revnum_t *VAR_8,
                          svn_wc_adm_access_t *VAR_9,
                          const char *VAR_10,
                          svn_depth_t VAR_11,
                          svn_boolean_t VAR_12,
                          svn_boolean_t VAR_13,
                          const apr_array_header_t *VAR_14,
                          svn_wc_status_func3_t VAR_15,
                          void *VAR_16,
                          svn_cancel_func_t VAR_17,
                          void *VAR_18,
                          svn_wc_traversal_info_t *VAR_19,
                          apr_pool_t *VAR_20)
{
  struct status4_wrapper_baton *VAR_21 = FUNC_1(VAR_20, sizeof(*VAR_21));
  svn_wc__db_t *VAR_22;
  svn_wc_context_t *VAR_23;
  const char *VAR_24;

  VAR_21->old_func = VAR_15;
  VAR_21->old_baton = VAR_16;

  VAR_22 = FUNC_6(VAR_9);

  FUNC_0(FUNC_7(&VAR_23, ((void*)0) ,
                                         VAR_22, VAR_20));

  VAR_21->wc_ctx = VAR_23;

  VAR_24 = FUNC_5(VAR_9);

  if (!FUNC_3(FUNC_8(VAR_9)))
    {
      VAR_21->anchor_abspath = VAR_24;
      VAR_21->anchor_relpath = FUNC_8(VAR_9);
    }
  else
    {
      VAR_21->anchor_abspath = ((void*)0);
      VAR_21->anchor_relpath = ((void*)0);
    }





  FUNC_0(FUNC_9(VAR_5, VAR_6, VAR_7,
                                    VAR_8, VAR_23, VAR_24,
                                    VAR_10, VAR_11, VAR_12,
                                    VAR_13,
                                    (VAR_11 != VAR_4) ,
                                    VAR_0 ,
                                    VAR_14,
                                    VAR_3, VAR_21,
                                    VAR_17, VAR_18,
                                    VAR_20, VAR_20));

  if (VAR_19)
    {
      const char *VAR_25 = FUNC_8(VAR_9);
      const char *VAR_26 = VAR_24;
      if (*VAR_10)
        {
          VAR_25 = FUNC_4(VAR_25, VAR_10, VAR_20);
          VAR_26 = FUNC_4(VAR_26, VAR_10, VAR_20);
        }

      FUNC_0(FUNC_2(VAR_23, VAR_26, VAR_25, VAR_11,
                                    VAR_19, VAR_2, VAR_2,
                                    VAR_20));
    }



  return VAR_1;
}
