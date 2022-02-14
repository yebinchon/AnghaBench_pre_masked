
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_repos_t ;
typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int config_access_t ;
typedef int authz_full_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int **,int *,int *,int *,int *) ;
 int * FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (void**,scalar_t__,int *,int *,int *,int *) ;
 int FUNC_5 (void**,scalar_t__,int *,int *) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int **,int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(authz_full_t **VAR_2,
           svn_membuf_t **VAR_3,
           const char *VAR_4,
           const char *VAR_5,
           svn_boolean_t VAR_6,
           svn_repos_t *VAR_7,
           apr_pool_t *VAR_8,
           apr_pool_t *VAR_9)
{
  svn_error_t* VAR_10 = ((void*)0);
  svn_stream_t *VAR_11 = ((void*)0);
  svn_stream_t *VAR_12 = ((void*)0);
  svn_checksum_t *VAR_13 = ((void*)0);
  svn_checksum_t *VAR_14 = ((void*)0);

  config_access_t *VAR_15 =
    FUNC_8(VAR_7, VAR_9);


  FUNC_0(FUNC_10(&VAR_11, &VAR_13, VAR_15,
                                VAR_4, VAR_6, VAR_9));


  if (VAR_5)
    FUNC_0(FUNC_10(&VAR_12, &VAR_14,
                                  VAR_15, VAR_5, VAR_6,
                                  VAR_9));


  *VAR_3 = FUNC_1(VAR_13, VAR_14,
                                  VAR_8);
  if (VAR_1)
    {

      FUNC_0(FUNC_5((void **)VAR_2, VAR_1,
                                      *VAR_3, VAR_8));


      if (!*VAR_2)
        {
          apr_pool_t *VAR_16 = FUNC_6(VAR_1);



          VAR_10 = FUNC_2(VAR_2, VAR_11, VAR_12,
                                VAR_16, VAR_9);
          if (VAR_10 != VAR_0)
            {

              FUNC_7(VAR_16);



              VAR_10 = FUNC_3(VAR_10,
                                   "Error while parsing config file: '%s':",
                                   VAR_4);
            }
          else
            {
              FUNC_0(FUNC_4((void **)VAR_2, VAR_1,
                                              *VAR_3, *VAR_2,
                                              VAR_16, VAR_8));
            }
        }
    }
  else
    {


      VAR_10 = FUNC_3(FUNC_2(VAR_2, VAR_11,
                                                   VAR_12,
                                                   VAR_8, VAR_9),
                                  "Error while parsing authz file: '%s':",
                                  VAR_4);
    }

  FUNC_9(VAR_15);

  return VAR_10;
}
