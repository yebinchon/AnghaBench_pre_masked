
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

void
FUNC_2(db_expr_t VAR_0, bool VAR_1, db_expr_t VAR_2,
   char *VAR_3)
{
 int VAR_4;

 if (VAR_2 < 0)
  VAR_2 = 4;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (VAR_4 < 0)
  FUNC_1("hardware watchpoint could not be set\n");
}
