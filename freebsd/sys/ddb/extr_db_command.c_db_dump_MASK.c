
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(db_expr_t VAR_1, bool VAR_2, db_expr_t VAR_3, char *VAR_4)
{
 int VAR_5;

 if (VAR_0) {
  FUNC_0("textdump_pending set.\n"
      "run \"textdump unset\" first or \"textdump dump\" for a textdump.\n");
  return;
 }
 VAR_5 = FUNC_1(0);
 if (VAR_5) {
  FUNC_0("Cannot dump: ");
  switch (VAR_5) {
  case 129:
   FUNC_0("debugger got invoked while dumping.\n");
   break;
  case 128:
   FUNC_0("no dump device specified.\n");
   break;
  default:
   FUNC_0("unknown error (error=%d).\n", VAR_5);
   break;
  }
 }
}
