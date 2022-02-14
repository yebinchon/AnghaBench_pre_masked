
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

int32_t
FUNC_2(
 int32_t VAR_0,
 int32_t VAR_1,
 int32_t VAR_2
 )
{
 uint32_t VAR_3;
 char VAR_4 = 0;
 char VAR_5 = 0;


 if (VAR_2 < 0) {
  VAR_2 = - VAR_2;
  VAR_5 ^= 1;
  VAR_4 ^= 1;
 }

 if (VAR_2 > 1) {






  if (VAR_1 >= VAR_0) {
   VAR_3 = FUNC_0(VAR_1)
        - FUNC_0(VAR_0);
  } else {
   VAR_3 = FUNC_0(VAR_0)
        - FUNC_0(VAR_1);
   VAR_4 ^= 1;
  }
  VAR_3 %= (uint32_t)VAR_2;
  if (VAR_3) {
   if (VAR_4)
    VAR_3 = (uint32_t)VAR_2 - VAR_3;
   if (VAR_5)
    VAR_3 = ~VAR_3 + 1;
   VAR_0 += FUNC_1(VAR_3);
  }
 }
 return VAR_0;
}
