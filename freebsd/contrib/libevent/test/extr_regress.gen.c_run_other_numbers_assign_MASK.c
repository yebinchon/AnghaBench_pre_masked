
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int other_numbers_length; int * other_numbers_data; int other_numbers_set; } ;
typedef int ev_uint32_t ;



int
FUNC_0(struct run *VAR_0, int VAR_1,
    const ev_uint32_t VAR_2)
{
  if (!VAR_0->other_numbers_set || VAR_1 < 0 || VAR_1 >= VAR_0->other_numbers_length)
    return (-1);

  {
    VAR_0->other_numbers_data[VAR_1] = VAR_2;
  }
  return (0);
}
