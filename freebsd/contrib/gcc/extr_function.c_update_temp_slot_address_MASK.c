
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {scalar_t__ address; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 struct temp_slot* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

void
FUNC_6 (rtx VAR_4, rtx VAR_5)
{
  struct temp_slot *VAR_6;

  if (FUNC_5 (VAR_4, VAR_5))
    return;

  VAR_6 = FUNC_3 (VAR_4);






  if (VAR_6 == 0)
    {
      if (FUNC_0 (VAR_4) != VAR_2)
 return;

      if (FUNC_1 (VAR_5))
 {
   FUNC_6 (FUNC_2 (VAR_4, 0), VAR_5);
   FUNC_6 (FUNC_2 (VAR_4, 1), VAR_5);
   return;
 }
      else if (FUNC_0 (VAR_5) != VAR_2)
 return;

      if (FUNC_5 (FUNC_2 (VAR_4, 0), FUNC_2 (VAR_5, 0)))
 FUNC_6 (FUNC_2 (VAR_4, 1), FUNC_2 (VAR_5, 1));
      else if (FUNC_5 (FUNC_2 (VAR_4, 1), FUNC_2 (VAR_5, 0)))
 FUNC_6 (FUNC_2 (VAR_4, 0), FUNC_2 (VAR_5, 1));
      else if (FUNC_5 (FUNC_2 (VAR_4, 0), FUNC_2 (VAR_5, 1)))
 FUNC_6 (FUNC_2 (VAR_4, 1), FUNC_2 (VAR_5, 0));
      else if (FUNC_5 (FUNC_2 (VAR_4, 1), FUNC_2 (VAR_5, 1)))
 FUNC_6 (FUNC_2 (VAR_4, 0), FUNC_2 (VAR_5, 0));

      return;
    }


  else if (VAR_6->address == 0)
    VAR_6->address = VAR_5;
  else
    {
      if (FUNC_0 (VAR_6->address) != VAR_0)
 VAR_6->address = FUNC_4 (VAR_3, VAR_6->address, VAR_1);

      VAR_6->address = FUNC_4 (VAR_3, VAR_5, VAR_6->address);
    }
}
