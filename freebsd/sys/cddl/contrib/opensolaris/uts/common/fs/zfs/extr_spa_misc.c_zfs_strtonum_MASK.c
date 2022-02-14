
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



uint64_t
FUNC_0(const char *VAR_0, char **VAR_1)
{
 uint64_t VAR_2 = 0;
 char VAR_3;
 int VAR_4;

 while ((VAR_3 = *VAR_0) != '\0') {
  if (VAR_3 >= '0' && VAR_3 <= '9')
   VAR_4 = VAR_3 - '0';
  else if (VAR_3 >= 'a' && VAR_3 <= 'f')
   VAR_4 = 10 + VAR_3 - 'a';
  else
   break;

  VAR_2 *= 16;
  VAR_2 += VAR_4;

  VAR_0++;
 }

 if (VAR_1)
  *VAR_1 = (char *)VAR_0;

 return (VAR_2);
}
