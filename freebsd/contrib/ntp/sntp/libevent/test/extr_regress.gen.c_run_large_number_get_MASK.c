
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int large_number_set; int large_number_data; } ;
typedef int ev_uint64_t ;



int
FUNC_0(struct run *VAR_0, ev_uint64_t *VAR_1)
{
  if (VAR_0->large_number_set != 1)
    return (-1);
  *VAR_1 = VAR_0->large_number_data;
  return (0);
}
