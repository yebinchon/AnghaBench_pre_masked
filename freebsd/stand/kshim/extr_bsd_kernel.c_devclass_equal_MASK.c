
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 char VAR_2, VAR_3;

 if (VAR_0 == VAR_1)
  return (1);

 while (1) {
  VAR_2 = *VAR_0;
  VAR_3 = *VAR_1;
  if (VAR_2 != VAR_3)
   return (0);
  if (VAR_2 == 0)
   break;
  VAR_0++;
  VAR_1++;
 }
 return (1);
}
