
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_cpsr; int r_pc; int r_lr; int r_sp; int * r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;

void
FUNC_1 (struct reg *VAR_5, int VAR_6)
{
  int VAR_7;

  for (VAR_7 = VAR_0; VAR_7 < VAR_4; VAR_7++)
    if ((VAR_6 == -1 || VAR_6 == VAR_7))
      FUNC_0 (VAR_7, &VAR_5->r[VAR_7]);
  if (VAR_6 == -1 || VAR_6 == VAR_4)
      FUNC_0 (VAR_4, &VAR_5->r_sp);
  if (VAR_6 == -1 || VAR_6 == VAR_1)
      FUNC_0 (VAR_1, &VAR_5->r_lr);
  if (VAR_6 == -1 || VAR_6 == VAR_2)
      FUNC_0 (VAR_2, &VAR_5->r_pc);
  if (VAR_6 == -1 || VAR_6 == VAR_3)
      FUNC_0 (VAR_3, &VAR_5->r_cpsr);
}
