
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;
typedef int db_addr_t ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(db_addr_t VAR_2, int VAR_3, db_expr_t VAR_4, db_expr_t VAR_5,
    unsigned int VAR_6)
{
 while (VAR_6-- != 0) {
  VAR_1 = VAR_2;
  if ((FUNC_0(VAR_2, VAR_3, 0) & VAR_5) == VAR_4)
   break;
  VAR_2 += VAR_3;
 }
 VAR_0 = VAR_2;
}
