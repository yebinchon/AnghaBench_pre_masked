
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 char VAR_1 ;

int
FUNC_1(u_char const *VAR_2, size_t VAR_3, char *VAR_4, size_t VAR_5) {
 size_t VAR_6 = 0;
 u_char VAR_7[3];
 u_char VAR_8[4];
 size_t VAR_9;

 while (2 < VAR_3) {
  VAR_7[0] = *VAR_2++;
  VAR_7[1] = *VAR_2++;
  VAR_7[2] = *VAR_2++;
  VAR_3 -= 3;

  VAR_8[0] = VAR_7[0] >> 2;
  VAR_8[1] = ((VAR_7[0] & 0x03) << 4) + (VAR_7[1] >> 4);
  VAR_8[2] = ((VAR_7[1] & 0x0f) << 2) + (VAR_7[2] >> 6);
  VAR_8[3] = VAR_7[2] & 0x3f;
  FUNC_0(VAR_8[0] < 64);
  FUNC_0(VAR_8[1] < 64);
  FUNC_0(VAR_8[2] < 64);
  FUNC_0(VAR_8[3] < 64);

  if (VAR_6 + 4 > VAR_5)
   return (-1);
  VAR_4[VAR_6++] = VAR_0[VAR_8[0]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[1]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[2]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[3]];
 }


 if (0 != VAR_3) {

  VAR_7[0] = VAR_7[1] = VAR_7[2] = '\0';
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_7[VAR_9] = *VAR_2++;

  VAR_8[0] = VAR_7[0] >> 2;
  VAR_8[1] = ((VAR_7[0] & 0x03) << 4) + (VAR_7[1] >> 4);
  VAR_8[2] = ((VAR_7[1] & 0x0f) << 2) + (VAR_7[2] >> 6);
  FUNC_0(VAR_8[0] < 64);
  FUNC_0(VAR_8[1] < 64);
  FUNC_0(VAR_8[2] < 64);

  if (VAR_6 + 4 > VAR_5)
   return (-1);
  VAR_4[VAR_6++] = VAR_0[VAR_8[0]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[1]];
  if (VAR_3 == 1)
   VAR_4[VAR_6++] = VAR_1;
  else
   VAR_4[VAR_6++] = VAR_0[VAR_8[2]];
  VAR_4[VAR_6++] = VAR_1;
 }
 if (VAR_6 >= VAR_5)
  return (-1);
 VAR_4[VAR_6] = '\0';
 return (VAR_6);
}
