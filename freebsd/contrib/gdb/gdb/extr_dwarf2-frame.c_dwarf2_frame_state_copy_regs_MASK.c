
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_frame_state_reg_info {int num_regs; int reg; } ;
struct dwarf2_frame_state_reg {int dummy; } ;


 int FUNC_0 (struct dwarf2_frame_state_reg*,int ,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;

__attribute__((used)) static struct dwarf2_frame_state_reg *
FUNC_2 (struct dwarf2_frame_state_reg_info *VAR_0)
{
  size_t VAR_1 = VAR_0->num_regs * sizeof (struct dwarf2_frame_state_reg_info);
  struct dwarf2_frame_state_reg *VAR_2;

  VAR_2 = (struct dwarf2_frame_state_reg *) FUNC_1 (VAR_1);
  FUNC_0 (VAR_2, VAR_0->reg, VAR_1);

  return VAR_2;
}
