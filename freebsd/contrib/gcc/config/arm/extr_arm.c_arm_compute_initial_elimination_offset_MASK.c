
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int soft_frame; int saved_args; int frame; int saved_regs; int outgoing_args; } ;
typedef TYPE_2__ arm_stack_offsets ;
struct TYPE_7__ {TYPE_1__* machine; int * static_chain_decl; } ;
struct TYPE_5__ {int uses_anonymous_args; } ;
typedef int HOST_WIDE_INT ;







 TYPE_2__* FUNC_0 () ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

HOST_WIDE_INT
FUNC_2 (unsigned int VAR_2, unsigned int VAR_3)
{
  arm_stack_offsets *VAR_4;

  VAR_4 = FUNC_0 ();





  switch (VAR_2)
    {
    case 132:
      switch (VAR_3)
 {
 case 128:
   return 0;

 case 130:


   return VAR_4->soft_frame - VAR_4->saved_args;

 case 131:


   if (VAR_4->frame == VAR_4->saved_regs)
     return 0;

   return (VAR_1
    && VAR_0->static_chain_decl != ((void*)0)
    && ! VAR_0->machine->uses_anonymous_args) ? 4 : 0;

 case 129:


   return VAR_4->outgoing_args - (VAR_4->saved_args + 4);

 default:
   FUNC_1 ();
 }
      FUNC_1 ();

    case 130:
      switch (VAR_3)
 {
 case 128:
   return 0;

 case 131:





   return VAR_4->frame - VAR_4->soft_frame;

 case 129:
   return VAR_4->outgoing_args - VAR_4->soft_frame;

 default:
   FUNC_1 ();
 }
      FUNC_1 ();

    default:





      FUNC_1 ();
    }
}
