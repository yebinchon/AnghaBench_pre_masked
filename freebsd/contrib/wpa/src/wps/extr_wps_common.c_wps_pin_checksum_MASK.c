
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1 = 0;
 while (VAR_0) {
  VAR_1 += 3 * (VAR_0 % 10);
  VAR_0 /= 10;
  VAR_1 += VAR_0 % 10;
  VAR_0 /= 10;
 }

 return (10 - VAR_1 % 10) % 10;
}
