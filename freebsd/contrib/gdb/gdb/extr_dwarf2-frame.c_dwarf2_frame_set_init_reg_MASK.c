
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct dwarf2_frame_ops {void (* init_reg ) (struct gdbarch*,int,struct dwarf2_frame_state_reg*) ;} ;


 struct dwarf2_frame_ops* FUNC_0 (struct gdbarch*) ;

void
FUNC_1 (struct gdbarch *VAR_0,
      void (*VAR_1) (struct gdbarch *, int,
          struct dwarf2_frame_state_reg *))
{
  struct dwarf2_frame_ops *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  VAR_2->init_reg = VAR_1;
}
