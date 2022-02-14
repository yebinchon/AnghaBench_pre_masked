
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {scalar_t__ other_numbers_length; scalar_t__ other_numbers_num_allocated; int other_numbers_set; int * other_numbers_data; } ;
typedef int ev_uint32_t ;


 scalar_t__ FUNC_0 (struct run*) ;

ev_uint32_t *
FUNC_1(struct run *VAR_0, const ev_uint32_t VAR_1)
{
  if (++VAR_0->other_numbers_length >= VAR_0->other_numbers_num_allocated) {
    if (FUNC_0(VAR_0)<0)
      goto error;
  }
  VAR_0->other_numbers_data[VAR_0->other_numbers_length - 1] = VAR_1;
  VAR_0->other_numbers_set = 1;
  return &(VAR_0->other_numbers_data[VAR_0->other_numbers_length - 1]);
error:
  --VAR_0->other_numbers_length;
  return (((void*)0));
}
