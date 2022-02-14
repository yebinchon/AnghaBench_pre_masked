
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_2, enum reg_class VAR_3)
{
  if (FUNC_2 (FUNC_1 (VAR_2)) >= 0)
    FUNC_5 (VAR_2, "can't find a register in class %qs while "
     "reloading %<asm%>",
     VAR_1[VAR_3]);
  else
    {
      FUNC_4 ("unable to find a register to spill in class %qs",
      VAR_1[VAR_3]);

      if (VAR_0)
 {
   FUNC_7 (VAR_0, "\nReloads for insn # %d\n", FUNC_0 (VAR_2));
   FUNC_3 (VAR_0);
 }
      FUNC_6 ("this is the insn:", VAR_2);
    }
}
