
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int*,int const,int const*) ;
 int FUNC_1 (int*,int const*,size_t) ;

void
FUNC_2(uint16_t *VAR_0, const uint16_t *VAR_1, const uint16_t *VAR_2)
{
 uint32_t VAR_3, VAR_4;
 size_t VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_2[0];
 VAR_5 = (VAR_3 + 15) >> 4;

 VAR_0[0] = VAR_3;
 if (VAR_3 == 0) {
  return;
 }





 VAR_4 = VAR_1[0];
 VAR_6 = (VAR_4 + 15) >> 4;
 if (VAR_4 < VAR_3) {
  FUNC_1(VAR_0 + 1, VAR_1 + 1, VAR_6 * sizeof *VAR_1);
  for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7 ++) {
   VAR_0[VAR_7 + 1] = 0;
  }
  return;
 }






 FUNC_1(VAR_0 + 1, VAR_1 + 2 + (VAR_6 - VAR_5), (VAR_5 - 1) * sizeof *VAR_1);
 VAR_0[VAR_5] = 0;
 for (VAR_7 = 1 + VAR_6 - VAR_5; VAR_7 > 0; VAR_7 --) {
  FUNC_0(VAR_0, VAR_1[VAR_7], VAR_2);
 }
}
