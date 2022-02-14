
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*,scalar_t__) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,scalar_t__*) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_3,
                          svn_stream_t *VAR_4,
                          svn_stream_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  char *VAR_7 = FUNC_0(VAR_6, VAR_1);
  char *VAR_8 = FUNC_0(VAR_6, VAR_1);
  apr_size_t VAR_9 = VAR_1;
  apr_size_t VAR_10 = VAR_1;
  svn_error_t *VAR_11 = ((void*)0);

  *VAR_3 = VAR_2;
  while (VAR_9 == VAR_1
         && VAR_10 == VAR_1)
    {
      VAR_11 = FUNC_4(VAR_4, VAR_7, &VAR_9);
      if (VAR_11)
        break;
      VAR_11 = FUNC_4(VAR_5, VAR_8, &VAR_10);
      if (VAR_11)
        break;

      if ((VAR_9 != VAR_10)
          || (FUNC_1(VAR_7, VAR_8, VAR_9)))
        {
          *VAR_3 = VAR_0;
          break;
        }
    }

  return FUNC_2(VAR_11,
                                  FUNC_2(
                                    FUNC_3(VAR_4),
                                    FUNC_3(VAR_5)));
}
