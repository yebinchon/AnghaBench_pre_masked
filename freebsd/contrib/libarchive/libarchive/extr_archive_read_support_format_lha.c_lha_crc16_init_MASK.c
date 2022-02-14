
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int** VAR_0 ;

__attribute__((used)) static void
FUNC_0(void)
{
 unsigned int VAR_1;
 static int VAR_2 = 0;

 if (VAR_2)
  return;
 VAR_2 = 1;

 for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
  unsigned int VAR_3;
  uint16_t VAR_4 = (uint16_t)VAR_1;
  for (VAR_3 = 8; VAR_3; VAR_3--)
   VAR_4 = (VAR_4 >> 1) ^ ((VAR_4 & 1) * 0xA001);
  VAR_0[0][VAR_1] = VAR_4;
 }

 for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
  VAR_0[1][VAR_1] = (VAR_0[0][VAR_1] >> 8)
   ^ VAR_0[0][VAR_0[0][VAR_1] & 0xff];
 }
}
