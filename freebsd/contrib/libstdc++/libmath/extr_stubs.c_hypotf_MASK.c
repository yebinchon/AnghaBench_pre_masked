
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

float
FUNC_2(float VAR_0, float VAR_1)
{
  float VAR_2 = FUNC_0(VAR_0) + FUNC_0(VAR_1);
  if (VAR_2 == 0.0F)
    return VAR_2;
  VAR_0 /= VAR_2; VAR_1 /= VAR_2;
  return VAR_2 * FUNC_1(VAR_0 * VAR_0 + VAR_1 * VAR_1);
}
