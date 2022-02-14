
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {scalar_t__ how_often_length; scalar_t__ how_often_num_allocated; int how_often_set; int * how_often_data; } ;
typedef int ev_uint32_t ;


 scalar_t__ FUNC_0 (struct kill*) ;

ev_uint32_t *
FUNC_1(struct kill *VAR_0, const ev_uint32_t VAR_1)
{
  if (++VAR_0->how_often_length >= VAR_0->how_often_num_allocated) {
    if (FUNC_0(VAR_0)<0)
      goto error;
  }
  VAR_0->how_often_data[VAR_0->how_often_length - 1] = VAR_1;
  VAR_0->how_often_set = 1;
  return &(VAR_0->how_often_data[VAR_0->how_often_length - 1]);
error:
  --VAR_0->how_often_length;
  return (((void*)0));
}
