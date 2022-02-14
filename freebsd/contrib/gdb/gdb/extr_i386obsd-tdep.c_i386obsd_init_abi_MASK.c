
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; void* sc_num_regs; void* sc_reg_offset; int sigtramp_end; int sigtramp_start; int struct_return; void* gregset_num_regs; void* gregset_reg_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 void* FUNC_0 (void*) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch_info VAR_8, struct gdbarch *VAR_9)
{
  struct gdbarch_tdep *VAR_10 = FUNC_1 (VAR_9);


  FUNC_2 (VAR_8, VAR_9);


  VAR_10->gregset_reg_offset = VAR_1;
  VAR_10->gregset_num_regs = FUNC_0 (VAR_1);
  VAR_10->sizeof_gregset = 16 * 4;


  VAR_10->struct_return = VAR_7;


  VAR_10->sigtramp_start = VAR_6;
  VAR_10->sigtramp_end = VAR_4;
  FUNC_3 (VAR_9, VAR_0);
  FUNC_5 (VAR_9, VAR_5);
  FUNC_4 (VAR_9, VAR_3);



  VAR_10->sc_reg_offset = VAR_2;
  VAR_10->sc_num_regs = FUNC_0 (VAR_2);
}
