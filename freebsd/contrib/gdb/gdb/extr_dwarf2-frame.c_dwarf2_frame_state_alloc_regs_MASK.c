
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_frame_state_reg_info {int num_regs; struct dwarf2_frame_state_reg* reg; } ;
struct dwarf2_frame_state_reg {int dummy; } ;


 int FUNC_0 (struct dwarf2_frame_state_reg*,int ,int) ;
 scalar_t__ FUNC_1 (struct dwarf2_frame_state_reg*,int) ;

__attribute__((used)) static void
FUNC_2 (struct dwarf2_frame_state_reg_info *VAR_0,
          int VAR_1)
{
  size_t VAR_2 = sizeof (struct dwarf2_frame_state_reg);

  if (VAR_1 <= VAR_0->num_regs)
    return;

  VAR_0->reg = (struct dwarf2_frame_state_reg *)
    FUNC_1 (VAR_0->reg, VAR_1 * VAR_2);


  FUNC_0 (VAR_0->reg + VAR_0->num_regs, 0, (VAR_1 - VAR_0->num_regs) * VAR_2);
  VAR_0->num_regs = VAR_1;
}
