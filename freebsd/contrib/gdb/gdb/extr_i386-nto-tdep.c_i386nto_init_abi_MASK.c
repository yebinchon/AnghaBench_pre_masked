
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int sc_pc_offset; int sc_sp_offset; int jb_pc_offset; int sigcontext_addr; } ;
struct gdbarch_info {int dummy; } ;
struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct gdbarch_info,struct gdbarch*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct gdbarch*,int ) ;
 int FUNC_4 (struct gdbarch*,int ) ;
 int FUNC_5 (struct gdbarch*,int ) ;
 int FUNC_6 (struct gdbarch*,int ) ;
 int FUNC_7 (struct gdbarch*,int ) ;

__attribute__((used)) static void
FUNC_8 (struct gdbarch_info VAR_9, struct gdbarch *VAR_10)
{
  struct gdbarch_tdep *VAR_11 = FUNC_0 (VAR_10);


  FUNC_1 (VAR_9, VAR_10);



  FUNC_3 (VAR_10, 0);


  FUNC_4 (VAR_10, VAR_6);
  FUNC_6 (VAR_10, VAR_2);

  FUNC_5 (VAR_10, VAR_3);
  VAR_11->sigcontext_addr = VAR_4;
  VAR_11->sc_pc_offset = 56;
  VAR_11->sc_sp_offset = 68;


  VAR_11->jb_pc_offset = 20;

  FUNC_7 (VAR_10,
      VAR_5);


  VAR_1 = VAR_8;


  VAR_0 = VAR_7;

  FUNC_2 ();
}
