
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_traversal_info_t ;
typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_ra_reporter2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct wrap_3to2_report_baton {void* baton; int const* reporter; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,int *,int *,struct wrap_3to2_report_baton*,int ,int ,int ,int ,int ,void*,int *,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_2(const char *VAR_2,
                        svn_wc_adm_access_t *VAR_3,
                        const svn_ra_reporter2_t *VAR_4,
                        void *VAR_5,
                        svn_boolean_t VAR_6,
                        svn_boolean_t VAR_7,
                        svn_boolean_t VAR_8,
                        svn_wc_notify_func2_t VAR_9,
                        void *VAR_10,
                        svn_wc_traversal_info_t *VAR_11,
                        apr_pool_t *VAR_12)
{
  struct wrap_3to2_report_baton VAR_13;
  VAR_13.reporter = VAR_4;
  VAR_13.baton = VAR_5;

  return FUNC_1(VAR_2,
                                 VAR_3,
                                 &VAR_1, &VAR_13,
                                 VAR_6,
                                 FUNC_0(VAR_7),
                                 VAR_0,
                                 VAR_8,
                                 VAR_9,
                                 VAR_10,
                                 VAR_11,
                                 VAR_12);
}
