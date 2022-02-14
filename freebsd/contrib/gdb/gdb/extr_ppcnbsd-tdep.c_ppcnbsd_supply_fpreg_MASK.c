
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int ppc_fpscr_regnum; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3 (char *VAR_3, int VAR_4)
{
  struct gdbarch_tdep *VAR_5 = FUNC_1 (VAR_2);
  int VAR_6;

  for (VAR_6 = VAR_0; VAR_6 <= VAR_0 + 31; VAR_6++)
    {
      if (VAR_4 == VAR_6 || VAR_4 == -1)
 FUNC_2 (VAR_6, VAR_3 + FUNC_0 (VAR_6 - VAR_0));
    }

  if (VAR_4 == VAR_5->ppc_fpscr_regnum || VAR_4 == -1)
    FUNC_2 (VAR_5->ppc_fpscr_regnum, VAR_3 + VAR_1);
}
