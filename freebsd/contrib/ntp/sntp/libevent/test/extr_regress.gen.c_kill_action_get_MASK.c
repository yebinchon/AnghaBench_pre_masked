
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int action_set; char* action_data; } ;



int
FUNC_0(struct kill *VAR_0, char * *VAR_1)
{
  if (VAR_0->action_set != 1)
    return (-1);
  *VAR_1 = VAR_0->action_data;
  return (0);
}
