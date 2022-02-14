
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(uint32_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
 static const char VAR_5[256] = {
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
   2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
   3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
   4, 4, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 };
 int VAR_6, VAR_7;
 int VAR_8;
 uint32_t VAR_9;


 if (VAR_4 == 0)
  return (0);



 VAR_6 = (unsigned char)*VAR_3;
 if (VAR_6 == 0)
  return (0);
 VAR_8 = VAR_5[VAR_6];


 if ((int)VAR_4 < VAR_8) {
  VAR_8 = (int)VAR_4;
  for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++) {
   if ((VAR_3[VAR_7] & 0xc0) != 0x80) {
    VAR_8 = VAR_7;
    break;
   }
  }
  goto invalid_sequence;
 }


 switch (VAR_8) {
 case 1:
  *VAR_2 = VAR_6 & 0x7f;
  return (VAR_8);
 case 2:
  if ((VAR_3[1] & 0xc0) != 0x80) {
   VAR_8 = 1;
   goto invalid_sequence;
  }
  *VAR_2 = ((VAR_6 & 0x1f) << 6) | (VAR_3[1] & 0x3f);
  return (VAR_8);
 case 3:
  if ((VAR_3[1] & 0xc0) != 0x80) {
   VAR_8 = 1;
   goto invalid_sequence;
  }
  if ((VAR_3[2] & 0xc0) != 0x80) {
   VAR_8 = 2;
   goto invalid_sequence;
  }
  VAR_9 = ((VAR_6 & 0x0f) << 12)
      | ((VAR_3[1] & 0x3f) << 6)
      | (VAR_3[2] & 0x3f);
  if (VAR_9 < 0x800)
   goto invalid_sequence;
  break;
 case 4:
  if ((VAR_3[1] & 0xc0) != 0x80) {
   VAR_8 = 1;
   goto invalid_sequence;
  }
  if ((VAR_3[2] & 0xc0) != 0x80) {
   VAR_8 = 2;
   goto invalid_sequence;
  }
  if ((VAR_3[3] & 0xc0) != 0x80) {
   VAR_8 = 3;
   goto invalid_sequence;
  }
  VAR_9 = ((VAR_6 & 0x07) << 18)
      | ((VAR_3[1] & 0x3f) << 12)
      | ((VAR_3[2] & 0x3f) << 6)
      | (VAR_3[3] & 0x3f);
  if (VAR_9 < 0x10000)
   goto invalid_sequence;
  break;
 default:
  if (VAR_6 == 0xc0 || VAR_6 == 0xc1)
   VAR_8 = 2;
  else if (VAR_6 >= 0xf5 && VAR_6 <= 0xf7)
   VAR_8 = 4;
  else if (VAR_6 >= 0xf8 && VAR_6 <= 0xfb)
   VAR_8 = 5;
  else if (VAR_6 == 0xfc || VAR_6 == 0xfd)
   VAR_8 = 6;
  else
   VAR_8 = 1;
  if ((int)VAR_4 < VAR_8)
   VAR_8 = (int)VAR_4;
  for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++) {
   if ((VAR_3[VAR_7] & 0xc0) != 0x80) {
    VAR_8 = VAR_7;
    break;
   }
  }
  goto invalid_sequence;
 }



 if (VAR_9 > VAR_0)
  goto invalid_sequence;

 *VAR_2 = VAR_9;
 return (VAR_8);
invalid_sequence:
 *VAR_2 = VAR_1;
 return (VAR_8 * -1);
}
