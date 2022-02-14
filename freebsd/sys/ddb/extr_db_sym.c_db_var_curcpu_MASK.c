
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int dummy; } ;
typedef int db_expr_t ;




 int VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(struct db_variable *VAR_1, db_expr_t *VAR_2, int VAR_3)
{

 switch (VAR_3) {
 case 129:
  *VAR_2 = VAR_0;
  return (1);

 case 128:
  FUNC_0("Read-only variable.\n");
  return (0);

 default:
  FUNC_0("db_var_curcpu: unknown operation\n");
  return (0);
 }
}
