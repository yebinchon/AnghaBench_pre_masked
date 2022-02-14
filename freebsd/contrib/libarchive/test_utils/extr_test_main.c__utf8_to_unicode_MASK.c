
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(uint32_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 static const char VAR_3[256] = {
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
 int VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 *VAR_0 = 0;


 if (VAR_2 == 0)
  return (0);



 VAR_4 = (unsigned char)*VAR_1;
 if (VAR_4 == 0)
  return (0);
 VAR_5 = VAR_3[VAR_4];


 if (VAR_2 < (size_t)VAR_5)
  return (-1);


 switch (VAR_5) {
 case 1:
  *VAR_0 = VAR_4 & 0x7f;
  return (VAR_5);
 case 2:
  if ((VAR_1[1] & 0xc0) != 0x80) return (-1);
  *VAR_0 = ((VAR_4 & 0x1f) << 6) | (VAR_1[1] & 0x3f);
  return (VAR_5);
 case 3:
  if ((VAR_1[1] & 0xc0) != 0x80) return (-1);
  if ((VAR_1[2] & 0xc0) != 0x80) return (-1);
  VAR_6 = ((VAR_4 & 0x0f) << 12)
      | ((VAR_1[1] & 0x3f) << 6)
      | (VAR_1[2] & 0x3f);
  if (VAR_6 < 0x800)
   return (-1);
  break;
 case 4:
  if (VAR_2 < 4)
   return (-1);
  if ((VAR_1[1] & 0xc0) != 0x80) return (-1);
  if ((VAR_1[2] & 0xc0) != 0x80) return (-1);
  if ((VAR_1[3] & 0xc0) != 0x80) return (-1);
  VAR_6 = ((VAR_4 & 0x07) << 18)
      | ((VAR_1[1] & 0x3f) << 12)
      | ((VAR_1[2] & 0x3f) << 6)
      | (VAR_1[3] & 0x3f);
  if (VAR_6 < 0x10000)
   return (-1);
  break;
 default:
  return (-1);
 }



 if (VAR_6 > 0x10FFFF)
  return (-1);

 *VAR_0 = VAR_6;
 return (VAR_5);
}
