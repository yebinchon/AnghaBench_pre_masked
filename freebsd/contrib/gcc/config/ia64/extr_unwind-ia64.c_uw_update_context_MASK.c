
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _Unwind_Context {unsigned long* pfs_loc; unsigned long bsp; scalar_t__ psp; scalar_t__ sp; } ;
struct TYPE_8__ {TYPE_1__* reg; } ;
struct TYPE_9__ {scalar_t__ when_target; int no_reg_stack_frame; TYPE_2__ curr; } ;
typedef TYPE_3__ _Unwind_FrameState ;
struct TYPE_7__ {scalar_t__ when; scalar_t__ where; scalar_t__ val; } ;


 int FUNC_0 (struct _Unwind_Context*,TYPE_3__*) ;
 long VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (unsigned long*,unsigned long) ;
 int FUNC_2 (struct _Unwind_Context*,TYPE_3__*,long) ;

__attribute__((used)) static void
FUNC_3 (struct _Unwind_Context *VAR_6, _Unwind_FrameState *VAR_7)
{
  long VAR_8;





  VAR_6->sp = VAR_6->psp;


  if (VAR_7->when_target > VAR_7->curr.reg[VAR_4].when)
    {
      if (VAR_7->curr.reg[VAR_4].where == VAR_5)
 VAR_6->psp = VAR_6->psp + VAR_7->curr.reg[VAR_4].val;
      else
 FUNC_2 (VAR_6, VAR_7, VAR_4);
    }


  {
    int VAR_9;
    if (VAR_7->when_target < VAR_7->curr.reg[VAR_2].when)
      VAR_9 = VAR_3;
    else if (VAR_7->when_target < VAR_7->curr.reg[VAR_3].when)
      VAR_9 = VAR_2;
    else if (VAR_7->curr.reg[VAR_3].when
      > VAR_7->curr.reg[VAR_2].when)
      VAR_9 = VAR_3;
    else
      VAR_9 = VAR_2;
    FUNC_2 (VAR_6, VAR_7, VAR_9);
  }


  for (VAR_8 = VAR_1; VAR_8 < VAR_0; ++VAR_8)
    FUNC_2 (VAR_6, VAR_7, VAR_8);






  if (!(VAR_7 -> no_reg_stack_frame))
    {
      unsigned long VAR_10 = *VAR_6->pfs_loc;
      unsigned long VAR_11 = (VAR_10 >> 7) & 0x7f;
      VAR_6->bsp = (unsigned long)
 FUNC_1 ((unsigned long *) VAR_6->bsp, -VAR_11);
    }
}
