
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ queue_position ;
struct TYPE_4__ {struct TYPE_4__* next_event; } ;
typedef TYPE_1__ gdb_event ;
struct TYPE_5__ {TYPE_1__* first_event; TYPE_1__* last_event; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_0 (gdb_event * VAR_3, queue_position VAR_4)
{
  if (VAR_4 == VAR_1)
    {


      VAR_3->next_event = ((void*)0);
      if (VAR_2.first_event == ((void*)0))
 VAR_2.first_event = VAR_3;
      else
 VAR_2.last_event->next_event = VAR_3;
      VAR_2.last_event = VAR_3;
    }
  else if (VAR_4 == VAR_0)
    {


      VAR_3->next_event = VAR_2.first_event;
      if (VAR_2.first_event == ((void*)0))
 VAR_2.last_event = VAR_3;
      VAR_2.first_event = VAR_3;
    }
}
