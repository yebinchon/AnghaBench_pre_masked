
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ db_strategy_t ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef int c_db_sym_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char**,int*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int ,char const**,int *) ;

void
FUNC_4(db_expr_t VAR_2, db_strategy_t VAR_3)
{
 db_expr_t VAR_4;
 char *VAR_5;
 const char *VAR_6;
 int VAR_7;
 c_db_sym_t VAR_8;

 if (VAR_2 < 0 && VAR_2 >= -VAR_1) {
  FUNC_1("%+#lr", (long)VAR_2);
  return;
 }
 VAR_8 = FUNC_2(VAR_2, VAR_3, &VAR_4);
 FUNC_3(VAR_8, &VAR_6, ((void*)0));
 if (VAR_6 == ((void*)0) || VAR_4 >= (db_addr_t)VAR_1) {
  FUNC_1("%#lr", (unsigned long)VAR_2);
  return;
 }



 FUNC_1("%s", VAR_6);

 if (VAR_4)
  FUNC_1("+%+#lr", (long)VAR_4);
 if (VAR_3 == VAR_0) {
  if (FUNC_0(VAR_8, &VAR_5, &VAR_7, VAR_2))
   FUNC_1(" [%s:%d]", VAR_5, VAR_7);
 }
}
