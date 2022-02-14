
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;

float
FUNC_2(float VAR_0)
{
 float VAR_1;
 uint32_t VAR_2;

 FUNC_0(VAR_2, VAR_0);
 if ((VAR_2 & 0x7fffffff) == 0x7f800000)
  return (VAR_0 + VAR_0);

 if (!(VAR_2 & 0x80000000)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 - VAR_0 <= -0.5F)
   VAR_1 += 1;
  return (VAR_1);
 } else {
  VAR_1 = FUNC_1(-VAR_0);
  if (VAR_1 + VAR_0 <= -0.5F)
   VAR_1 += 1;
  return (-VAR_1);
 }
}
