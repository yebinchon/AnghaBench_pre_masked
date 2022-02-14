
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

void
FUNC_1(int VAR_0)
{
 uint32_t VAR_1;
 uint32_t VAR_2;
 uint32_t VAR_3;

 VAR_3 = FUNC_0();
 while (VAR_0 > 0) {
  VAR_2 = FUNC_0();
  VAR_1 = VAR_2 - VAR_3;
  while (VAR_0 > 0 && VAR_1 >= 100) {
   VAR_0--;
   VAR_3 += 100;
   VAR_1 -= 100;
  }
 }
}
