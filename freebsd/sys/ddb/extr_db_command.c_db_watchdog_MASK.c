
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int FUNC_0 (int ,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(db_expr_t VAR_4, bool VAR_5, db_expr_t VAR_6, char *VAR_7)
{
 db_expr_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_2;
 VAR_2 = 10;
 VAR_10 = FUNC_2(&VAR_9);
 FUNC_4();
 VAR_2 = VAR_8;


 if (VAR_10 == 0) {
  FUNC_3("No argument provided, disabling watchdog\n");
  VAR_9 = 0;
 } else if ((VAR_9 & VAR_0) == VAR_1) {
  FUNC_1("Out of range watchdog interval\n");
  return;
 }
 FUNC_0(VAR_3, VAR_9, &VAR_11);
}
