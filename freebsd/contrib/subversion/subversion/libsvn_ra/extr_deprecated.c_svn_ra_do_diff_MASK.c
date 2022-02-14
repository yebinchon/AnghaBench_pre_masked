
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_reporter2_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (int *,int const**,void**,int ,char const*,int ,int ,int ,char const*,int const*,void*,int *) ;

svn_error_t *FUNC_4(svn_ra_session_t *VAR_1,
                            const svn_ra_reporter2_t **VAR_2,
                            void **VAR_3,
                            svn_revnum_t VAR_4,
                            const char *VAR_5,
                            svn_boolean_t VAR_6,
                            svn_boolean_t VAR_7,
                            const char *VAR_8,
                            const svn_delta_editor_t *VAR_9,
                            void *VAR_10,
                            apr_pool_t *VAR_11)
{
  FUNC_0(FUNC_1(VAR_5)
                 || FUNC_2(VAR_5));
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
                         VAR_5, VAR_6, VAR_7, VAR_0,
                         VAR_8, VAR_9, VAR_10, VAR_11);
}
