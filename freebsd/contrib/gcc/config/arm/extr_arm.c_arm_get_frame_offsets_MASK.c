
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arm_stack_offsets {int saved_args; int frame; int saved_regs; int soft_frame; int outgoing_args; int locals_base; } ;
typedef struct arm_stack_offsets arm_stack_offsets ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {struct arm_stack_offsets stack_offsets; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 unsigned long FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int * VAR_11 ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 () ;

__attribute__((used)) static arm_stack_offsets *
FUNC_10 (void)
{
  struct arm_stack_offsets *VAR_18;
  unsigned long VAR_19;
  int VAR_20;
  int VAR_21;
  HOST_WIDE_INT VAR_22;

  VAR_18 = &VAR_12->machine->stack_offsets;
  if (VAR_17)
    return VAR_18;



  VAR_22 = FUNC_1 (FUNC_7 ());

  VAR_20 = FUNC_8 ();


  VAR_18->saved_args = VAR_14;

  VAR_18->frame = VAR_18->saved_args + (VAR_15 ? 4 : 0);

  if (VAR_6)
    {
      unsigned int VAR_23;

      VAR_21 = FUNC_5 (FUNC_2 ()) * 4;





      if (VAR_9)
 {

   for (VAR_23 = VAR_3;
        VAR_23 <= VAR_5;
        VAR_23++)
     if (VAR_16 [VAR_23] && ! VAR_11 [VAR_23])
       VAR_21 += 8;
 }

      VAR_19 = FUNC_3 ();
      if (! FUNC_0 (VAR_19))
 {

   for (VAR_23 = VAR_2; VAR_23 <= VAR_4; VAR_23++)
   if (VAR_16[VAR_23] && ! VAR_11[VAR_23])
     VAR_21 += 12;


   if (VAR_8 && VAR_10)
     VAR_21 += FUNC_4 ();
 }
    }
  else
    {
      VAR_21 = FUNC_5 (FUNC_9 ()) * 4;
      if (VAR_7)
 VAR_21 += 16;
    }


  VAR_18->saved_regs = VAR_18->saved_args + VAR_21;
  VAR_18->soft_frame = VAR_18->saved_regs + VAR_1;


  if (VAR_20 && VAR_22 == 0)
    {
      VAR_18->outgoing_args = VAR_18->soft_frame;
      VAR_18->locals_base = VAR_18->soft_frame;
      return VAR_18;
    }


  if (VAR_0
      && (VAR_18->soft_frame & 7))
    VAR_18->soft_frame += 4;

  VAR_18->locals_base = VAR_18->soft_frame + VAR_22;
  VAR_18->outgoing_args = (VAR_18->locals_base
       + VAR_13);

  if (VAR_0)
    {

      if (VAR_18->outgoing_args & 7)
 VAR_18->outgoing_args += 4;
      FUNC_6 (!(VAR_18->outgoing_args & 7));
    }

  return VAR_18;
}
