
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0(char *VAR_0)
{
 uint8_t VAR_1 = 0;
 char *VAR_2;
 char *VAR_3;


 VAR_2 = VAR_3 = VAR_0;
 while (*VAR_3 != '\0') {
  *VAR_2 = *VAR_3;
  if (*VAR_3 == '\\')
   VAR_1++;
  else if (*VAR_3 != 'n')
   VAR_1 = 0;
  else if (VAR_1 > 0) {
   *(--VAR_2) = (VAR_1 & 1) == 1 ? '\n' : 'n';
   VAR_1 = 0;
  }
  VAR_2++;
  VAR_3++;
 }
 *VAR_2 = *VAR_3;
}
