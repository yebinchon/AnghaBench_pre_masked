
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int **,int *,char const*,int ,int ,int *,int *) ;

svn_error_t *
FUNC_7(const char **VAR_3,
                            svn_ra_serf__session_t *VAR_4,
                            const char *VAR_5,
                            svn_revnum_t VAR_6,
                            const char *VAR_7,
                            apr_pool_t *VAR_8,
                            apr_pool_t *VAR_9)
{
  apr_hash_t *VAR_10;
  apr_hash_t *VAR_11;

  FUNC_0(FUNC_6(&VAR_10, VAR_4, VAR_5, VAR_6,
                                        VAR_2,
                                        VAR_9, VAR_9));
  VAR_11 = FUNC_2(VAR_10, "DAV:", 4);
  if (VAR_11 == ((void*)0))
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("The PROPFIND response did not include "
                              "the requested 'DAV:' properties"));





  *VAR_3 = FUNC_3(VAR_8, FUNC_5(VAR_11, VAR_7));

  return VAR_1;
}
