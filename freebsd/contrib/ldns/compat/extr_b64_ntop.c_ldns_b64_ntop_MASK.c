
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(uint8_t const *VAR_2, size_t VAR_3, char *VAR_4, size_t VAR_5) {
 size_t VAR_6 = 0;
 uint8_t VAR_7[3];
 uint8_t VAR_8[4];
 size_t VAR_9;

 if (VAR_3 == 0) {
  if (VAR_5 > 0) {
   VAR_4[0] = '\0';
   return 0;
  } else {
   return -1;
  }
 }

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

  if (VAR_6 + 4 > VAR_5) {
   return (-1);
  }
  VAR_4[VAR_6++] = VAR_0[VAR_8[0]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[1]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[2]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[3]];
 }


 if (0 != VAR_3) {

  VAR_7[0] = VAR_7[1] = VAR_7[2] = (uint8_t) '\0';
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_7[VAR_9] = *VAR_2++;

  VAR_8[0] = VAR_7[0] >> 2;
  VAR_8[1] = ((VAR_7[0] & 0x03) << 4) + (VAR_7[1] >> 4);
  VAR_8[2] = ((VAR_7[1] & 0x0f) << 2) + (VAR_7[2] >> 6);
  FUNC_0(VAR_8[0] < 64);
  FUNC_0(VAR_8[1] < 64);
  FUNC_0(VAR_8[2] < 64);

  if (VAR_6 + 4 > VAR_5) {
   return (-2);
  }
  VAR_4[VAR_6++] = VAR_0[VAR_8[0]];
  VAR_4[VAR_6++] = VAR_0[VAR_8[1]];
  if (VAR_3 == 1) {
   VAR_4[VAR_6++] = VAR_1;
  } else {
   VAR_4[VAR_6++] = VAR_0[VAR_8[2]];
  }
  VAR_4[VAR_6++] = VAR_1;
 }
 if (VAR_6 >= VAR_5) {
  return (-3);
 }
 VAR_4[VAR_6] = '\0';
 return (int) (VAR_6);
}
