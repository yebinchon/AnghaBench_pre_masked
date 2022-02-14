
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ix86_frame {int nregs; int save_regs_using_mov; int hard_frame_pointer_offset; int va_arg_size; int padding1; int frame_pointer_offset; int outgoing_arguments_size; int padding2; int stack_pointer_offset; int to_allocate; int red_zone_size; } ;
struct TYPE_4__ {unsigned int stack_alignment_needed; unsigned int preferred_stack_boundary; scalar_t__ function_frequency; TYPE_1__* machine; } ;
struct TYPE_3__ {int use_fast_prologue_epilogue_nregs; int use_fast_prologue_epilogue; } ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_21 ;
 int FUNC_4 () ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_5 (struct ix86_frame *VAR_25)
{
  HOST_WIDE_INT VAR_26;
  unsigned int VAR_27;
  HOST_WIDE_INT VAR_28;
  unsigned int VAR_29;
  HOST_WIDE_INT VAR_30 = FUNC_3 ();

  VAR_25->nregs = FUNC_4 ();
  VAR_26 = VAR_30;

  VAR_27 = VAR_14->stack_alignment_needed / VAR_1;
  VAR_29 = VAR_14->preferred_stack_boundary / VAR_1;





  if (!VAR_23
      && VAR_14->machine->use_fast_prologue_epilogue_nregs != VAR_25->nregs)
    {
      int VAR_31 = VAR_25->nregs;

      VAR_14->machine->use_fast_prologue_epilogue_nregs = VAR_31;
      if (VAR_31)
 VAR_31 = (VAR_31 - 1) * VAR_2;
      if (VAR_14->function_frequency < VAR_4
   || (VAR_19
       && VAR_14->function_frequency < VAR_3))
        VAR_14->machine->use_fast_prologue_epilogue = 0;
      else
        VAR_14->machine->use_fast_prologue_epilogue
    = !FUNC_0 (VAR_31);
    }
  if (VAR_10
      && VAR_14->machine->use_fast_prologue_epilogue)
    VAR_25->save_regs_using_mov = 1;
  else
    VAR_25->save_regs_using_mov = 0;



  VAR_28 = VAR_20 ? VAR_12 * 2 : VAR_12;

  VAR_25->hard_frame_pointer_offset = VAR_28;





  FUNC_2 (!VAR_30 || VAR_27);
  FUNC_2 (VAR_29 >= VAR_8 / VAR_1);
  FUNC_2 (VAR_29 <= VAR_5 / VAR_1);
  FUNC_2 (VAR_27
       <= VAR_5 / VAR_1);

  if (VAR_27 < VAR_8 / VAR_1)
    VAR_27 = VAR_8 / VAR_1;


  VAR_28 += VAR_25->nregs * VAR_12;


  if (VAR_22)
    {
      VAR_28 += VAR_13;
      VAR_25->va_arg_size = VAR_13;
    }
  else
    VAR_25->va_arg_size = 0;


  VAR_25->padding1 = ((VAR_28 + VAR_27 - 1)
       & -VAR_27) - VAR_28;

  VAR_28 += VAR_25->padding1;


  VAR_25->frame_pointer_offset = VAR_28;

  VAR_28 += VAR_30;






  if (VAR_0
      && (!VAR_16 || VAR_15
   || VAR_21))
    {
      VAR_28 += VAR_17;
      VAR_25->outgoing_arguments_size = VAR_17;
    }
  else
    VAR_25->outgoing_arguments_size = 0;



  if (!VAR_16 || VAR_15
      || VAR_21)
    VAR_25->padding2 = ((VAR_28 + VAR_29 - 1)
         & -VAR_29) - VAR_28;
  else
    VAR_25->padding2 = 0;

  VAR_28 += VAR_25->padding2;


  VAR_25->stack_pointer_offset = VAR_28;


  VAR_25->to_allocate =
    (VAR_30 + VAR_25->padding1 + VAR_25->padding2
     + VAR_25->outgoing_arguments_size + VAR_25->va_arg_size);

  if ((!VAR_25->to_allocate && VAR_25->nregs <= 1)
      || (VAR_9 && VAR_25->to_allocate >= (HOST_WIDE_INT) 0x80000000))
    VAR_25->save_regs_using_mov = 0;

  if (VAR_11 && VAR_18
      && VAR_16
      && !VAR_21)
    {
      VAR_25->red_zone_size = VAR_25->to_allocate;
      if (VAR_25->save_regs_using_mov)
 VAR_25->red_zone_size += VAR_25->nregs * VAR_12;
      if (VAR_25->red_zone_size > VAR_7 - VAR_6)
 VAR_25->red_zone_size = VAR_7 - VAR_6;
    }
  else
    VAR_25->red_zone_size = 0;
  VAR_25->to_allocate -= VAR_25->red_zone_size;
  VAR_25->stack_pointer_offset -= VAR_25->red_zone_size;
}
