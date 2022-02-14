
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int db_expr_t ;
typedef scalar_t__ db_addr_t ;


 int* VAR_0 ;
 int FUNC_0 (char*,long long) ;
 scalar_t__ FUNC_1 (scalar_t__,int,char*) ;
 int FUNC_2 () ;

db_expr_t
FUNC_3(db_addr_t VAR_1, int VAR_2, bool VAR_3)
{
 char VAR_4[sizeof(u_int64_t)];
 db_expr_t VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_1, VAR_2, VAR_4) != 0) {
  FUNC_0("*** error reading from address %llx ***\n",
      (long long)VAR_1);
  FUNC_2();
 }

 VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)



 {
     VAR_5 = (VAR_5 << 8) + (VAR_4[VAR_6] & 0xFF);
 }

 if (VAR_2 < 4) {
     if (VAR_3 && (VAR_5 & VAR_0[VAR_2]) != 0)
  VAR_5 |= VAR_0[VAR_2];
 }
 return (VAR_5);
}
