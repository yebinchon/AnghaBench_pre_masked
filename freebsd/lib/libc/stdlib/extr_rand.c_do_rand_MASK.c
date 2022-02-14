
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned long *VAR_0)
{
 long VAR_1, VAR_2, VAR_3;


 VAR_3 = (*VAR_0 % 0x7ffffffe) + 1;
 VAR_1 = VAR_3 / 127773;
 VAR_2 = VAR_3 % 127773;
 VAR_3 = 16807 * VAR_2 - 2836 * VAR_1;
 if (VAR_3 < 0)
  VAR_3 += 0x7fffffff;

 VAR_3--;
 *VAR_0 = VAR_3;
 return (VAR_3);
}
