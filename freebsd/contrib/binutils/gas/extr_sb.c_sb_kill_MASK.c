
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t pot; TYPE_1__* item; } ;
typedef TYPE_2__ sb ;
struct TYPE_7__ {TYPE_1__** size; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 TYPE_4__ VAR_0 ;

void
FUNC_0 (sb *VAR_1)
{

  VAR_1->item->next = VAR_0.size[VAR_1->pot];
  VAR_0.size[VAR_1->pot] = VAR_1->item;
}
