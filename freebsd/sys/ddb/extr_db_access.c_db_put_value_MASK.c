
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef scalar_t__ db_addr_t ;


 int FUNC_0 (char*,long long) ;
 scalar_t__ FUNC_1 (scalar_t__,int,char*) ;
 int FUNC_2 () ;

void
FUNC_3(db_addr_t VAR_0, int VAR_1, db_expr_t VAR_2)
{
 char VAR_3[sizeof(int)];
 int VAR_4;


 for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)



 {
     VAR_3[VAR_4] = VAR_2 & 0xFF;
     VAR_2 >>= 8;
 }

 if (FUNC_1(VAR_0, VAR_1, VAR_3) != 0) {
  FUNC_0("*** error writing to address %llx ***\n",
      (long long)VAR_0);
  FUNC_2();
 }
}
