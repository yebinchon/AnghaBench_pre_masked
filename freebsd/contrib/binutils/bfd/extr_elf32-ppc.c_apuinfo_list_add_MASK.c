
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long value; struct TYPE_4__* next; } ;
typedef TYPE_1__ apuinfo_list ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (unsigned long VAR_1)
{
  apuinfo_list *VAR_2 = VAR_0;

  while (VAR_2 != ((void*)0))
    {
      if (VAR_2->value == VAR_1)
 return;
      VAR_2 = VAR_2->next;
    }

  VAR_2 = FUNC_0 (sizeof (* VAR_2));
  if (VAR_2 == ((void*)0))
    return;

  VAR_2->value = VAR_1;
  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;
}
