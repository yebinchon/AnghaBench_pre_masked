
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int some_bytes_set; int some_bytes_length; int * some_bytes_data; } ;
typedef int ev_uint8_t ;
typedef int ev_uint32_t ;



int
FUNC_0(struct run *VAR_0, ev_uint8_t * *VAR_1, ev_uint32_t *VAR_2)
{
  if (VAR_0->some_bytes_set != 1)
    return (-1);
  *VAR_1 = VAR_0->some_bytes_data;
  *VAR_2 = VAR_0->some_bytes_length;
  return (0);
}
