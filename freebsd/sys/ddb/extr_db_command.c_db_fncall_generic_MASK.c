
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ db_expr_t ;
typedef scalar_t__ (* __db_f ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_2(db_expr_t VAR_0, db_expr_t *VAR_1, int VAR_2, db_expr_t VAR_3[])
{
 __db_f *VAR_4 = (__db_f *)VAR_0;

 if (VAR_2 > 10) {
  FUNC_0("Too many arguments (max 10)\n");
  return (0);
 }
 *VAR_1 = (*VAR_4)(VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5],
     VAR_3[6], VAR_3[7], VAR_3[8], VAR_3[9]);
 return (1);
}
