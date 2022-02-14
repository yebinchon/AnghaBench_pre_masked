
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct temp_slot {struct temp_slot* next; TYPE_1__* prev; } ;
struct TYPE_2__ {struct temp_slot* next; } ;



__attribute__((used)) static void
FUNC_0 (struct temp_slot *VAR_0, struct temp_slot **VAR_1)
{
  if (VAR_0->next)
    VAR_0->next->prev = VAR_0->prev;
  if (VAR_0->prev)
    VAR_0->prev->next = VAR_0->next;
  else
    *VAR_1 = VAR_0->next;

  VAR_0->prev = VAR_0->next = ((void*)0);
}
