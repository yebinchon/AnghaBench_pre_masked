
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_top; void** st_data; } ;
typedef TYPE_1__ stk_t ;



void *
FUNC_0(stk_t *VAR_0)
{
 if (VAR_0->st_top == -1)
  return (((void*)0));

 return (VAR_0->st_data[VAR_0->st_top]);
}
