
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_variable {int name; } ;
typedef scalar_t__ db_expr_t ;


 int FUNC_0 (char*) ;
 struct db_variable* VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct db_variable**) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct db_variable*,scalar_t__*) ;
 int FUNC_6 (int) ;
 struct db_variable* VAR_1 ;
 int FUNC_7 (struct db_variable*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_8(db_expr_t VAR_5, bool VAR_6, db_expr_t VAR_7, char *VAR_8)
{
 struct db_variable *VAR_9;
 db_expr_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4();
 if (VAR_11 == VAR_3) {
  for (VAR_9 = VAR_1; VAR_9 < VAR_0; VAR_9++) {
   if (!FUNC_5(VAR_9, &VAR_10)) {
    FUNC_3("$%s\n", VAR_9->name);
    continue;
   }
   FUNC_3("$%-8s = %ld\n",
       VAR_9->name, (unsigned long)VAR_10);
  }
  return;
 }
 if (VAR_11 != VAR_2) {
  FUNC_0("Unknown variable\n");
  return;
 }
 if (!FUNC_2(&VAR_9)) {
  FUNC_0("Unknown variable\n");
  return;
 }

 VAR_11 = FUNC_4();
 if (VAR_11 != VAR_4)
  FUNC_6(VAR_11);

 if (!FUNC_1(&VAR_10)) {
  FUNC_0("No value\n");
  return;
 }
 if (FUNC_4() != VAR_3)
  FUNC_0("?\n");

 FUNC_7(VAR_9, VAR_10);
}
