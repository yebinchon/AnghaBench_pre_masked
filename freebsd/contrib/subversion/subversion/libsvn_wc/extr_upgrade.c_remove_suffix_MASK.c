
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, const char *VAR_1, apr_pool_t *VAR_2)
{
  size_t VAR_3 = FUNC_2(VAR_0);
  size_t VAR_4 = FUNC_2(VAR_1);

  if (VAR_3 > VAR_4
      && FUNC_1(VAR_0 + VAR_3 - VAR_4, VAR_1) == 0)
    {
      return FUNC_0(VAR_2, VAR_0, VAR_3 - VAR_4);
    }

  return ((void*)0);
}
