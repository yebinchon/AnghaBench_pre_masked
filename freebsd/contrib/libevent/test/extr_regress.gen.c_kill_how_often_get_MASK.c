
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int how_often_length; int * how_often_data; int how_often_set; } ;
typedef int ev_uint32_t ;



int
FUNC_0(struct kill *VAR_0, int VAR_1,
    ev_uint32_t *VAR_2)
{
  if (!VAR_0->how_often_set || VAR_1 < 0 || VAR_1 >= VAR_0->how_often_length)
    return (-1);
  *VAR_2 = VAR_0->how_often_data[VAR_1];
  return (0);
}
