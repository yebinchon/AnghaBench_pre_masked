
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int len; char* val; } ;



int FUNC_0(struct data VAR_0)
{
 int VAR_1;
 int VAR_2 = VAR_0.len;

 if (VAR_2 == 0)
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_2-1; VAR_1++)
  if (VAR_0.val[VAR_1] == '\0')
   return 0;

 if (VAR_0.val[VAR_2-1] != '\0')
  return 0;

 return 1;
}
