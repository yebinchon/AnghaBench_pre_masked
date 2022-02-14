
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_ra_serf__handler_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int *,char const*,int ,char*,int const*,int ,int *,int *) ;

svn_error_t *
FUNC_4(apr_hash_t **VAR_2,
                              svn_ra_serf__session_t *VAR_3,
                              const char *VAR_4,
                              svn_revnum_t VAR_5,
                              const svn_ra_serf__dav_props_t *VAR_6,
                              apr_pool_t *VAR_7,
                              apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9;
  svn_ra_serf__handler_t *VAR_10;

  VAR_9 = FUNC_1(VAR_7);

  FUNC_0(FUNC_3(&VAR_10, VAR_3,
                                               VAR_4, VAR_5, "0", VAR_6,
                                               VAR_1,
                                               VAR_9, VAR_8));

  FUNC_0(FUNC_2(VAR_10, VAR_8));

  *VAR_2 = VAR_9;
  return VAR_0;
}
