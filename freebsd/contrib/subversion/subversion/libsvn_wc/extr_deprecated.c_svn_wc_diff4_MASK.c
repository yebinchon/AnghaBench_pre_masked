
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct diff_callbacks2_wrapper_baton {void* baton; int const* callbacks2; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 struct diff_callbacks2_wrapper_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char const*,int *,struct diff_callbacks2_wrapper_baton*,int ,int ,int const*,int *) ;

svn_error_t *
FUNC_2(svn_wc_adm_access_t *VAR_1,
             const char *VAR_2,
             const svn_wc_diff_callbacks2_t *VAR_3,
             void *VAR_4,
             svn_depth_t VAR_5,
             svn_boolean_t VAR_6,
             const apr_array_header_t *VAR_7,
             apr_pool_t *VAR_8)
{
  struct diff_callbacks2_wrapper_baton *VAR_9 = FUNC_0(VAR_8, sizeof(*VAR_9));
  VAR_9->callbacks2 = VAR_3;
  VAR_9->baton = VAR_4;

  return FUNC_1(VAR_1, VAR_2, &VAR_0, VAR_9,
                      VAR_5, VAR_6, VAR_7, VAR_8);
}
