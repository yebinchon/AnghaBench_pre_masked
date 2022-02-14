
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 if (VAR_0 >= (uint64_t)1 << 63)
  return (0);
 VAR_3 = 0;
 for (VAR_6 = 0; VAR_6 < 128; VAR_6++) {
  VAR_8 = FUNC_0(VAR_0);
  VAR_9 = FUNC_0(VAR_1);
  if (VAR_8 + VAR_9 <= 64)

   return (VAR_3 + (VAR_0 * VAR_1) / VAR_2);
  if (VAR_0 >= VAR_2) {







   VAR_3 += (VAR_0 / VAR_2) * VAR_1;
   VAR_0 %= VAR_2;
   VAR_8 = FUNC_0(VAR_0);
   if (VAR_8 + VAR_9 <= 64)

    return (VAR_3 + (VAR_0 * VAR_1) / VAR_2);
  }
  VAR_7 = 64 - VAR_8;
  VAR_4 = VAR_1 >> VAR_7;
  VAR_5 = VAR_1 - (VAR_4 << VAR_7);
  VAR_3 += (VAR_0 * VAR_5) / VAR_2;
  VAR_0 <<= VAR_7;
  VAR_1 = VAR_4;
 }
 return (0);
}
