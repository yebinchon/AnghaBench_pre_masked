
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (void*,int ,size_t) ;

void
FUNC_2(void *VAR_0, size_t VAR_1, const uint32_t *VAR_2)
{
 unsigned char *VAR_3;
 size_t VAR_4, VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = (VAR_2[0] + 31) >> 5;
 if (VAR_5 == 0) {
  FUNC_1(VAR_0, 0, VAR_1);
  return;
 }
 VAR_3 = (unsigned char *)VAR_0 + VAR_1;
 VAR_4 = 1;
 VAR_6 = 0;
 VAR_7 = 0;
 while (VAR_1 != 0) {
  uint32_t VAR_8;

  VAR_8 = (VAR_4 <= VAR_5) ? VAR_2[VAR_4] : 0;
  VAR_4 ++;
  if (VAR_7 == 0) {
   VAR_6 = VAR_8;
   VAR_7 = 31;
  } else {
   uint32_t VAR_9;

   VAR_9 = VAR_6 | (VAR_8 << VAR_7);
   VAR_7 --;
   VAR_6 = VAR_8 >> (31 - VAR_7);
   if (VAR_1 >= 4) {
    VAR_3 -= 4;
    VAR_1 -= 4;
    FUNC_0(VAR_3, VAR_9);
   } else {
    switch (VAR_1) {
    case 3:
     VAR_3[-3] = (unsigned char)(VAR_9 >> 16);

    case 2:
     VAR_3[-2] = (unsigned char)(VAR_9 >> 8);

    case 1:
     VAR_3[-1] = (unsigned char)VAR_9;
     break;
    }
    return;
   }
  }
 }
}
