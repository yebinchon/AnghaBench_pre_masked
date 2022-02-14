
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* free_buffs; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ _cpp_buff ;



void
FUNC_0 (cpp_reader *VAR_0, _cpp_buff *VAR_1)
{
  _cpp_buff *VAR_2 = VAR_1;

  while (VAR_2->next)
    VAR_2 = VAR_2->next;
  VAR_2->next = VAR_0->free_buffs;
  VAR_0->free_buffs = VAR_1;
}
