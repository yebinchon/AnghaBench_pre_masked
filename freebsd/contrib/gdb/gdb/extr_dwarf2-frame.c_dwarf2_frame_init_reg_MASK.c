
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct dwarf2_frame_state_reg {int dummy; } ;
struct dwarf2_frame_ops {int (* init_reg ) (struct gdbarch*,int,struct dwarf2_frame_state_reg*) ;} ;


 struct dwarf2_frame_ops* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct gdbarch*,int,struct dwarf2_frame_state_reg*) ;

__attribute__((used)) static void
FUNC_2 (struct gdbarch *VAR_0, int VAR_1,
         struct dwarf2_frame_state_reg *VAR_2)
{
  struct dwarf2_frame_ops *VAR_3;

  VAR_3 = FUNC_0 (VAR_0);
  VAR_3->init_reg (VAR_0, VAR_1, VAR_2);
}
