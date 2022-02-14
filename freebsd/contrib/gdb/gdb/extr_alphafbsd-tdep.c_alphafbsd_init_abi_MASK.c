
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sc_pc_offset; int sc_regs_offset; int sc_fpregs_offset; int jb_pc; int jb_elt_size; int sigcontext_addr; int dynamic_sigtramp_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct gdbarch_info,struct gdbarch*) ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gdbarch_tdep* FUNC_2 (struct gdbarch*) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct gdbarch_info VAR_4,
                    struct gdbarch *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_2 (VAR_5);


  FUNC_0 (VAR_4, VAR_5);


  FUNC_1 (VAR_4, VAR_5);

  FUNC_4 (VAR_5, VAR_3);

  FUNC_3 (VAR_5, VAR_0);

  VAR_6->dynamic_sigtramp_offset = VAR_2;
  VAR_6->sigcontext_addr = VAR_1;
  VAR_6->sc_pc_offset = 288;
  VAR_6->sc_regs_offset = 24;
  VAR_6->sc_fpregs_offset = 320;

  VAR_6->jb_pc = 2;
  VAR_6->jb_elt_size = 8;
}
