
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*,int const*) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, const uint32_t *VAR_1)
{
 uint32_t VAR_2[18], VAR_3;
 int VAR_4;






 FUNC_2(VAR_2, VAR_1);





 VAR_3 = FUNC_0(VAR_2[8] >> 15, 19);
 VAR_2[8] &= 0x7FFF;
 for (VAR_4 = 0; VAR_4 < 9; VAR_4 ++) {
  uint64_t VAR_5;

  VAR_5 = (uint64_t)VAR_2[VAR_4] + (uint64_t)VAR_3 + FUNC_1(VAR_2[VAR_4 + 9], 622592);
  VAR_2[VAR_4] = (uint32_t)VAR_5 & 0x3FFFFFFF;
  VAR_3 = (uint32_t)(VAR_5 >> 30);
 }
 VAR_3 = FUNC_0(VAR_2[8] >> 15, 19);
 VAR_2[8] &= 0x7FFF;
 for (VAR_4 = 0; VAR_4 < 9; VAR_4 ++) {
  uint32_t VAR_6;

  VAR_6 = VAR_2[VAR_4] + VAR_3;
  VAR_0[VAR_4] = VAR_6 & 0x3FFFFFFF;
  VAR_3 = VAR_6 >> 30;
 }
}
