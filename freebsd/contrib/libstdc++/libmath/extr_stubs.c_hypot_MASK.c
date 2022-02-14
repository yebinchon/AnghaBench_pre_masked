
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

double
FUNC_2(double VAR_0, double VAR_1)
{
  double VAR_2 = FUNC_0(VAR_0) + FUNC_0(VAR_1);
  if (VAR_2 == 0.0)
    return VAR_2;
  VAR_0 /= VAR_2; VAR_1 /= VAR_2;
  return VAR_2 * FUNC_1(VAR_0 * VAR_0 + VAR_1 * VAR_1);
}
