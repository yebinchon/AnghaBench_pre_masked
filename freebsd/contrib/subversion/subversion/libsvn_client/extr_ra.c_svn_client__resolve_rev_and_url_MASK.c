
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int *,int ,char const*,int *) ;
 int FUNC_2 (char const**,int *,int *,int *,int *,char const*,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int ,int ,int *) ;
 int FUNC_4 (char const*) ;

svn_error_t *
FUNC_5(svn_client__pathrev_t **VAR_2,
                                svn_ra_session_t *VAR_3,
                                const char *VAR_4,
                                const svn_opt_revision_t *VAR_5,
                                const svn_opt_revision_t *VAR_6,
                                svn_client_ctx_t *VAR_7,
                                apr_pool_t *VAR_8)
{
  svn_opt_revision_t VAR_9 = *VAR_5;
  svn_opt_revision_t VAR_10 = *VAR_6;
  const char *VAR_11;
  svn_revnum_t VAR_12;


  FUNC_0(FUNC_3(&VAR_9, &VAR_10,
                                    FUNC_4(VAR_4),
                                    VAR_1 ,
                                    VAR_8));



  FUNC_0(FUNC_2(&VAR_11, &VAR_12, ((void*)0), ((void*)0),
                                      VAR_3, VAR_4, &VAR_9,
                                      &VAR_10, ((void*)0), VAR_7, VAR_8));

  FUNC_0(FUNC_1(VAR_2,
                                                  VAR_3, VAR_12, VAR_11, VAR_8));
  return VAR_0;
}
