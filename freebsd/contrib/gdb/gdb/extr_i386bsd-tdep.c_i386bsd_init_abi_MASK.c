
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sigtramp_start; int sigtramp_end; int sc_num_regs; int sc_reg_offset; int sigcontext_addr; scalar_t__ jb_pc_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (int ) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct gdbarch*,int ) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;

void
FUNC_6 (struct gdbarch_info VAR_6, struct gdbarch *VAR_7)
{
  struct gdbarch_tdep *VAR_8 = FUNC_1 (VAR_7);

  FUNC_3 (VAR_7, VAR_1);


  FUNC_5 (VAR_7, VAR_5);
  FUNC_4 (VAR_7, VAR_4);


  FUNC_2 (VAR_7,
     VAR_0);

  VAR_8->jb_pc_offset = 0;

  VAR_8->sigtramp_start = 0xfdbfdfc0;
  VAR_8->sigtramp_end = 0xfdbfe000;
  VAR_8->sigcontext_addr = VAR_3;
  VAR_8->sc_reg_offset = VAR_2;
  VAR_8->sc_num_regs = FUNC_0 (VAR_2);
}
