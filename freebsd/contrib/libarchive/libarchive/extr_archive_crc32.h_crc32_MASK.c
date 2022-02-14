
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 const unsigned char *VAR_6 = VAR_1;
 static volatile int VAR_7 = 0;
 static unsigned long VAR_8[256];

 if (!VAR_7) {
  for (VAR_4 = 0; VAR_4 < 256; ++VAR_4) {
   VAR_3 = VAR_4;
   for (VAR_5 = 8; VAR_5 > 0; --VAR_5) {
    if (VAR_3 & 1)
     VAR_3 = (VAR_3 >> 1) ^ 0xedb88320UL;
    else
     VAR_3 = (VAR_3 >> 1);
   }
   VAR_8[VAR_4] = VAR_3;
  }
  VAR_7 = 1;
 }

 VAR_0 = VAR_0 ^ 0xffffffffUL;


 for (;VAR_2 >= 8; VAR_2 -= 8) {
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
 }
 while (VAR_2--)
  VAR_0 = VAR_8[(VAR_0 ^ *VAR_6++) & 0xff] ^ (VAR_0 >> 8);
 return (VAR_0 ^ 0xffffffffUL);
}
