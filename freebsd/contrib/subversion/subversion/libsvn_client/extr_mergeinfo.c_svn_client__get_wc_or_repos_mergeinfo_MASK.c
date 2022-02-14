
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int * svn_mergeinfo_t ;
typedef int svn_mergeinfo_inheritance_t ;
typedef scalar_t__ svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,int *,int *,int ,int ,int ,int ,int *,char const*,int *,int *,int *) ;

svn_error_t *
FUNC_5(svn_mergeinfo_t *VAR_2,
                                      svn_boolean_t *VAR_3,
                                      svn_boolean_t *VAR_4,
                                      svn_boolean_t VAR_5,
                                      svn_mergeinfo_inheritance_t VAR_6,
                                      svn_ra_session_t *VAR_7,
                                      const char *VAR_8,
                                      svn_client_ctx_t *VAR_9,
                                      apr_pool_t *VAR_10)
{
  svn_mergeinfo_catalog_t VAR_11;

  *VAR_2 = ((void*)0);

  FUNC_0(FUNC_4(&VAR_11,
                                                        VAR_3, VAR_4,
                                                        VAR_0,
                                                        VAR_5,
                                                        VAR_0, VAR_6,
                                                        VAR_7,
                                                        VAR_8, VAR_9,
                                                        VAR_10, VAR_10));
  if (VAR_11 && FUNC_1(VAR_11))
    {





      *VAR_2 =
        FUNC_3(FUNC_2(VAR_10, VAR_11));

    }

  return VAR_1;
}
