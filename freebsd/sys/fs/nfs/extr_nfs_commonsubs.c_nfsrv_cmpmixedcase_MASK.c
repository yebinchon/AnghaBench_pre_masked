
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



__attribute__((used)) static int
FUNC_0(u_char *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3;
 u_char VAR_4;
 int VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (*VAR_0 >= 'A' && *VAR_0 <= 'Z') {
   VAR_4 = *VAR_0++ + ('a' - 'A');
  } else {
   VAR_4 = *VAR_0++;
   if (VAR_4 >= 'a' && VAR_4 <= 'z')
    VAR_5 = 1;
  }
  if (VAR_4 != *VAR_1++)
   return (1);
 }
 if (VAR_5)
  return (0);
 else
  return (1);
}
