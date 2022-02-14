
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_bc_op {int yes; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, int VAR_1, int VAR_2)
{
 while (VAR_1 >= 0) {
  const struct inet_diag_bc_op *VAR_3 = VAR_0;

  if (VAR_2 > VAR_1)
   return 0;
  if (VAR_2 == VAR_1)
   return 1;
  if (VAR_3->yes < 4 || VAR_3->yes & 3)
   return 0;
  VAR_1 -= VAR_3->yes;
  VAR_0 += VAR_3->yes;
 }
 return 0;
}
