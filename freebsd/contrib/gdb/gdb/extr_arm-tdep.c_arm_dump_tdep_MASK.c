
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct gdbarch_tdep {scalar_t__ lowest_pc; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct ui_file*,char*,unsigned long) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;

__attribute__((used)) static void
FUNC_2 (struct gdbarch *VAR_0, struct ui_file *VAR_1)
{
  struct gdbarch_tdep *VAR_2 = FUNC_1 (VAR_0);

  if (VAR_2 == ((void*)0))
    return;

  FUNC_0 (VAR_1, "arm_dump_tdep: Lowest pc = 0x%lx",
        (unsigned long) VAR_2->lowest_pc);
}
