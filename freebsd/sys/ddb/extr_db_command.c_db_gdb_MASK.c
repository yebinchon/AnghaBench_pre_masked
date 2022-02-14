
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(db_expr_t VAR_1, bool VAR_2, db_expr_t VAR_3, char *VAR_4)
{

 if (FUNC_1("gdb") != 0) {
  FUNC_0("The remote GDB backend could not be selected.\n");
  return;
 }




 VAR_0 = 1;
 FUNC_0("(ctrl-c will return control to ddb)\n");
}
