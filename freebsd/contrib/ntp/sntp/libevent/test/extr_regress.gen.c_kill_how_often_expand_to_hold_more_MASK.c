
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int how_often_num_allocated; int * how_often_data; } ;
typedef int ev_uint32_t ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(struct kill *VAR_0)
{
  int VAR_1 = VAR_0->how_often_num_allocated;
  ev_uint32_t* VAR_2 = ((void*)0);
  VAR_1 = !VAR_1 ? 1 : VAR_1 << 1;
  VAR_2 = (ev_uint32_t*) FUNC_0(VAR_0->how_often_data,
      VAR_1 * sizeof(ev_uint32_t));
  if (VAR_2 == ((void*)0))
    return -1;
  VAR_0->how_often_data = VAR_2;
  VAR_0->how_often_num_allocated = VAR_1;
  return 0;}
