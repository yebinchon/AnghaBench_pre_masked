
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int how_set; char* how_data; } ;



int
FUNC_0(struct run *VAR_0, char * *VAR_1)
{
  if (VAR_0->how_set != 1)
    return (-1);
  *VAR_1 = VAR_0->how_data;
  return (0);
}
