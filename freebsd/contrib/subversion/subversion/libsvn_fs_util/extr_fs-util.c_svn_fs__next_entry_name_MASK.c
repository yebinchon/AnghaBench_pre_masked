
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

char *
FUNC_3(const char **VAR_0,
                        const char *VAR_1,
                        apr_pool_t *VAR_2)
{
  const char *VAR_3;


  VAR_3 = FUNC_2(VAR_1, '/');

  if (! VAR_3)
    {


      *VAR_0 = 0;
      return FUNC_0(VAR_2, VAR_1);
    }
  else
    {


      const char *VAR_4 = VAR_3;
      while (*VAR_4 == '/')
        VAR_4++;
      *VAR_0 = VAR_4;
      return FUNC_1(VAR_2, VAR_1, VAR_3 - VAR_1);
    }
}
