
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int *,int *,int *,int *,int *) ;
 int * FUNC_2 (char const*,char const*,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_client__pathrev_t **VAR_1,
         const char *VAR_2,
         svn_revnum_t VAR_3,
         const char *VAR_4,
         svn_revnum_t VAR_5,
         const char *VAR_6,
         const char *VAR_7,
         svn_ra_session_t *VAR_8,
         svn_client_ctx_t *VAR_9,
         apr_pool_t *VAR_10,
         apr_pool_t *VAR_11)
{
  svn_client__pathrev_t *VAR_12;
  svn_client__pathrev_t *VAR_13;

  *VAR_1 = ((void*)0);

  VAR_12 = FUNC_2(VAR_6, VAR_7,
                                                 VAR_3, VAR_2,
                                                 VAR_11);
  VAR_13 = FUNC_2(VAR_6, VAR_7,
                                                 VAR_5, VAR_4,
                                                 VAR_11);
  FUNC_0(FUNC_1(VAR_1, VAR_12, VAR_13,
                                                   VAR_8, VAR_9,
                                                   VAR_10, VAR_11));

  return VAR_0;
}
