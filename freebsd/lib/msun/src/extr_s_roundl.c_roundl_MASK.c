
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,long double) ;
 int FUNC_2 (long double) ;
 long double FUNC_3 (long double) ;

long double
FUNC_4(long double VAR_0)
{
 long double VAR_1;
 uint16_t VAR_2;

 FUNC_1(VAR_2, VAR_0);
 if ((VAR_2 & 0x7fff) == 0x7fff)
  return (VAR_0 + VAR_0);

 FUNC_0();

 if (!(VAR_2 & 0x8000)) {
  VAR_1 = FUNC_3(VAR_0);
  if (VAR_1 - VAR_0 <= -0.5L)
   VAR_1 += 1;
  FUNC_2(VAR_1);
 } else {
  VAR_1 = FUNC_3(-VAR_0);
  if (VAR_1 + VAR_0 <= -0.5L)
   VAR_1 += 1;
  FUNC_2(-VAR_1);
 }
}
