
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sizeof_gregset; void* sc_num_regs; void* sc_reg_offset; int struct_return; void* gregset_num_regs; void* gregset_reg_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 void* FUNC_0 (void*) ;
 struct gdbarch_tdep* FUNC_1 (struct gdbarch*) ;
 int FUNC_2 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int *) ;
 int FUNC_5 (struct gdbarch*,int *) ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch_info VAR_4, struct gdbarch *VAR_5)
{
  struct gdbarch_tdep *VAR_6 = FUNC_1 (VAR_5);


  FUNC_2 (VAR_4, VAR_5);


  VAR_6->gregset_reg_offset = VAR_1;
  VAR_6->gregset_num_regs = FUNC_0 (VAR_1);
  VAR_6->sizeof_gregset = 16 * 4;


  FUNC_3 (VAR_5, VAR_0);



  FUNC_5 (VAR_5, ((void*)0));
  FUNC_4 (VAR_5, ((void*)0));


  VAR_6->struct_return = VAR_3;



  VAR_6->sc_reg_offset = VAR_2;
  VAR_6->sc_num_regs = FUNC_0 (VAR_2);
}
