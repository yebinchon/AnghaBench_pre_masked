
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static size_t
FUNC_1(char *VAR_0, int VAR_1, uint8_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
 char VAR_5;
 int VAR_6;
 uint8_t VAR_7 = 0;
 int VAR_8 = 0;
 size_t VAR_9 = 0;

 if (VAR_1 % 2 != 0) {
  return 0;
 }

 for (VAR_6=0; VAR_6<VAR_1; VAR_6++) {
  VAR_5 = VAR_0[VAR_6];


  if (VAR_5 != ' ') {
   if (VAR_5 >= '0' && VAR_5 <= '9') {
    VAR_7 += VAR_5 & 0x0f;
   } else if (VAR_5 >= 'a' && VAR_5 <= 'z') {
    VAR_7 += (VAR_5 & 0x0f) + 9;
   } else if (VAR_5 >= 'A' && VAR_5 <= 'Z') {
    VAR_7 += (VAR_5 & 0x0f) + 9;
   } else {
    return 0;
   }

   if (VAR_8 == 0) {
    VAR_7 = VAR_7 << 4;
    VAR_8 = 1;
   } else {
    if (VAR_9 + VAR_3 + 1 <= VAR_4) {
     VAR_2[VAR_9+VAR_3] = VAR_7;
     VAR_7 = 0;
     VAR_8 = 0;
     VAR_9++;
    } else {
     FUNC_0("Buffer too small in hexstr2bin");
    }
   }
  }
        }
        return VAR_9;
}
