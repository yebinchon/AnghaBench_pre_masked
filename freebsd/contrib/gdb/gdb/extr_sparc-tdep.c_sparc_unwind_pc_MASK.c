
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int pc_regnum; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct frame_info*,int ) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct gdbarch *VAR_0, struct frame_info *VAR_1)
{
  struct gdbarch_tdep *VAR_2 = FUNC_1 (VAR_0);
  return FUNC_0 (VAR_1, VAR_2->pc_regnum);
}
