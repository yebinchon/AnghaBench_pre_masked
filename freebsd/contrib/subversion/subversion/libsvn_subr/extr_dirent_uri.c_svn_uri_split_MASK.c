
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,int *) ;
 char* FUNC_2 (char const*,int *) ;

void
FUNC_3(const char **VAR_0,
              const char **VAR_1,
              const char *VAR_2,
              apr_pool_t *VAR_3)
{
  FUNC_0(VAR_0 != VAR_1);

  if (VAR_0)
    *VAR_0 = FUNC_2(VAR_2, VAR_3);

  if (VAR_1)
    *VAR_1 = FUNC_1(VAR_2, VAR_3);
}
