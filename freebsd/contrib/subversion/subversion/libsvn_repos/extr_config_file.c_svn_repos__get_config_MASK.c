
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int config_access_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int **,int **,int *,char const*,int ,int *) ;
 int * FUNC_1 (int **,int **,int *,char const*,int ,int *) ;
 int * FUNC_2 (int **,int **,int *,char const*,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*) ;

svn_error_t *
FUNC_6(svn_stream_t **VAR_1,
                      svn_checksum_t **VAR_2,
                      config_access_t *VAR_3,
                      const char *VAR_4,
                      svn_boolean_t VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;

  if (FUNC_5(VAR_4))
    VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                           VAR_6);
  else
    VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                          VAR_6);



  if (VAR_7)
    {
      svn_error_t *VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
                                             VAR_5, VAR_6);
      if (VAR_8)
        {
          FUNC_3(VAR_8);
        }
      else
        {
          FUNC_3(VAR_7);
          VAR_7 = VAR_0;
        }
    }

  return FUNC_4(VAR_7);
}
