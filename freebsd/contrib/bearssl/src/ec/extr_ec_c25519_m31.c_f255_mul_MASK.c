
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int const*,int const*) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{
 uint32_t VAR_3[18], VAR_4;
 int VAR_5;






 FUNC_2(VAR_3, VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_3[8] >> 15, 19);
 VAR_3[8] &= 0x7FFF;
 for (VAR_5 = 0; VAR_5 < 9; VAR_5 ++) {
  uint64_t VAR_6;

  VAR_6 = (uint64_t)VAR_3[VAR_5] + (uint64_t)VAR_4 + FUNC_1(VAR_3[VAR_5 + 9], 622592);
  VAR_3[VAR_5] = (uint32_t)VAR_6 & 0x3FFFFFFF;
  VAR_4 = (uint32_t)(VAR_6 >> 30);
 }
 VAR_4 = FUNC_0(VAR_3[8] >> 15, 19);
 VAR_3[8] &= 0x7FFF;
 for (VAR_5 = 0; VAR_5 < 9; VAR_5 ++) {
  uint32_t VAR_7;

  VAR_7 = VAR_3[VAR_5] + VAR_4;
  VAR_0[VAR_5] = VAR_7 & 0x3FFFFFFF;
  VAR_4 = VAR_7 >> 30;
 }





}
