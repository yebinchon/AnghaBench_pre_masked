
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char **VAR_0, char **VAR_1)
{
 char *VAR_2 = *VAR_0, *VAR_3 = *VAR_1;

 if (VAR_3[1] == '\\') {
  if (VAR_3[2] == '\\' && VAR_3[3] == '&') {
   *VAR_2++ = '\\';
   *VAR_2++ = '&';
   VAR_3 += 4;
  } else if (VAR_3[2] == '&') {
   *VAR_2++ = '\\';
   VAR_3 += 2;
  } else {
   *VAR_2++ = *VAR_3++;
   *VAR_2++ = *VAR_3++;
  }
 } else if (VAR_3[1] == '&') {
  VAR_3++;
  *VAR_2++ = *VAR_3++;
 } else
  *VAR_2++ = *VAR_3++;

 *VAR_0 = VAR_2;
 *VAR_1 = VAR_3;
}
