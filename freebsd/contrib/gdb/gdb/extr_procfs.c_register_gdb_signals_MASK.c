
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int procinfo ;
typedef int gdb_sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (procinfo *VAR_1, gdb_sigset_t *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 ++)
    if (FUNC_5 (FUNC_6 (VAR_3)) == 0 &&
 FUNC_4 (FUNC_6 (VAR_3)) == 0 &&
 FUNC_3 (FUNC_6 (VAR_3)) == 1)
      FUNC_1 (VAR_2, VAR_3);
    else
      FUNC_0 (VAR_2, VAR_3);

  return FUNC_2 (VAR_1, VAR_2);
}
