
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ db_expr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,char) ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 char VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char,scalar_t__*) ;
 int FUNC_7 (char,scalar_t__*) ;
 int FUNC_8 (char,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static bool
FUNC_9(db_expr_t *VAR_15)
{
 int VAR_16;

 VAR_16 = FUNC_4();
 if (VAR_16 == VAR_10) {
     if (!FUNC_6(VAR_5, VAR_15) &&
  !FUNC_7(VAR_5, VAR_15) &&
  !FUNC_8(VAR_5, VAR_15)) {
  FUNC_3("Symbol '%s' not found\n", VAR_5);
  FUNC_0(((void*)0));

     }
     return (1);
 }
 if (VAR_16 == VAR_12) {
     *VAR_15 = (db_expr_t)VAR_4;
     return (1);
 }
 if (VAR_16 == VAR_8) {
     *VAR_15 = (db_expr_t)VAR_0;
     return (1);
 }
 if (VAR_16 == VAR_9) {
     *VAR_15 = (db_expr_t)VAR_3;
     return (1);
 }
 if (VAR_16 == VAR_13) {
     *VAR_15 = (db_expr_t) VAR_2;
     return (1);
 }
 if (VAR_16 == VAR_6) {
     *VAR_15 = (db_expr_t)VAR_1;
     return (1);
 }
 if (VAR_16 == VAR_7) {
     if (!FUNC_2(VAR_15))
  return (0);
     return (1);
 }
 if (VAR_16 == VAR_11) {
     if (!FUNC_1(VAR_15)) {
  FUNC_3("Expression syntax error after '%c'\n", '(');
  FUNC_0(((void*)0));

     }
     VAR_16 = FUNC_4();
     if (VAR_16 != VAR_14) {
  FUNC_3("Expression syntax error -- expected '%c'\n", ')');
  FUNC_0(((void*)0));

     }
     return (1);
 }
 FUNC_5(VAR_16);
 return (0);
}
