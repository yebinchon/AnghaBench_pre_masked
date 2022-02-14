
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,scalar_t__*) ;
 int * FUNC_4 (int *,char*,scalar_t__*) ;

svn_error_t *FUNC_5(svn_stream_t *VAR_1, svn_stream_t *VAR_2,
                              svn_cancel_func_t VAR_3,
                              void *VAR_4,
                              apr_pool_t *VAR_5)
{
  char *VAR_6 = FUNC_0(VAR_5, VAR_0);
  svn_error_t *VAR_7;
  svn_error_t *VAR_8;




  while (1)
    {
      apr_size_t VAR_9 = VAR_0;

      if (VAR_3)
        {
          VAR_7 = VAR_3(VAR_4);
          if (VAR_7)
             break;
        }

      VAR_7 = FUNC_3(VAR_1, VAR_6, &VAR_9);
      if (VAR_7)
         break;

      if (VAR_9 > 0)
        VAR_7 = FUNC_4(VAR_2, VAR_6, &VAR_9);

      if (VAR_7 || (VAR_9 != VAR_0))
          break;
    }

  VAR_8 = FUNC_1(FUNC_2(VAR_1),
                                  FUNC_2(VAR_2));

  return FUNC_1(VAR_7, VAR_8);
}
