
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int far_jump_used; int arg_pointer_live; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_5 (void)
{
  rtx VAR_9;
  if (VAR_6->machine->far_jump_used)
    return 1;




  if (!(VAR_3 || VAR_8))
    {
      if (VAR_7 [VAR_2])
 VAR_6->machine->arg_pointer_live = 1;
      else if (!VAR_6->machine->arg_pointer_live)
 return 0;
    }



  for (VAR_9 = FUNC_4 (); VAR_9; VAR_9 = FUNC_1 (VAR_9))
    {
      if (FUNC_0 (VAR_9) == VAR_5

   && FUNC_0 (FUNC_2 (VAR_9)) != VAR_1
   && FUNC_0 (FUNC_2 (VAR_9)) != VAR_0
   && FUNC_3 (VAR_9) == VAR_4
   )
 {


   VAR_6->machine->far_jump_used = 1;
   return 1;
 }
    }

  return 0;
}
