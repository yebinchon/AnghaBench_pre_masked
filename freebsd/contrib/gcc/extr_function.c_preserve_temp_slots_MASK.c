
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {scalar_t__ level; int keep; struct temp_slot* next; scalar_t__ addr_taken; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 struct temp_slot* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct temp_slot*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct temp_slot** FUNC_7 (scalar_t__) ;

void
FUNC_8 (rtx VAR_1)
{
  struct temp_slot *VAR_2 = 0, *VAR_3;



  if (VAR_1 == 0)
    {
      for (VAR_2 = *FUNC_7 (VAR_0); VAR_2; VAR_2 = VAR_3)
 {
   VAR_3 = VAR_2->next;

   if (VAR_2->addr_taken)
     FUNC_6 (VAR_2, VAR_0 - 1);
 }

      return;
    }





  if (FUNC_2 (VAR_1) && FUNC_3 (VAR_1))
    VAR_2 = FUNC_5 (VAR_1);




  if (VAR_2 == 0 && (!FUNC_1 (VAR_1) || FUNC_0 (FUNC_4 (VAR_1, 0))))
    {
      for (VAR_2 = *FUNC_7 (VAR_0); VAR_2; VAR_2 = VAR_3)
 {
   VAR_3 = VAR_2->next;

   if (VAR_2->addr_taken)
     FUNC_6 (VAR_2, VAR_0 - 1);
 }

      return;
    }


  if (VAR_2 == 0)
    VAR_2 = FUNC_5 (FUNC_4 (VAR_1, 0));

  if (VAR_2 != 0)
    {


      struct temp_slot *VAR_4;

      if (VAR_2->level == VAR_0)
 {
   for (VAR_4 = *FUNC_7 (VAR_0); VAR_4; VAR_4 = VAR_3)
     {
       VAR_3 = VAR_4->next;

       if (VAR_2 != VAR_4 && VAR_4->addr_taken)
  FUNC_6 (VAR_4, VAR_0 - 1);
     }

   FUNC_6 (VAR_2, VAR_0 - 1);
   VAR_2->addr_taken = 0;
 }
      return;
    }


  for (VAR_2 = *FUNC_7 (VAR_0); VAR_2; VAR_2 = VAR_3)
    {
      VAR_3 = VAR_2->next;

      if (!VAR_2->keep)
 FUNC_6 (VAR_2, VAR_0 - 1);
    }
}
