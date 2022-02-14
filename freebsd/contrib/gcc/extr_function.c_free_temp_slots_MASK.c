
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {int keep; struct temp_slot* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct temp_slot*) ;
 int VAR_0 ;
 struct temp_slot** FUNC_2 (int ) ;

void
FUNC_3 (void)
{
  struct temp_slot *VAR_1, *VAR_2;

  for (VAR_1 = *FUNC_2 (VAR_0); VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;

      if (!VAR_1->keep)
 FUNC_1 (VAR_1);
    }

  FUNC_0 ();
}
