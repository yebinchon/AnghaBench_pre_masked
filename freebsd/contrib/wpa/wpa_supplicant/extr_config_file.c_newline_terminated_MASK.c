
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == 0)
  return 0;
 if (VAR_2 == VAR_1 - 1 && VAR_0[VAR_1 - 1] != '\r' &&
     VAR_0[VAR_2 - 1] != '\n')
  return 0;
 return 1;
}
