
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {int dummy; } ;
typedef scalar_t__ rtx ;


 int FUNC_0 (struct df_ref*) ;
 scalar_t__* FUNC_1 (struct df_ref*) ;
 scalar_t__ FUNC_2 (struct df_ref*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (scalar_t__,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_6 (struct df_ref *VAR_1, rtx VAR_2)
{
  rtx VAR_3 = FUNC_2 (VAR_1);
  rtx *VAR_4 = FUNC_1 (VAR_1);

  if (VAR_3 == VAR_2)
    return;
  if (VAR_0)
    FUNC_5 (VAR_0, "Updating insn %i (%i->%i)\n",
      FUNC_3 (FUNC_0 (VAR_1)), FUNC_4 (VAR_3), FUNC_4 (VAR_2));
  *VAR_4 = VAR_2;
}
