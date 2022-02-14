
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int jb_pc; int jb_elt_size; int sigcontext_addr; int dynamic_sigtramp_offset; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct gdbarch_info,struct gdbarch*) ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gdbarch_tdep* FUNC_2 (struct gdbarch*) ;
 int VAR_4 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_6 (struct gdbarch_info VAR_5,
                    struct gdbarch *VAR_6)
{
  struct gdbarch_tdep *VAR_7 = FUNC_2 (VAR_6);


  FUNC_0 (VAR_5, VAR_6);


  FUNC_1 (VAR_5, VAR_6);

  FUNC_3 (VAR_6, VAR_1);



  FUNC_4 (VAR_6, VAR_0);

  FUNC_5 (VAR_6,
                                 VAR_4);

  VAR_7->dynamic_sigtramp_offset = VAR_3;
  VAR_7->sigcontext_addr = VAR_2;

  VAR_7->jb_pc = 2;
  VAR_7->jb_elt_size = 8;
}
