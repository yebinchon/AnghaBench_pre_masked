
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int const**,void**,int ,char const*,int ,char const*,int ,int ,int const*,void*,int *,int *) ;

svn_error_t *
FUNC_2(svn_ra_session_t *VAR_2,
                  const svn_ra_reporter3_t **VAR_3,
                  void **VAR_4,
                  svn_revnum_t VAR_5,
                  const char *VAR_6,
                  svn_depth_t VAR_7,
                  const char *VAR_8,
                  const svn_delta_editor_t *VAR_9,
                  void *VAR_10,
                  apr_pool_t *VAR_11)
{
  return FUNC_0(
            FUNC_1(VAR_2,
                              VAR_3, VAR_4,
                              VAR_5, VAR_6,
                              VAR_7,
                              VAR_8,
                              VAR_0 ,
                              VAR_1 ,
                              VAR_9, VAR_10,
                              VAR_11, VAR_11));
}
