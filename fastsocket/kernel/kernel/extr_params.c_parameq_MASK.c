
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; FUNC_0(VAR_0[VAR_2]) == VAR_1[VAR_2]; VAR_2++)
  if (VAR_0[VAR_2] == '\0')
   return 1;
 return 0;
}
