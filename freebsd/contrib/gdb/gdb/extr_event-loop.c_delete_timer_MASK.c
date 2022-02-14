
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdb_timer {int timer_id; struct gdb_timer* next; } ;
struct TYPE_4__ {scalar_t__ timeout_valid; } ;
struct TYPE_3__ {struct gdb_timer* first_timer; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct gdb_timer*) ;

void
FUNC_1 (int VAR_2)
{
  struct gdb_timer *VAR_3, *VAR_4 = ((void*)0);



  for (VAR_3 = VAR_1.first_timer; VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next)
    {
      if (VAR_3->timer_id == VAR_2)
 break;
    }

  if (VAR_3 == ((void*)0))
    return;

  if (VAR_3 == VAR_1.first_timer)
    VAR_1.first_timer = VAR_3->next;
  else
    {
      for (VAR_4 = VAR_1.first_timer;
    VAR_4->next != VAR_3;
    VAR_4 = VAR_4->next)
 ;
      VAR_4->next = VAR_3->next;
    }
  FUNC_0 (VAR_3);

  VAR_0.timeout_valid = 0;
}
