
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int fixed_bytes_set; int * fixed_bytes_data; } ;
typedef int ev_uint8_t ;



int
FUNC_0(struct run *VAR_0, ev_uint8_t **VAR_1)
{
  if (VAR_0->fixed_bytes_set != 1)
    return (-1);
  *VAR_1 = VAR_0->fixed_bytes_data;
  return (0);
}
