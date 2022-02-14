
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline long
FUNC_0 (
 register long VAR_0
 )
{
 register long VAR_1, VAR_2;

 VAR_1 = VAR_0 / 127773;
 VAR_2 = VAR_0 % 127773;
 VAR_0 = 16807 * VAR_2 - 2836 * VAR_1;
 if (VAR_0 <= 0)
  VAR_0 += 0x7fffffff;
 return (VAR_0);

}
