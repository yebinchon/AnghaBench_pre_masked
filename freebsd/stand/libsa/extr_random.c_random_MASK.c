
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;

long
FUNC_0(void)
{
 long VAR_1, VAR_2, VAR_3, VAR_4;







 VAR_1 = VAR_0;
 VAR_2 = VAR_1 / 127773;
 VAR_3 = VAR_1 % 127773;
 VAR_4 = 16807 * VAR_3 - 2836 * VAR_2;
 if (VAR_4 <= 0)
  VAR_4 += 0x7fffffff;
 VAR_0 = VAR_4;
 return (VAR_4);
}
