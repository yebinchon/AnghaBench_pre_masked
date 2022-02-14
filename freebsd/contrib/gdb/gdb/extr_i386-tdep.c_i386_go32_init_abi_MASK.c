
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int jb_pc_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int VAR_0 ;
 int FUNC_1 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct gdbarch_info VAR_1, struct gdbarch *VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_2);

  FUNC_1 (VAR_2, VAR_0);

  VAR_3->jb_pc_offset = 36;
}
