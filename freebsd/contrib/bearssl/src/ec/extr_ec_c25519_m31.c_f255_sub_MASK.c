
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2)
{




 int VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_4 = (uint32_t)-38;
 for (VAR_3 = 0; VAR_3 < 9; VAR_3 ++) {
  VAR_5 = VAR_1[VAR_3] - VAR_2[VAR_3] + VAR_4;
  VAR_0[VAR_3] = VAR_5 & 0x3FFFFFFF;
  VAR_4 = FUNC_0(VAR_5, 30);
 }
 VAR_4 = FUNC_1((VAR_5 + 0x10000) >> 15, 19);
 VAR_0[8] &= 0x7FFF;
 for (VAR_3 = 0; VAR_3 < 9; VAR_3 ++) {
  VAR_5 = VAR_0[VAR_3] + VAR_4;
  VAR_0[VAR_3] = VAR_5 & 0x3FFFFFFF;
  VAR_4 = VAR_5 >> 30;
 }
}
