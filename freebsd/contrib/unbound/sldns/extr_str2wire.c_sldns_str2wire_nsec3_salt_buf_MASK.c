
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 int VAR_6, VAR_7 = (int)FUNC_3(VAR_3);
 if (VAR_7 == 1 && VAR_3[0] == '-') {
  VAR_7 = 0;
 } else if (VAR_7 % 2 != 0) {
  return VAR_2;
 }
 if (VAR_7 > 512)
  return VAR_2;
 if(*VAR_5 < 1+(size_t)VAR_7 / 2)
  return VAR_0;
 VAR_4[0] = (uint8_t) (VAR_7 / 2);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6 += 2) {
  if (FUNC_1((unsigned char)VAR_3[VAR_6]) &&
   FUNC_1((unsigned char)VAR_3[VAR_6+1])) {
   VAR_4[1+VAR_6/2] = (uint8_t)(FUNC_2(VAR_3[VAR_6])*16
    + FUNC_2(VAR_3[VAR_6+1]));
  } else {
   return FUNC_0(VAR_2, VAR_6);
  }
 }
 *VAR_5 = 1 + (size_t)VAR_4[0];
 return VAR_1;
}
