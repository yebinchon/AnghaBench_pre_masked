
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db_expr_t ;



db_expr_t
FUNC_0(db_expr_t VAR_0)
{
 uintptr_t VAR_1, VAR_2;
 db_expr_t VAR_3;

 VAR_2 = 1;
 VAR_3 = 0;
 VAR_1 = VAR_0;
 while (VAR_1 != 0) {
  if (VAR_1 % 16 > 9)
   return (-1);
  VAR_3 += (VAR_1 % 16) * (VAR_2);
  VAR_1 >>= 4;
  VAR_2 *= 10;
 }
 return (VAR_3);
}
