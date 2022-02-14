
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



int64_t
FUNC_0(int64_t VAR_0, int64_t VAR_1)
{
 int64_t VAR_2 = 1;
 if (VAR_1 < 0)
  return (0);

 while (VAR_1) {
  if (VAR_1 & 1)
   VAR_2 *= VAR_0;
  VAR_1 >>= 1;
  VAR_0 *= VAR_0;
 }
 return (VAR_2);
}
