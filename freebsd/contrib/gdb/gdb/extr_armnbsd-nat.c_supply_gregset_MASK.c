
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_pc; int r_cpsr; int r_lr; int r_sp; int * r; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2 (struct reg *VAR_6)
{
  int VAR_7;
  CORE_ADDR VAR_8;


  for (VAR_7 = VAR_0; VAR_7 < VAR_4; VAR_7++)
    FUNC_1 (VAR_7, (char *) &VAR_6->r[VAR_7]);

  FUNC_1 (VAR_4, (char *) &VAR_6->r_sp);
  FUNC_1 (VAR_1, (char *) &VAR_6->r_lr);

  VAR_8 = FUNC_0 (VAR_6->r_pc);
  FUNC_1 (VAR_2, (char *) &VAR_8);

  if (VAR_5)
    FUNC_1 (VAR_3, (char *) &VAR_6->r_cpsr);
  else
    FUNC_1 (VAR_3, (char *) &VAR_6->r_pc);
}
