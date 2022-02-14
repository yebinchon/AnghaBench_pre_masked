
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef int db_addr_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(db_expr_t VAR_1, bool VAR_2, db_expr_t VAR_3, char *VAR_4)
{
 if (VAR_4[0] != '\0')
     FUNC_1(VAR_0, VAR_4);

 if (VAR_3 == -1)
     VAR_3 = 1;

 FUNC_0((db_addr_t) VAR_1, VAR_0, VAR_3);
}
