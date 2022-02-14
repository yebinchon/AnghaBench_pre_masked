
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t v ;


 scalar_t__ FUNC_0 (size_t) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0, size_t VAR_1)
{
 static const char VAR_2[64] =
     { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
       'P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d',
       'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
       't','u','v','w','x','y','z','0','1','2','3','4','5','6','7',
       '8','9','+','/' };
 int VAR_3;
 char *VAR_4, *VAR_5;


 VAR_5 = (char *)FUNC_0((VAR_1 * 4 + 2) / 3 + 1);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_4 = VAR_5;


 while (VAR_1 >= 3) {
  VAR_3 = (((int)VAR_0[0] << 16) & 0xff0000)
      | (((int)VAR_0[1] << 8) & 0xff00)
      | (((int)VAR_0[2]) & 0x00ff);
  VAR_0 += 3;
  VAR_1 -= 3;
  *VAR_4++ = VAR_2[(VAR_3 >> 18) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3 >> 12) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3 >> 6) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3) & 0x3f];
 }

 switch (VAR_1) {
 case 0: break;
 case 1:
  VAR_3 = (((int)VAR_0[0] << 16) & 0xff0000);
  *VAR_4++ = VAR_2[(VAR_3 >> 18) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3 >> 12) & 0x3f];
  break;
 case 2:
  VAR_3 = (((int)VAR_0[0] << 16) & 0xff0000)
      | (((int)VAR_0[1] << 8) & 0xff00);
  *VAR_4++ = VAR_2[(VAR_3 >> 18) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3 >> 12) & 0x3f];
  *VAR_4++ = VAR_2[(VAR_3 >> 6) & 0x3f];
  break;
 }

 *VAR_4 = '\0';
 return (VAR_5);
}
