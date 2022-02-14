
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u_long ;


 long VAR_0 ;

u_long
FUNC_0()
{
 long VAR_1, VAR_2, VAR_3, VAR_4;
 if ((VAR_1 = VAR_0) == 0)
  VAR_1 = 123459876;
 VAR_2 = VAR_1 / 127773;
 VAR_3 = VAR_1 % 127773;
 VAR_4 = 16807 * VAR_3 - 2836 * VAR_2;
 if (VAR_4 < 0)
  VAR_4 += 0x7fffffff;
 VAR_0 = VAR_4;
 return (VAR_4);
}
