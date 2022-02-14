
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int digits ;
typedef int decode_table ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, size_t VAR_1, size_t *VAR_2)
{
 static const unsigned char VAR_3[64] = {
  'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
  'O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b',
  'c','d','e','f','g','h','i','j','k','l','m','n','o','p',
  'q','r','s','t','u','v','w','x','y','z','0','1','2','3',
  '4','5','6','7','8','9','+','/' };
 static unsigned char VAR_4[128];
 char *VAR_5, *VAR_6;
 const unsigned char *VAR_7 = (const unsigned char *)VAR_0;


 if (VAR_4[VAR_3[1]] != 1) {
  unsigned VAR_8;
  FUNC_1(VAR_4, 0xff, sizeof(VAR_4));
  for (VAR_8 = 0; VAR_8 < sizeof(VAR_3); VAR_8++)
   VAR_4[VAR_3[VAR_8]] = VAR_8;
 }



 VAR_5 = (char *)FUNC_0(VAR_1 - VAR_1 / 4 + 1);
 if (VAR_5 == ((void*)0)) {
  *VAR_2 = 0;
  return (((void*)0));
 }
 VAR_6 = VAR_5;

 while (VAR_1 > 0) {

  int VAR_9 = 0;
  int VAR_10 = 0;
  while (VAR_10 < 4 && VAR_1 > 0) {

   if (*VAR_7 == '=' || *VAR_7 == '_') {
    VAR_1 = 0;
    break;
   }

   if (*VAR_7 > 127 || *VAR_7 < 32
       || VAR_4[*VAR_7] == 0xff) {
    VAR_1--;
    VAR_7++;
    continue;
   }
   VAR_9 <<= 6;
   VAR_9 |= VAR_4[*VAR_7++];
   VAR_1 --;
   VAR_10++;
  }

  VAR_9 <<= 6 * (4 - VAR_10);

  switch (VAR_10) {
  case 4: VAR_6[2] = VAR_9 & 0xff;

  case 3: VAR_6[1] = (VAR_9 >> 8) & 0xff;

  case 2: VAR_6[0] = (VAR_9 >> 16) & 0xff;
   break;
  case 1:
   break;
  }
  VAR_6 += VAR_10 * 3 / 4;
 }

 *VAR_2 = VAR_6 - VAR_5;
 return (VAR_5);
}
