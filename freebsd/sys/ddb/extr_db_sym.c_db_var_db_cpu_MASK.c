
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int dummy; } ;
typedef int db_expr_t ;




 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;

int
FUNC_1(struct db_variable *VAR_2, db_expr_t *VAR_3, int VAR_4)
{

 switch (VAR_4) {
 case 129:
  *VAR_3 = VAR_0;
  return (1);

 case 128:
  if (*(int *)VAR_3 < -1 || *(int *)VAR_3 > VAR_1) {
   FUNC_0("Invalid value: %d\n", *(int*)VAR_3);
   return (0);
  }
  VAR_0 = *(int *)VAR_3;
  return (1);

 default:
  FUNC_0("db_var_db_cpu: unknown operation\n");
  return (0);
 }
}
