
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

char *
FUNC_1(char **VAR_0, size_t *VAR_1, int *VAR_2)
{
 char *VAR_3, *VAR_4 = *VAR_0;
 size_t VAR_5 = *VAR_1;


 while (VAR_5 && FUNC_0(*VAR_4)) {
  VAR_5--;
  VAR_4++;
 }
 VAR_3 = VAR_4;
 *VAR_2 = 0;

 for (; VAR_5 > 0 && *VAR_4 != ':'; VAR_5--, VAR_4++)
  (*VAR_2)++;
 if (VAR_5) {
  *VAR_0 = VAR_4 + 1;
  *VAR_1 = VAR_5 - 1;
 } else {
  *VAR_1 = 0;
 }
 while (*VAR_2 && FUNC_0(VAR_3[*VAR_2 - 1]))
  (*VAR_2)--;
 return (VAR_3);
}
