
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,char const) ;
 int * FUNC_3 (int ,int *,int ) ;

svn_error_t *
FUNC_4(char *VAR_2,
                             apr_ssize_t VAR_3,
                             const char *VAR_4,
                             apr_ssize_t VAR_5,
                             apr_pool_t *VAR_6)
{
  {
    apr_ssize_t VAR_7 = (VAR_3 + 3) / 4 * 5;

    if (VAR_5 != VAR_7)
      return FUNC_3(VAR_0, ((void*)0),
                              FUNC_1("Unexpected base85 line length"));
  }

  while (VAR_5)
    {
      unsigned VAR_8 = 0;
      apr_ssize_t VAR_9, VAR_10;

      for (VAR_9 = 0; VAR_9 < 5; VAR_9++)
        {
          int VAR_11;

          FUNC_0(FUNC_2(&VAR_11, VAR_4[VAR_9]));
          VAR_8 *= 85;
          VAR_8 += VAR_11;
        }

      for (VAR_9 = 0, VAR_10=24; VAR_9 < 4; VAR_9++, VAR_10-=8)
        {
          if (VAR_9 < VAR_3)
            VAR_2[VAR_9] = (VAR_8 >> VAR_10) & 0xFF;
        }

      VAR_4 += 5;
      VAR_5 -= 5;
      VAR_2 += 4;
      VAR_3 -= 4;
    }

  return VAR_1;
}
