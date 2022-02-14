
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_repos__config_pool_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int config_access_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int **,int *,int *,int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int **,char const*,int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int **,int **,int *,char const*,int ,int *) ;

svn_error_t *
FUNC_12(svn_config_t **VAR_2,
                           svn_repos__config_pool_t *VAR_3,
                           const char *VAR_4,
                           svn_boolean_t VAR_5,
                           svn_repos_t *VAR_6,
                           apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8 = VAR_1;
  apr_pool_t *VAR_9 = FUNC_7(VAR_7);
  config_access_t *VAR_10 = FUNC_9(VAR_6,
                                                            VAR_9);
  svn_stream_t *VAR_11;
  svn_checksum_t *VAR_12;

  *VAR_2 = ((void*)0);
  VAR_8 = FUNC_11(&VAR_11, &VAR_12, VAR_10, VAR_4, VAR_5,
                              VAR_9);
  if (!VAR_8)
    VAR_8 = FUNC_4(FUNC_0(VAR_2, VAR_3, VAR_11,
                                            VAR_12, VAR_7, VAR_9),
                                "Error while parsing config file: '%s':",
                                VAR_4);




  if (!*VAR_2 && !FUNC_6(VAR_4))
    {
      FUNC_3(VAR_8);
      VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_0, VAR_0, VAR_7);
    }

  FUNC_10(VAR_10);
  FUNC_8(VAR_9);


  if (*VAR_2)
    *VAR_2 = FUNC_1(*VAR_2, VAR_7);

  return FUNC_5(VAR_8);
}
