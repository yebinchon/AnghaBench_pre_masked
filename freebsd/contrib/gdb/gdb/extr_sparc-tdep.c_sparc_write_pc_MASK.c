
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int npc_regnum; int pc_regnum; } ;
typedef int ptid_t ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2 (CORE_ADDR VAR_1, ptid_t VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_0);

  FUNC_1 (VAR_3->pc_regnum, VAR_1, VAR_2);
  FUNC_1 (VAR_3->npc_regnum, VAR_1 + 4, VAR_2);
}
