
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ register_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(int VAR_0)
{
 register_t VAR_1;

 VAR_1 = FUNC_0() + VAR_0 * 100000000;
 do {
  if (FUNC_1())
   return (1);
 } while (FUNC_0() < VAR_1);
 return (0);
}
