
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int action_set; int weapon_set; } ;



int
FUNC_0(struct kill *VAR_0)
{
  if (!VAR_0->weapon_set)
    return (-1);
  if (!VAR_0->action_set)
    return (-1);
  return (0);
}
