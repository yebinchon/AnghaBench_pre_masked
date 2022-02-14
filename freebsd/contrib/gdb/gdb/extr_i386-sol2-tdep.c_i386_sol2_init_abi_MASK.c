
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; int sizeof_fpregset; int gregset_num_regs; int sc_num_regs; int gregset_reg_offset; int sc_reg_offset; int sigcontext_addr; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (int ) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 int FUNC_3 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch_info VAR_3, struct gdbarch *VAR_4)
{
  struct gdbarch_tdep *VAR_5 = FUNC_1 (VAR_4);


  FUNC_2 (VAR_3, VAR_4);




  VAR_5->gregset_reg_offset = VAR_0;
  VAR_5->gregset_num_regs = FUNC_0 (VAR_0);
  VAR_5->sizeof_gregset = 19 * 4;
  VAR_5->sizeof_fpregset = 380;

  VAR_5->sigcontext_addr = VAR_1;
  VAR_5->sc_reg_offset = VAR_5->gregset_reg_offset;
  VAR_5->sc_num_regs = VAR_5->gregset_num_regs;


  FUNC_3 (VAR_4, VAR_2);
}
