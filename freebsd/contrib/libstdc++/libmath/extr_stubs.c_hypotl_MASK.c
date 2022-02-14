
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long double FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;

long double
FUNC_2(long double VAR_0, long double VAR_1)
{
  long double VAR_2 = FUNC_0(VAR_0) + FUNC_0(VAR_1);
  if (VAR_2 == 0.0L)
    return VAR_2;
  VAR_0 /= VAR_2; VAR_1 /= VAR_2;
  return VAR_2 * FUNC_1(VAR_0 * VAR_0 + VAR_1 * VAR_1);
}
