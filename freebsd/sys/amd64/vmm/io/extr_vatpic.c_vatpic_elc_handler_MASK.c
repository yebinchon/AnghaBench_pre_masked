
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm {int dummy; } ;
struct vatpic {int* elc; } ;


 int VAR_0 ;
 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 struct vatpic* FUNC_2 (struct vm*) ;

int
FUNC_3(struct vm *VAR_1, int VAR_2, bool VAR_3, int VAR_4, int VAR_5,
    uint32_t *VAR_6)
{
 struct vatpic *VAR_7;
 bool VAR_8;

 VAR_7 = FUNC_2(VAR_1);
 VAR_8 = (VAR_4 == VAR_0);

 if (VAR_5 != 1)
  return (-1);

 FUNC_0(VAR_7);

 if (VAR_3) {
  if (VAR_8)
   *VAR_6 = VAR_7->elc[0];
  else
   *VAR_6 = VAR_7->elc[1];
 } else {
  if (VAR_8)
   VAR_7->elc[0] = (*VAR_6 & 0xf8);
  else
   VAR_7->elc[1] = (*VAR_6 & 0xde);
 }

 FUNC_1(VAR_7);

 return (0);
}
