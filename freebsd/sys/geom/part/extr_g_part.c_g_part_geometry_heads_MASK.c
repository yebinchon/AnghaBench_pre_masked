
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;



void
FUNC_0(off_t VAR_0, u_int VAR_1, off_t *VAR_2,
    u_int *VAR_3)
{
 static u_int VAR_4[] = { 1, 2, 16, 32, 64, 128, 255, 0 };
 off_t VAR_5, VAR_6;
 u_int VAR_7;
 int VAR_8;

 *VAR_2 = 0;
 *VAR_3 = 0;
 for (VAR_8 = 0; VAR_4[VAR_8] != 0; VAR_8++) {
  VAR_7 = VAR_4[VAR_8];
  VAR_6 = VAR_0 / VAR_7 / VAR_1;
  if (VAR_6 < VAR_7 || VAR_6 < VAR_1)
   break;
  if (VAR_6 > 1023)
   continue;
  VAR_5 = VAR_6 * VAR_7 * VAR_1;
  if (VAR_5 > *VAR_2 || (VAR_5 == *VAR_2 && *VAR_3 == 1)) {
   *VAR_2 = VAR_5;
   *VAR_3 = VAR_7;
  }
 }
}
