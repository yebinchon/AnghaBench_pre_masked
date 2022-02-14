
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(
 register const char *VAR_0,
 register const char *VAR_1
 )
{
 register int VAR_2 = 0;

 if (!VAR_0 || !VAR_1 || (VAR_0 == VAR_1))
 {
  return 0;
 }

 while (!(VAR_2 = *VAR_0++ - *VAR_1++) && *VAR_0 && *VAR_1)
                     ;

 return VAR_2;
}
