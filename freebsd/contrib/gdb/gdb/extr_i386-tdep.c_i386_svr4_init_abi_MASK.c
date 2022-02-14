
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sc_pc_offset; int sc_sp_offset; int jb_pc_offset; int sigcontext_addr; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;

void
FUNC_5 (struct gdbarch_info VAR_4, struct gdbarch *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_0 (VAR_5);


  FUNC_1 (VAR_4, VAR_5);


  FUNC_2 (VAR_5, VAR_3);
  FUNC_4 (VAR_5, VAR_0);

  FUNC_3 (VAR_5, VAR_1);
  VAR_6->sigcontext_addr = VAR_2;
  VAR_6->sc_pc_offset = 36 + 14 * 4;
  VAR_6->sc_sp_offset = 36 + 17 * 4;

  VAR_6->jb_pc_offset = 20;
}
