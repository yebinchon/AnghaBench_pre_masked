
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int to_name_set; char* to_name_data; } ;



int
FUNC_0(struct msg *VAR_0, char * *VAR_1)
{
  if (VAR_0->to_name_set != 1)
    return (-1);
  *VAR_1 = VAR_0->to_name_data;
  return (0);
}
