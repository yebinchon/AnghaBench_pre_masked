
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_1 ;

rtx
FUNC_4 (rtx VAR_2, int VAR_3)
{
  while (VAR_2 != 0 && FUNC_0 (VAR_2) != VAR_3)
    VAR_2 = FUNC_1 (VAR_2);
  if (VAR_2 != 0)
    {
      FUNC_2 (VAR_2, VAR_0);
      return VAR_2;
    }
  else
    {
      FUNC_3 (VAR_1, "insn uid %d not found\n", VAR_3);
      return 0;
    }
}
