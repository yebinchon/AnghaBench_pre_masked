
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_frame_state_reg_info {struct dwarf2_frame_state_reg_info* reg; struct dwarf2_frame_state_reg_info* prev; } ;


 int FUNC_0 (struct dwarf2_frame_state_reg_info*) ;

__attribute__((used)) static void
FUNC_1 (struct dwarf2_frame_state_reg_info *VAR_0)
{
  if (VAR_0)
    {
      FUNC_1 (VAR_0->prev);

      FUNC_0 (VAR_0->reg);
      FUNC_0 (VAR_0);
    }
}
