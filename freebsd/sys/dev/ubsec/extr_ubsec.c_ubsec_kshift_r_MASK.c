
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
 u_int VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = (VAR_2 + 7) / 8;
 VAR_6 = (VAR_4 + 7) / 8;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_3[VAR_7] = VAR_1[VAR_7];
 for (VAR_7 = 0; VAR_7 < VAR_6 - VAR_5; VAR_7++)
  VAR_3[VAR_5 + VAR_7] = 0;

 VAR_10 = VAR_0 / 8;
 if (VAR_10 != 0) {
  VAR_8 = VAR_6 - VAR_10 - 1;
  VAR_9 = VAR_6 - 1;
  while (VAR_8 >= 0)
   VAR_3[VAR_9--] = VAR_3[VAR_8--];
  while (VAR_9 >= 0)
   VAR_3[VAR_9--] = 0;
 }

 VAR_10 = VAR_0 % 8;
 if (VAR_10 != 0) {
  for (VAR_7 = VAR_6 - 1; VAR_7 > 0; VAR_7--)
   VAR_3[VAR_7] = (VAR_3[VAR_7] << VAR_10) |
       (VAR_3[VAR_7 - 1] >> (8 - VAR_10));
  VAR_3[0] = VAR_3[0] << VAR_10;
 }
}
