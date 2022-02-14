
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const unsigned char **VAR_1, uint32_t *VAR_2)
{
    const unsigned char *VAR_3 = *VAR_1;
    unsigned VAR_4 = *VAR_3;

    if (VAR_4 & 0x80) {
 if ((VAR_4 & 0xE0) == 0xC0) {
     const unsigned VAR_5 = *++VAR_3;
     if ((VAR_5 & 0xC0) == 0x80) {
  *VAR_2 = ((VAR_4 & 0x1F) << 6)
      | (VAR_5 & 0x3F);
     } else {
  return VAR_0;
     }
 } else if ((VAR_4 & 0xF0) == 0xE0) {
     const unsigned VAR_6 = *++VAR_3;
     if ((VAR_6 & 0xC0) == 0x80) {
  const unsigned VAR_7 = *++VAR_3;
  if ((VAR_7 & 0xC0) == 0x80) {
      *VAR_2 = ((VAR_4 & 0x0F) << 12)
   | ((VAR_6 & 0x3F) << 6)
   | (VAR_7 & 0x3F);
  } else {
      return VAR_0;
  }
     } else {
  return VAR_0;
     }
 } else if ((VAR_4 & 0xF8) == 0xF0) {
     const unsigned VAR_8 = *++VAR_3;
     if ((VAR_8 & 0xC0) == 0x80) {
  const unsigned VAR_9 = *++VAR_3;
  if ((VAR_9 & 0xC0) == 0x80) {
      const unsigned VAR_10 = *++VAR_3;
      if ((VAR_10 & 0xC0) == 0x80) {
   *VAR_2 = ((VAR_4 & 0x07) << 18)
       | ((VAR_8 & 0x3F) << 12)
       | ((VAR_9 & 0x3F) << 6)
       | (VAR_10 & 0x3F);
      } else {
   return VAR_0;
      }
  } else {
      return VAR_0;
  }
     } else {
  return VAR_0;
     }
 } else {
     return VAR_0;
 }
    } else {
 *VAR_2 = VAR_4;
    }

    *VAR_1 = VAR_3;

    return 0;
}
