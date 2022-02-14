
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, uint32_t VAR_2,
    uint8_t VAR_3)
{
 uint32_t VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_2 / 8;
 VAR_5 = VAR_2 % 8;

 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < VAR_4; VAR_6++) {

  for (VAR_7 = 7; VAR_7 >= 0; VAR_7--, VAR_8++)
   VAR_1[VAR_6 * 8 + VAR_7] = VAR_0[VAR_8];
 }
 if (VAR_5) {
  if (VAR_3 == 0) {

   for (VAR_7 = 7; VAR_8 < VAR_2; VAR_7--, VAR_8++)
    VAR_1[VAR_6 * 8 + VAR_7] = VAR_0[VAR_8];
  } else {

   for (VAR_7 = 7; VAR_8 < VAR_2; VAR_7--, VAR_8++)
    VAR_1[VAR_8] = VAR_0[VAR_6 * 8 + VAR_7];
  }
 }

 return (0);
}
