
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

void
FUNC_3(const char **VAR_0,
                      int *VAR_1,
                      const char *VAR_2,
                      apr_pool_t *VAR_3)
{
  char *VAR_4 = FUNC_2(VAR_2, '.');

  if (VAR_4)
    {
      *VAR_0 = FUNC_0(VAR_3, VAR_2, VAR_4 - VAR_2);
      *VAR_1 = FUNC_1(VAR_4 + 1);
    }
  else
    {
      *VAR_0 = ((void*)0);
      *VAR_1 = FUNC_1(VAR_2 + 1);
    }
}
