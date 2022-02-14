
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; int sizeof_fpregset; void* sc_num_regs; void* sc_reg_offset; int sigtramp_end; int sigtramp_start; int struct_return; void* gregset_num_regs; void* gregset_reg_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 void* FUNC_0 (void*) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (struct gdbarch_info VAR_5, struct gdbarch *VAR_6)
{
  struct gdbarch_tdep *VAR_7 = FUNC_1 (VAR_6);


  FUNC_2 (VAR_5, VAR_6);



  VAR_7->gregset_reg_offset = VAR_0;
  VAR_7->gregset_num_regs = FUNC_0 (VAR_0);
  VAR_7->sizeof_gregset = 18 * 4;
  VAR_7->sizeof_fpregset = 176;


  VAR_7->struct_return = VAR_4;


  VAR_7->sigtramp_start = VAR_3;
  VAR_7->sigtramp_end = VAR_2;


  VAR_7->sc_reg_offset = VAR_1;
  VAR_7->sc_num_regs = FUNC_0 (VAR_1);
}
