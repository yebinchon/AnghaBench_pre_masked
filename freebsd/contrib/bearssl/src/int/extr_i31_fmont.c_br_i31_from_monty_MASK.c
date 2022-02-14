
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int const*,int ) ;

void
FUNC_4(uint32_t *VAR_0, const uint32_t *VAR_1, uint32_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;

 VAR_3 = (VAR_1[0] + 31) >> 5;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 ++) {
  uint32_t VAR_6;
  uint64_t VAR_7;

  VAR_6 = FUNC_1(VAR_0[1], VAR_2);
  VAR_7 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++) {
   uint64_t VAR_8;

   VAR_8 = (uint64_t)VAR_0[VAR_5 + 1] + FUNC_0(VAR_6, VAR_1[VAR_5 + 1]) + VAR_7;
   VAR_7 = VAR_8 >> 31;
   if (VAR_5 != 0) {
    VAR_0[VAR_5] = (uint32_t)VAR_8 & 0x7FFFFFFF;
   }
  }
  VAR_0[VAR_3] = (uint32_t)VAR_7;
 }
 FUNC_3(VAR_0, VAR_1, FUNC_2(FUNC_3(VAR_0, VAR_1, 0)));
}
