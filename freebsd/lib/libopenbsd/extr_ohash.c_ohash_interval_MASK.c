
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const*) ;

uint32_t
FUNC_1(const char *VAR_0, const char **VAR_1)
{
 uint32_t VAR_2;

 if (!*VAR_1)
  *VAR_1 = VAR_0 + FUNC_0(VAR_0);
 if (VAR_0 == *VAR_1)
  VAR_2 = 0;
 else
  VAR_2 = *VAR_0++;
 while (VAR_0 != *VAR_1)
  VAR_2 = ((VAR_2 << 2) | (VAR_2 >> 30)) ^ *VAR_0++;
 return VAR_2;
}
