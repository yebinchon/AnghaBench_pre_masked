
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct compat_notify_baton_t {void* baton; int func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int *,int ,int ,int ,void*,int ,struct compat_notify_baton_t*,int *) ;

svn_error_t *
FUNC_1(const char *VAR_1,
              svn_wc_adm_access_t *VAR_2,
              svn_boolean_t VAR_3,
              svn_boolean_t VAR_4,
              svn_cancel_func_t VAR_5,
              void *VAR_6,
              svn_wc_notify_func_t VAR_7,
              void *VAR_8,
              apr_pool_t *VAR_9)
{
  struct compat_notify_baton_t VAR_10;

  VAR_10.func = VAR_7;
  VAR_10.baton = VAR_8;

  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_0, &VAR_10, VAR_9);
}
