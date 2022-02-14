
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int const int16_t ;



__attribute__((used)) static void
FUNC_0(int16_t VAR_0, const uint16_t *VAR_1, uint16_t VAR_2,
                          uint32_t *VAR_3, uint32_t *VAR_4)
{
 int16_t VAR_5 = VAR_0;
 const int16_t *VAR_6 = VAR_1+VAR_2;
 const int16_t *VAR_7;




 if (VAR_5 < VAR_1[0]) {
  *VAR_3 = *VAR_4 = 0;
  return;
 }
 if (VAR_5 >= VAR_6[-1]) {
  *VAR_3 = *VAR_4 = VAR_2 - 1;
  return;
 }


 for (VAR_7 = VAR_1; VAR_7 < VAR_6; VAR_7++) {




  if (*VAR_7 == VAR_5) {
   *VAR_3 = *VAR_4 = VAR_7 - (const int16_t *) VAR_1;
   return;
  }




  if (VAR_5 < VAR_7[1]) {
   *VAR_3 = VAR_7 - (const int16_t *) VAR_1;
   *VAR_4 = *VAR_3 + 1;
   return;
  }
 }
}
