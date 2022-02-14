
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int npc_regnum; int pc_regnum; } ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__,char*) ;

void
FUNC_6 (enum target_signal VAR_1, int VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_1 (VAR_0);
  static CORE_ADDR VAR_4, VAR_5;
  static char VAR_6[4], VAR_7[4];

  if (VAR_2)
    {
      CORE_ADDR VAR_8;

      VAR_8 = FUNC_2 (VAR_3->pc_regnum);
      VAR_4 = FUNC_2 (VAR_3->npc_regnum);


      VAR_5 = FUNC_3 (VAR_8, &VAR_4);
      if (VAR_4 != 0)
 FUNC_4 (VAR_4, VAR_6);
      if (VAR_5 != 0)
 FUNC_4 (VAR_5, VAR_7);



      FUNC_0 (VAR_4 != 0 || VAR_5 != 0);
      FUNC_0 (VAR_5 != VAR_4);
    }
  else
    {
      if (VAR_4 != 0)
 FUNC_5 (VAR_4, VAR_6);
      if (VAR_5 != 0)
 FUNC_5 (VAR_5, VAR_7);
    }
}
