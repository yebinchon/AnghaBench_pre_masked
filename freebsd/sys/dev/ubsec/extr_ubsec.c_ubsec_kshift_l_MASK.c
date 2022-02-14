
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;



__attribute__((used)) static void
FUNC_0(
 u_int VAR_0,
 u_int8_t *VAR_1, u_int VAR_2,
 u_int8_t *VAR_3, u_int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = (VAR_2 + 7) / 8;
 VAR_6 = (VAR_4 + 7) / 8;

 VAR_8 = VAR_0 / 8;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_3[VAR_7] = VAR_1[VAR_7 + VAR_8];
 for (VAR_7 = 0; VAR_7 < VAR_6 - VAR_5; VAR_7++)
  VAR_3[VAR_5 + VAR_7] = 0;

 VAR_8 = VAR_0 % 8;
 if (VAR_8 != 0) {
  for (VAR_7 = 0; VAR_7 < (VAR_6 - 1); VAR_7++)
   VAR_3[VAR_7] = (VAR_3[VAR_7] >> VAR_8) | (VAR_3[VAR_7 + 1] << (8 - VAR_8));
  VAR_3[VAR_6 - 1] = VAR_3[VAR_6 - 1] >> VAR_8;
 }
}
