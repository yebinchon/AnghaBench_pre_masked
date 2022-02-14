
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*) ;

unsigned
FUNC_2(uint32_t *VAR_1, const void *VAR_2, size_t VAR_3)
{
 unsigned VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 switch (VAR_3) {
 case 16:
  VAR_4 = 10;
  break;
 case 24:
  VAR_4 = 12;
  break;
 case 32:
  VAR_4 = 14;
  break;
 default:

  return 0;
 }
 VAR_8 = (int)(VAR_3 >> 2);
 VAR_9 = (int)((VAR_4 + 1) << 2);
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5 ++) {
  VAR_1[VAR_5] = FUNC_1((const unsigned char *)VAR_2 + (VAR_5 << 2));
 }
 for (VAR_5 = VAR_8, VAR_6 = 0, VAR_7 = 0; VAR_5 < VAR_9; VAR_5 ++) {
  uint32_t VAR_10;

  VAR_10 = VAR_1[VAR_5 - 1];
  if (VAR_6 == 0) {
   VAR_10 = (VAR_10 << 8) | (VAR_10 >> 24);
   VAR_10 = FUNC_0(VAR_10) ^ VAR_0[VAR_7];
  } else if (VAR_8 > 6 && VAR_6 == 4) {
   VAR_10 = FUNC_0(VAR_10);
  }
  VAR_1[VAR_5] = VAR_1[VAR_5 - VAR_8] ^ VAR_10;
  if (++ VAR_6 == VAR_8) {
   VAR_6 = 0;
   VAR_7 ++;
  }
 }
 return VAR_4;
}
