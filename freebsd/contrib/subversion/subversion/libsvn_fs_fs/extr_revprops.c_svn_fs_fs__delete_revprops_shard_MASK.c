
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (char const*,int ,int (*) (void*),void*,int *) ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

svn_error_t *
FUNC_8(const char *VAR_2,
                                 apr_int64_t VAR_3,
                                 int VAR_4,
                                 svn_cancel_func_t VAR_5,
                                 void *VAR_6,
                                 apr_pool_t *VAR_7)
{
  if (VAR_3 == 0)
    {
      apr_pool_t *VAR_8 = FUNC_6(VAR_7);
      int VAR_9;


      for (VAR_9 = 1; VAR_9 < VAR_4; ++VAR_9)
        {
          const char *VAR_10;
          FUNC_5(VAR_8);

          VAR_10 = FUNC_2(VAR_2,
                                 FUNC_1(VAR_8, "%d", VAR_9),
                                 VAR_8);
          if (VAR_5)
            FUNC_0(VAR_5(VAR_6));

          FUNC_0(FUNC_4(VAR_10, VAR_1, VAR_8));
        }

      FUNC_7(VAR_8);
    }
  else
    FUNC_0(FUNC_3(VAR_2, VAR_1,
                               VAR_5, VAR_6, VAR_7));

  return VAR_0;
}
