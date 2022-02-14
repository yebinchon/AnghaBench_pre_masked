
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct diff_callbacks_wrapper_baton {void* baton; int const* callbacks; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 struct diff_callbacks_wrapper_baton* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int * FUNC_2 (int *,char const*,int *,struct diff_callbacks_wrapper_baton*,int ,int ,int ,int ,int ,void*,int *,int const**,void**,int *) ;

svn_error_t *
FUNC_3(svn_wc_adm_access_t *VAR_1,
                        const char *VAR_2,
                        const svn_wc_diff_callbacks_t *VAR_3,
                        void *VAR_4,
                        svn_boolean_t VAR_5,
                        svn_boolean_t VAR_6,
                        svn_boolean_t VAR_7,
                        svn_boolean_t VAR_8,
                        svn_cancel_func_t VAR_9,
                        void *VAR_10,
                        const svn_delta_editor_t **VAR_11,
                        void **VAR_12,
                        apr_pool_t *VAR_13)
{
  struct diff_callbacks_wrapper_baton *VAR_14 = FUNC_1(VAR_13, sizeof(*VAR_14));
  VAR_14->callbacks = VAR_3;
  VAR_14->baton = VAR_4;
  return FUNC_2(VAR_1, VAR_2, &VAR_0, VAR_14,
                                 FUNC_0(VAR_5),
                                 VAR_6, VAR_7,
                                 VAR_8, VAR_9, VAR_10,
                                 ((void*)0), VAR_11, VAR_12, VAR_13);
}
