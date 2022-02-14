
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct dwarf2_frame_state_reg {int how; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0 (struct gdbarch *VAR_4, int VAR_5,
          struct dwarf2_frame_state_reg *VAR_6)
{
  if (VAR_5 == VAR_2)
    VAR_6->how = VAR_1;
  else if (VAR_5 == VAR_3)
    VAR_6->how = VAR_0;
}
