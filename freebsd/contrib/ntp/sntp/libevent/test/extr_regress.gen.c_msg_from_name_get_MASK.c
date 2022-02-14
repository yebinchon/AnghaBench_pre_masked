
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int from_name_set; char* from_name_data; } ;



int
FUNC_0(struct msg *VAR_0, char * *VAR_1)
{
  if (VAR_0->from_name_set != 1)
    return (-1);
  *VAR_1 = VAR_0->from_name_data;
  return (0);
}
