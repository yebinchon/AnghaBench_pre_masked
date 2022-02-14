
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; int jb_pc_offset; void* sc_num_regs; void* sc_reg_offset; int sigcontext_addr; void* gregset_num_regs; void* gregset_reg_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 struct gdbarch_tdep* FUNC_2 (struct gdbarch*) ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch_info VAR_6, struct gdbarch *VAR_7)
{
  struct gdbarch_tdep *VAR_8 = FUNC_2 (VAR_7);

  FUNC_1 (VAR_6, VAR_7);


  VAR_8->gregset_reg_offset = VAR_1;
  VAR_8->gregset_num_regs = FUNC_0 (VAR_1);
  VAR_8->sizeof_gregset = 24 * 8;

  FUNC_4 (VAR_7,
     VAR_2);

  VAR_8->jb_pc_offset = 7 * 8;

  FUNC_3 (VAR_7, VAR_0);
  VAR_8->sigcontext_addr = VAR_4;
  VAR_8->sc_reg_offset = VAR_3;
  VAR_8->sc_num_regs = FUNC_0 (VAR_3);


  FUNC_5
    (VAR_7, VAR_5);
}
