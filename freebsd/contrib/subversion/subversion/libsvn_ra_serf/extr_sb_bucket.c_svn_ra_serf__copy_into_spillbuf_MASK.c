
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_t ;
typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char const**,int *) ;
 int * FUNC_3 (scalar_t__,int ) ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *,char const*,int ,int *) ;

svn_error_t *
FUNC_6(svn_spillbuf_t **VAR_7,
                                serf_bucket_t *VAR_8,
                                apr_pool_t *VAR_9,
                                apr_pool_t *VAR_10)
{
  *VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_9);


  while (VAR_6)
    {
      apr_status_t VAR_11;
      const char *VAR_12;
      apr_size_t VAR_13;

      VAR_11 = FUNC_2(VAR_8, VAR_4, &VAR_12, &VAR_13);

      if (VAR_11 != VAR_1 && VAR_11 != VAR_0)
        return FUNC_3(VAR_11, FUNC_1("Failed to read the request"));

      FUNC_0(FUNC_5(*VAR_7, VAR_12, VAR_13, VAR_10));

      if (VAR_11 == VAR_0)
        break;
    }

  return VAR_5;
}
