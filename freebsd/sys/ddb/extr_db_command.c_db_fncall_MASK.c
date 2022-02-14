
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ db_expr_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__*,int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(db_expr_t VAR_4, bool VAR_5, db_expr_t VAR_6, char *VAR_7)
{
 db_expr_t VAR_8;
 db_expr_t VAR_9[VAR_0];
 int VAR_10 = 0;
 db_expr_t VAR_11;
 int VAR_12;

 if (!FUNC_2(&VAR_8)) {
     FUNC_4("Bad function\n");
     FUNC_3();
     return;
 }

 VAR_12 = FUNC_5();
 if (VAR_12 == VAR_2) {
     if (FUNC_2(&VAR_9[0])) {
  VAR_10++;
  while ((VAR_12 = FUNC_5()) == VAR_1) {
      if (VAR_10 == VAR_0) {
   FUNC_4("Too many arguments (max %d)\n", VAR_0);
   FUNC_3();
   return;
      }
      if (!FUNC_2(&VAR_9[VAR_10])) {
   FUNC_4("Argument missing\n");
   FUNC_3();
   return;
      }
      VAR_10++;
  }
  FUNC_7(VAR_12);
     }
     if (FUNC_5() != VAR_3) {
         FUNC_4("Mismatched parens\n");
  FUNC_3();
  return;
     }
 }
 FUNC_6();
 FUNC_1();

 if (FUNC_0(VAR_8, &VAR_11, VAR_10, VAR_9))
  FUNC_4("= %#lr\n", (long)VAR_11);
}
