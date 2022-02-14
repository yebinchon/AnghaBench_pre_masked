
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ soft_frame; scalar_t__ locals_base; scalar_t__ saved_regs; scalar_t__ outgoing_args; scalar_t__ saved_args; } ;
typedef TYPE_1__ arm_stack_offsets ;
typedef scalar_t__ HOST_WIDE_INT ;







 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;

HOST_WIDE_INT
FUNC_2 (unsigned int VAR_0, unsigned int VAR_1)
{
  arm_stack_offsets *VAR_2;

  VAR_2 = FUNC_0 ();

  switch (VAR_0)
    {
    case 132:
      switch (VAR_1)
 {
 case 129:
   return VAR_2->outgoing_args - VAR_2->saved_args;

 case 130:
   return VAR_2->soft_frame - VAR_2->saved_args;

 case 131:
   return VAR_2->saved_regs - VAR_2->saved_args;

 case 128:
   return VAR_2->locals_base - VAR_2->saved_args;

 default:
   FUNC_1 ();
 }
      break;

    case 130:
      switch (VAR_1)
 {
 case 129:
   return VAR_2->outgoing_args - VAR_2->soft_frame;

 case 131:
   return VAR_2->saved_regs - VAR_2->soft_frame;

 case 128:
   return VAR_2->locals_base - VAR_2->soft_frame;

 default:
   FUNC_1 ();
 }
      break;

    default:
      FUNC_1 ();
    }
}
