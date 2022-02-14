
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int* const) ;

void
FUNC_1(uint64_t * const VAR_0,
 uint64_t * const VAR_1)
{
 static const uint64_t VAR_2[] = { 0xbeac0467eba5facb,
  0xd86b048b86aa9922 };

 uint64_t VAR_3 = 0;
 uint64_t VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < sizeof VAR_2 / sizeof *VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
   if (VAR_2[VAR_5] & 1ULL << VAR_6) {
    VAR_3 ^= VAR_0[0];
    VAR_4 ^= VAR_0[1];
   }
   FUNC_0(VAR_0);
  }
 }
 VAR_1[0] = VAR_3;
 VAR_1[1] = VAR_4;
}
