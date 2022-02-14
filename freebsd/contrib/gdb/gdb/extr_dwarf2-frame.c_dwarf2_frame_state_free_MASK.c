
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct dwarf2_frame_state* reg; int prev; } ;
struct TYPE_3__ {struct dwarf2_frame_state* reg; int prev; } ;
struct dwarf2_frame_state {TYPE_2__ regs; TYPE_1__ initial; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dwarf2_frame_state*) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0)
{
  struct dwarf2_frame_state *VAR_1 = VAR_0;

  FUNC_0 (VAR_1->initial.prev);
  FUNC_0 (VAR_1->regs.prev);
  FUNC_1 (VAR_1->initial.reg);
  FUNC_1 (VAR_1->regs.reg);
  FUNC_1 (VAR_1);
}
