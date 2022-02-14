
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {int addr_taken; } ;
typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct temp_slot* FUNC_3 (int ) ;

void
FUNC_4 (rtx VAR_0)
{
  struct temp_slot *VAR_1;

  if (VAR_0 == 0)
    return;



  if (!FUNC_1 (VAR_0) || FUNC_0 (FUNC_2 (VAR_0, 0)))
    return;

  VAR_1 = FUNC_3 (FUNC_2 (VAR_0, 0));
  if (VAR_1 != 0)
    VAR_1->addr_taken = 1;
}
