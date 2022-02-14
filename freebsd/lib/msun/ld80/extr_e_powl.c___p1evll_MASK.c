
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline long double
FUNC_0(long double VAR_0, long double *VAR_1, int VAR_2)
{
 long double VAR_3;
 long double *VAR_4;

 VAR_4 = VAR_1;
 VAR_2 -= 1;
 VAR_3 = VAR_0 + *VAR_4++;
 do {
  VAR_3 = VAR_3 * VAR_0 + *VAR_4++;
 } while (--VAR_2);

 return (VAR_3);
}
