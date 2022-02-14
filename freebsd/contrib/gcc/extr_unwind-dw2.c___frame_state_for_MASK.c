
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct frame_state {int* saved; int eh_ptr; int args_size; int retaddr_column; int cfa_reg; int cfa_offset; int * reg_or_offset; } ;
struct _Unwind_Context {int args_size; void* ra; int flags; } ;
struct TYPE_8__ {TYPE_2__* reg; } ;
struct TYPE_9__ {scalar_t__ cfa_how; int eh_ptr; int retaddr_column; int cfa_reg; int cfa_offset; TYPE_3__ regs; } ;
typedef TYPE_4__ _Unwind_FrameState ;
struct TYPE_6__ {int offset; int reg; } ;
struct TYPE_7__ {int how; TYPE_1__ loc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (struct _Unwind_Context*,int ,int) ;
 scalar_t__ FUNC_1 (struct _Unwind_Context*,TYPE_4__*) ;

struct frame_state *
FUNC_2 (void *VAR_4, struct frame_state *VAR_5)
{
  struct _Unwind_Context VAR_6;
  _Unwind_FrameState VAR_7;
  int VAR_8;

  FUNC_0 (&VAR_6, 0, sizeof (struct _Unwind_Context));
  VAR_6.flags = VAR_1;
  VAR_6.ra = VAR_4 + 1;

  if (FUNC_1 (&VAR_6, &VAR_7) != VAR_3)
    return 0;



  if (VAR_7.cfa_how == VAR_0)
    return 0;

  for (VAR_8 = 0; VAR_8 < VAR_2 + 1; VAR_8++)
    {
      VAR_5->saved[VAR_8] = VAR_7.regs.reg[VAR_8].how;
      switch (VAR_5->saved[VAR_8])
 {
 case 128:
   VAR_5->reg_or_offset[VAR_8] = VAR_7.regs.reg[VAR_8].loc.reg;
   break;
 case 129:
   VAR_5->reg_or_offset[VAR_8] = VAR_7.regs.reg[VAR_8].loc.offset;
   break;
 default:
   VAR_5->reg_or_offset[VAR_8] = 0;
   break;
 }
    }

  VAR_5->cfa_offset = VAR_7.cfa_offset;
  VAR_5->cfa_reg = VAR_7.cfa_reg;
  VAR_5->retaddr_column = VAR_7.retaddr_column;
  VAR_5->args_size = VAR_6.args_size;
  VAR_5->eh_ptr = VAR_7.eh_ptr;

  return VAR_5;
}
