
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_script {int ds_script; } ;
typedef int scriptname ;
typedef int db_expr_t ;


 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 struct ddb_script* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_8(db_expr_t VAR_5, bool VAR_6, db_expr_t VAR_7,
    char *VAR_8)
{
 char *VAR_9, VAR_10[VAR_0];
 struct ddb_script *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_2();
 if (VAR_13 != VAR_4) {
  FUNC_1("usage: script scriptname=script\n");
  FUNC_5();
  return;
 }

 if (FUNC_6(VAR_10, VAR_1, sizeof(VAR_10)) >=
     sizeof(VAR_10)) {
  FUNC_1("scriptname too long\n");
  FUNC_5();
  return;
 }

 VAR_13 = FUNC_2();
 if (VAR_13 == VAR_2) {
  VAR_11 = FUNC_3(VAR_10);
  if (VAR_11 == ((void*)0)) {
   FUNC_1("script '%s' not found\n", VAR_10);
   FUNC_5();
   return;
  }
  FUNC_1("%s=%s\n", VAR_10, VAR_11->ds_script);
 } else if (VAR_13 == VAR_3) {
  VAR_9 = FUNC_0();
  if (VAR_9[FUNC_7(VAR_9)-1] == '\n')
   VAR_9[FUNC_7(VAR_9)-1] = '\0';
  VAR_12 = FUNC_4(VAR_10, VAR_9);
  if (VAR_12 != 0)
   FUNC_1("Error: %d\n", VAR_12);
 } else
  FUNC_1("?\n");
 FUNC_5();
}
