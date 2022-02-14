
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch_area {int lo_addr; int hi_addr; struct watch_area* next; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct watch_area* VAR_1 ;
 int FUNC_2 (struct watch_area*) ;

int
FUNC_3 (CORE_ADDR VAR_2, int VAR_3)
{
  struct watch_area *VAR_4, **VAR_5;

  for (VAR_5 = &VAR_1; *VAR_5; VAR_5 = &(*VAR_5)->next)
    if ((*VAR_5)->lo_addr == VAR_2
 && (*VAR_5)->hi_addr == VAR_2 + VAR_3 - 1)
      break;

  if (!*VAR_5)
    {
      FUNC_0 (VAR_0,
     "Attempt to remove nonexistent watchpoint.\n");
      return -1;
    }

  VAR_4 = *VAR_5;
  *VAR_5 = VAR_4->next;
  FUNC_2 (VAR_4);

  FUNC_1 ();
  return 0;
}
