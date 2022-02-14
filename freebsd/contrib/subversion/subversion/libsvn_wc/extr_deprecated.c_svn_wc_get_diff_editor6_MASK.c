
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks4_t ;
typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_diff_tree_processor_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int const*,int *) ;
 int * FUNC_2 (int const*,int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int const**,void**,int *,char const*,char const*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const*,int const*,int ,void*,int *,int *) ;
 int FUNC_5 (int const**,int const*,void*,scalar_t__,int *,int *) ;

svn_error_t *
FUNC_6(const svn_delta_editor_t **VAR_2,
                        void **VAR_3,
                        svn_wc_context_t *VAR_4,
                        const char *VAR_5,
                        const char *VAR_6,
                        svn_depth_t VAR_7,
                        svn_boolean_t VAR_8,
                        svn_boolean_t VAR_9,
                        svn_boolean_t VAR_10,
                        svn_boolean_t VAR_11,
                        svn_boolean_t VAR_12,
                        svn_boolean_t VAR_13,
                        const apr_array_header_t *VAR_14,
                        const svn_wc_diff_callbacks4_t *VAR_15,
                        void *VAR_16,
                        svn_cancel_func_t VAR_17,
                        void *VAR_18,
                        apr_pool_t *VAR_19,
                        apr_pool_t *VAR_20)
{
  const svn_diff_tree_processor_t *VAR_21;


  if (VAR_10)
    VAR_9 = VAR_1;


  if (VAR_9)
    VAR_8 = VAR_0;

  FUNC_0(FUNC_5(&VAR_21,
                                      VAR_15, VAR_16, VAR_1,
                                      VAR_19, VAR_20));

  if (VAR_12)
    VAR_21 = FUNC_2(
                              VAR_21, ((void*)0), VAR_19);

  if (! VAR_9)
    VAR_21 = FUNC_1(
                              VAR_21, VAR_19);

  return FUNC_3(
    FUNC_4(VAR_2, VAR_3,
                            VAR_4,
                            VAR_5, VAR_6,
                            VAR_7,
                            VAR_8, VAR_11,
                            VAR_12, VAR_13,
                            VAR_14,
                            VAR_21,
                            VAR_17, VAR_18,
                            VAR_19, VAR_20));
}
