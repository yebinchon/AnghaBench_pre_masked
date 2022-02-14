
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status2_t ;
typedef int svn_error_t ;
struct status_editor3_compat_baton {int old_baton; int (* old_func ) (int ,char const*,int *) ;} ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                           const char *VAR_2,
                           svn_wc_status2_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  struct status_editor3_compat_baton *VAR_5 = VAR_1;

  VAR_5->old_func(VAR_5->old_baton, VAR_2, VAR_3);
  return VAR_0;
}
