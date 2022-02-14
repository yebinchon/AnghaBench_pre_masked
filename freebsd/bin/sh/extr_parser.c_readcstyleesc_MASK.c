
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_8 = FUNC_2();
 switch (VAR_8) {
 case '\0':
  FUNC_5("Unterminated quoted string");
 case '\n':
  VAR_6++;
  if (VAR_4)
   FUNC_4(2);
  else
   FUNC_4(0);
  return VAR_7;
 case '\\':
 case '\'':
 case '"':
  VAR_12 = VAR_8;
  break;
 case 'a': VAR_12 = '\a'; break;
 case 'b': VAR_12 = '\b'; break;
 case 'e': VAR_12 = '\033'; break;
 case 'f': VAR_12 = '\f'; break;
 case 'n': VAR_12 = '\n'; break;
 case 'r': VAR_12 = '\r'; break;
 case 't': VAR_12 = '\t'; break;
 case 'v': VAR_12 = '\v'; break;
 case 'x':
    VAR_12 = 0;
    for (;;) {
     VAR_8 = FUNC_2();
     if (VAR_8 >= '0' && VAR_8 <= '9')
      VAR_12 = (VAR_12 << 4) + VAR_8 - '0';
     else if (VAR_8 >= 'A' && VAR_8 <= 'F')
      VAR_12 = (VAR_12 << 4) + VAR_8 - 'A' + 10;
     else if (VAR_8 >= 'a' && VAR_8 <= 'f')
      VAR_12 = (VAR_12 << 4) + VAR_8 - 'a' + 10;
     else
      break;
    }
    FUNC_3();
    break;
 case '0': case '1': case '2': case '3':
 case '4': case '5': case '6': case '7':
    VAR_12 = VAR_8 - '0';
    VAR_8 = FUNC_2();
    if (VAR_8 >= '0' && VAR_8 <= '7') {
     VAR_12 <<= 3;
     VAR_12 += VAR_8 - '0';
     VAR_8 = FUNC_2();
     if (VAR_8 >= '0' && VAR_8 <= '7') {
      VAR_12 <<= 3;
      VAR_12 += VAR_8 - '0';
     } else
      FUNC_3();
    } else
     FUNC_3();
    break;
 case 'c':
    VAR_8 = FUNC_2();
    if (VAR_8 < 0x3f || VAR_8 > 0x7a || VAR_8 == 0x60)
     FUNC_5("Bad escape sequence");
    if (VAR_8 == '\\' && FUNC_2() != '\\')
     FUNC_5("Bad escape sequence");
    if (VAR_8 == '?')
     VAR_12 = 127;
    else
     VAR_12 = VAR_8 & 0x1f;
    break;
 case 'u':
 case 'U':
    VAR_11 = VAR_8 == 'U' ? 8 : 4;
    VAR_12 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
     VAR_8 = FUNC_2();
     if (VAR_8 >= '0' && VAR_8 <= '9')
      VAR_12 = (VAR_12 << 4) + VAR_8 - '0';
     else if (VAR_8 >= 'A' && VAR_8 <= 'F')
      VAR_12 = (VAR_12 << 4) + VAR_8 - 'A' + 10;
     else if (VAR_8 >= 'a' && VAR_8 <= 'f')
      VAR_12 = (VAR_12 << 4) + VAR_8 - 'a' + 10;
     else
      FUNC_5("Bad escape sequence");
    }
    if (VAR_12 == 0 || (VAR_12 >= 0xd800 && VAR_12 <= 0xdfff))
     FUNC_5("Bad escape sequence");

    if (VAR_5 && VAR_12 > 127) {
     FUNC_0(4, VAR_7);




     if (VAR_12 <= 0x7ff) {
      FUNC_1(0xc0 | VAR_12 >> 6, VAR_7);
      FUNC_1(0x80 | (VAR_12 & 0x3f), VAR_7);
      return VAR_7;
     } else if (VAR_12 <= 0xffff) {
      FUNC_1(0xe0 | VAR_12 >> 12, VAR_7);
      FUNC_1(0x80 | ((VAR_12 >> 6) & 0x3f), VAR_7);
      FUNC_1(0x80 | (VAR_12 & 0x3f), VAR_7);
      return VAR_7;
     } else if (VAR_12 <= 0x10ffff) {
      FUNC_1(0xf0 | VAR_12 >> 18, VAR_7);
      FUNC_1(0x80 | ((VAR_12 >> 12) & 0x3f), VAR_7);
      FUNC_1(0x80 | ((VAR_12 >> 6) & 0x3f), VAR_7);
      FUNC_1(0x80 | (VAR_12 & 0x3f), VAR_7);
      return VAR_7;
     }
    }
    if (VAR_12 > 127)
     VAR_12 = '?';
    break;
 default:
    FUNC_5("Bad escape sequence");
 }
 VAR_9 = (char)VAR_12;




 if (VAR_9 == '\0') {
  while ((VAR_8 = FUNC_2()) != '\'') {
   if (VAR_8 == '\\')
    VAR_8 = FUNC_2();
   if (VAR_8 == VAR_2)
    FUNC_5("Unterminated quoted string");
   if (VAR_8 == '\n') {
    VAR_6++;
    if (VAR_4)
     FUNC_4(2);
    else
     FUNC_4(0);
   }
  }
  FUNC_3();
  return VAR_7;
 }
 if (VAR_3[VAR_9] == VAR_0)
  FUNC_1(VAR_1, VAR_7);
 FUNC_1(VAR_9, VAR_7);
 return VAR_7;
}
