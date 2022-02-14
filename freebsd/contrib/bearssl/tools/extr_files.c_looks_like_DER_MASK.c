
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const unsigned char *VAR_0, size_t VAR_1)
{
 int VAR_2;
 size_t VAR_3;

 if (VAR_1 < 2) {
  return 0;
 }
 if (*VAR_0 ++ != 0x30) {
  return 0;
 }
 VAR_2 = *VAR_0 ++;
 VAR_1 -= 2;
 if (VAR_2 < 0x80) {
  return (size_t)VAR_2 == VAR_1;
 } else if (VAR_2 == 0x80) {
  return 0;
 } else {
  VAR_2 -= 0x80;
  if (VAR_1 < (size_t)VAR_2 + 2) {
   return 0;
  }
  VAR_1 -= (size_t)VAR_2;
  VAR_3 = 0;
  while (VAR_2 -- > 0) {
   if (VAR_3 > (VAR_1 >> 8)) {
    return 0;
   }
   VAR_3 = (VAR_3 << 8) + (size_t)*VAR_0 ++;
  }
  return VAR_3 == VAR_1;
 }
}
