
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_core {int freg; int intreg; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_0, unsigned VAR_1,
        int VAR_2, CORE_ADDR VAR_3)
{
  struct md_core *VAR_4 = (struct md_core *) VAR_0;
  int VAR_5;
  CORE_ADDR VAR_6;

  FUNC_1 (&VAR_4->intreg);
  FUNC_0 (&VAR_4->freg);
}
