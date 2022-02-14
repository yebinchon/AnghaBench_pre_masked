
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_ra_reporter_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct wrap_2to1_report_baton {void* baton; int const* reporter; } ;
struct compat_notify_baton_t {void* baton; int func; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,int *,int *,struct wrap_2to1_report_baton*,int ,int ,int ,int ,struct compat_notify_baton_t*,int *,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_1(const char *VAR_2,
                       svn_wc_adm_access_t *VAR_3,
                       const svn_ra_reporter_t *VAR_4,
                       void *VAR_5,
                       svn_boolean_t VAR_6,
                       svn_boolean_t VAR_7,
                       svn_boolean_t VAR_8,
                       svn_wc_notify_func_t VAR_9,
                       void *VAR_10,
                       svn_wc_traversal_info_t *VAR_11,
                       apr_pool_t *VAR_12)
{
  struct wrap_2to1_report_baton VAR_13;
  struct compat_notify_baton_t VAR_14;

  VAR_13.reporter = VAR_4;
  VAR_13.baton = VAR_5;

  VAR_14.func = VAR_9;
  VAR_14.baton = VAR_10;

  return FUNC_0(VAR_2, VAR_3, &VAR_1, &VAR_13,
                                 VAR_6, VAR_7, VAR_8,
                                 VAR_0, &VAR_14,
                                 VAR_11,
                                 VAR_12);
}
