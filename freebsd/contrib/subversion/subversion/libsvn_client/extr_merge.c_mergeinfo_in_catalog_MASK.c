
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * svn_mergeinfo_t ;
typedef scalar_t__ svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int *,char const*) ;
 int * FUNC_3 (scalar_t__,char const*) ;
 int FUNC_4 (int **,int *,char const*,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int ,int *) ;
 int FUNC_6 (int **,int *,int *,int ,int *,int *) ;
 int FUNC_7 (char const*,int *) ;
 char* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_3,
                     const char **VAR_4,
                     const char *VAR_5,
                     svn_mergeinfo_t VAR_6,
                     svn_mergeinfo_catalog_t VAR_7,
                     apr_pool_t *VAR_8,
                     apr_pool_t *VAR_9)
{
  const char *VAR_10 = ((void*)0);

  *VAR_3 = VAR_0;
  *VAR_4 = ((void*)0);

  if (VAR_6 && VAR_7 && FUNC_1(VAR_7))
    {
      const char *VAR_11 = VAR_5;



      svn_mergeinfo_t VAR_12 = ((void*)0);

      while (1)
        {
          VAR_12 = FUNC_3(VAR_7, VAR_11);

          if (VAR_12)
            {
              *VAR_4 = FUNC_2(VAR_8, VAR_11);
              break;
            }
          else
            {
              VAR_10 = FUNC_9(FUNC_7(VAR_11,
                                                                VAR_9),
                                           VAR_10 ? VAR_10 : "",
                                           VAR_9);
              VAR_11 = FUNC_8(VAR_11, VAR_9);

              if (VAR_11[0] == '\0')
                break;
            }
        }

      if (VAR_12)
        {
          if (VAR_10)
            FUNC_0(FUNC_4(&VAR_12,
                                                           VAR_12,
                                                           VAR_10,
                                                           VAR_9,
                                                           VAR_9));
          FUNC_0(FUNC_6(&VAR_12,
                                           VAR_12, VAR_6,
                                           VAR_2,
                                           VAR_9, VAR_9));
          FUNC_0(FUNC_5(VAR_3, VAR_12,
                                        VAR_6, VAR_2, VAR_9));
        }
    }

  return VAR_1;
}
