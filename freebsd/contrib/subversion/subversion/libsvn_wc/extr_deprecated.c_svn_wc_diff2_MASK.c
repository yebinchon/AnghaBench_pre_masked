
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_diff_callbacks_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks_wrapper_baton {void* baton; int const* callbacks; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 struct diff_callbacks_wrapper_baton* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int * FUNC_2 (int *,char const*,int *,struct diff_callbacks_wrapper_baton*,int ,int ,int *,int *) ;

svn_error_t *
FUNC_3(svn_wc_adm_access_t *VAR_1,
             const char *VAR_2,
             const svn_wc_diff_callbacks_t *VAR_3,
             void *VAR_4,
             svn_boolean_t VAR_5,
             svn_boolean_t VAR_6,
             apr_pool_t *VAR_7)
{
  struct diff_callbacks_wrapper_baton *VAR_8 = FUNC_1(VAR_7, sizeof(*VAR_8));
  VAR_8->callbacks = VAR_3;
  VAR_8->baton = VAR_4;
  return FUNC_2(VAR_1, VAR_2, &VAR_0, VAR_8,
                      FUNC_0(VAR_5), VAR_6,
                      ((void*)0), VAR_7);
}
