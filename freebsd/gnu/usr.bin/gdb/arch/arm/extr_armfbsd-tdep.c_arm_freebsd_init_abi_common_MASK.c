
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int lowest_pc; int jb_elt_size; int jb_pc; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;

__attribute__((used)) static void
FUNC_1 (struct gdbarch_info VAR_2,
       struct gdbarch *VAR_3)
{
  struct gdbarch_tdep *VAR_4 = FUNC_0 (VAR_3);

  VAR_4->lowest_pc = 0x8000;

  VAR_4->jb_pc = VAR_1;
  VAR_4->jb_elt_size = VAR_0;
}
