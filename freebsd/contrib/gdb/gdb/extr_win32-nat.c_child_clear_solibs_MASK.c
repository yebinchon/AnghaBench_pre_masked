
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct so_stuff {struct so_stuff* next; } ;
struct TYPE_3__ {int * objfile; struct so_stuff* next; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct so_stuff*) ;

void
FUNC_1 (void)
{
  struct so_stuff *VAR_3, *VAR_4 = VAR_2.next;

  while ((VAR_3 = VAR_4) != ((void*)0))
    {
      VAR_4 = VAR_3->next;
      FUNC_0 (VAR_3);
    }

  VAR_2.next = ((void*)0);
  VAR_2.objfile = ((void*)0);
  VAR_1 = &VAR_2;
  VAR_0 = sizeof ("DLL Name") - 1;
}
