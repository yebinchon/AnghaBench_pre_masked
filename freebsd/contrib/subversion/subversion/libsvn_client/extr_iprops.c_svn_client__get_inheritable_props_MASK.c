
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * FUNC_2 (int **,char const*,int ,int ,int *,int *,int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const**,int *) ;
 int FUNC_6 (int *,char const*,int *) ;

svn_error_t *
FUNC_7(apr_hash_t **VAR_1,
                                  const char *VAR_2,
                                  svn_revnum_t VAR_3,
                                  svn_depth_t VAR_4,
                                  svn_ra_session_t *VAR_5,
                                  svn_client_ctx_t *VAR_6,
                                  apr_pool_t *VAR_7,
                                  apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_error_t *VAR_10;

  *VAR_1 = ((void*)0);

  if (!FUNC_1(VAR_3))
    return VAR_0;

  if (VAR_5)
    FUNC_0(FUNC_5(VAR_5, &VAR_9, VAR_8));
  VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                              VAR_5, VAR_6, VAR_7, VAR_8);

  if (VAR_5)
    {
      VAR_10 = FUNC_3(
                VAR_10,
                FUNC_6(VAR_5, VAR_9, VAR_8));
    }
  return FUNC_4(VAR_10);
}
