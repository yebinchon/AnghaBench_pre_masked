
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef int db_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;

void
FUNC_4(db_addr_t VAR_2)
{
 db_expr_t VAR_3;

 FUNC_2(VAR_2, VAR_1);
 if (FUNC_3(VAR_2, VAR_1, &VAR_3) != VAR_0) {
  FUNC_1(":\t");
  (void)FUNC_0(VAR_2, 0);
 }
}
