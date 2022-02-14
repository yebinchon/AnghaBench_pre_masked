
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {int * async_handler; TYPE_1__* ops; } ;
struct TYPE_2__ {int * async; } ;



int
FUNC_0 (struct serial *VAR_0)
{
  return (VAR_0->ops->async != ((void*)0)) && (VAR_0->async_handler != ((void*)0));
}
