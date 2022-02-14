
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; void* sc_num_regs; void* sc_reg_offset; void* gregset_num_regs; void* gregset_reg_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 void* FUNC_0 (void*) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;

__attribute__((used)) static void
FUNC_3 (struct gdbarch_info VAR_2, struct gdbarch *VAR_3)
{
  struct gdbarch_tdep *VAR_4 = FUNC_1 (VAR_3);



  FUNC_2 (VAR_2, VAR_3);


  VAR_4->gregset_reg_offset = VAR_0;
  VAR_4->gregset_num_regs = FUNC_0 (VAR_0);
  VAR_4->sizeof_gregset = 19 * 4;


  VAR_4->sc_reg_offset = VAR_1;
  VAR_4->sc_num_regs = FUNC_0 (VAR_1);
}
