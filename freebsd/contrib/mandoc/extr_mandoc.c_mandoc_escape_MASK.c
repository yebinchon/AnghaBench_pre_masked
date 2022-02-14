
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;


 char const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (char const*,int) ;
 int * FUNC_4 (char*,char const) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

enum mandoc_esc
FUNC_8(const char **VAR_14, const char **VAR_15, int *VAR_16)
{
 const char *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 char VAR_21;
 enum mandoc_esc VAR_22;






 if (((void*)0) == VAR_15)
  VAR_15 = &VAR_17;
 if (((void*)0) == VAR_16)
  VAR_16 = &VAR_18;






 if (**VAR_14 == 'E')
  ++*VAR_14;







 VAR_22 = VAR_3;
 *VAR_15 = ++*VAR_14;
 *VAR_16 = 0;
 VAR_21 = '\0';

 switch ((*VAR_15)[-1]) {





 case '(':
  VAR_22 = 128;
  *VAR_16 = 2;
  break;
 case '[':
  if (**VAR_15 == ' ') {
   ++*VAR_14;
   return VAR_3;
  }
  VAR_22 = 128;
  VAR_21 = ']';
  break;
 case 'C':
  if ('\'' != **VAR_15)
   return VAR_3;
  *VAR_15 = ++*VAR_14;
  VAR_22 = 128;
  VAR_21 = '\'';
  break;




 case '!':
 case '?':
  return VAR_13;
 case '%':
 case '&':
 case ')':
 case ',':
 case '/':
 case '^':
 case 'a':
 case 'd':
 case 'r':
 case 't':
 case 'u':
 case '{':
 case '|':
 case '}':
  return VAR_6;
 case 'c':
  return VAR_7;
 case 'p':
  return VAR_1;







 case 'z':
  return VAR_10;





 case 'F':
 case 'f':
 case 'g':
 case 'k':
 case 'M':
 case 'm':
 case 'n':
 case 'O':
 case 'V':
 case 'Y':
  VAR_22 = (*VAR_15)[-1] == 'f' ? 129 : VAR_6;
  switch (**VAR_15) {
  case '(':
   if ((*VAR_15)[-1] == 'O')
    VAR_22 = VAR_3;
   *VAR_15 = ++*VAR_14;
   *VAR_16 = 2;
   break;
  case '[':
   if ((*VAR_15)[-1] == 'O')
    VAR_22 = (*VAR_15)[1] == '5' ?
        VAR_13 : VAR_3;
   *VAR_15 = ++*VAR_14;
   VAR_21 = ']';
   break;
  default:
   if ((*VAR_15)[-1] == 'O') {
    switch (**VAR_15) {
    case '0':
     VAR_22 = VAR_13;
     break;
    case '1':
    case '2':
    case '3':
    case '4':
     break;
    default:
     VAR_22 = VAR_3;
     break;
    }
   }
   *VAR_16 = 1;
   break;
  }
  break;
 case '*':
  if (FUNC_6(*VAR_15, "(.T", 3) != 0)
   FUNC_0();
  VAR_22 = VAR_2;
  *VAR_15 = ++*VAR_14;
  *VAR_16 = 2;
  break;






 case 'A':
 case 'b':
 case 'D':
 case 'R':
 case 'X':
 case 'Z':
  VAR_22 = VAR_6;

 case 'o':
  if (**VAR_15 == '\0')
   return VAR_3;
  if (VAR_22 == VAR_3)
   VAR_22 = VAR_9;
  VAR_21 = **VAR_15;
  *VAR_15 = ++*VAR_14;
  break;





 case 'h':
 case 'H':
 case 'L':
 case 'l':
 case 'S':
 case 'v':
 case 'x':
  if (FUNC_4(" %&()*+-./0123456789:<=>", **VAR_15)) {
   if ('\0' != **VAR_15)
    ++*VAR_14;
   return VAR_3;
  }
  switch ((*VAR_15)[-1]) {
  case 'h':
   VAR_22 = VAR_5;
   break;
  case 'l':
   VAR_22 = VAR_4;
   break;
  default:
   VAR_22 = VAR_6;
   break;
  }
  VAR_21 = **VAR_15;
  *VAR_15 = ++*VAR_14;
  break;





 case 'N':
  if ('\0' == **VAR_15)
   return VAR_3;
  (*VAR_14)++;
  if (FUNC_2((unsigned char)**VAR_15)) {
   *VAR_16 = 1;
   return VAR_6;
  }
  (*VAR_15)++;
  while (FUNC_2((unsigned char)**VAR_14))
   (*VAR_14)++;
  *VAR_16 = *VAR_14 - *VAR_15;
  if ('\0' != **VAR_14)
   (*VAR_14)++;
  return VAR_8;




 case 's':
  VAR_22 = VAR_6;


  if ('+' == **VAR_14 || '-' == **VAR_14 || VAR_0 == **VAR_14)
   *VAR_15 = ++*VAR_14;

  switch (**VAR_14) {
  case '(':
   *VAR_15 = ++*VAR_14;
   *VAR_16 = 2;
   break;
  case '[':
   *VAR_15 = ++*VAR_14;
   VAR_21 = ']';
   break;
  case '\'':
   *VAR_15 = ++*VAR_14;
   VAR_21 = '\'';
   break;
  case '3':
  case '2':
  case '1':
   *VAR_16 = (*VAR_14)[-1] == 's' &&
       FUNC_2((unsigned char)(*VAR_14)[1]) ? 2 : 1;
   break;
  default:
   *VAR_16 = 1;
   break;
  }

  break;





 case ' ':
 case '\'':
 case '-':
 case '.':
 case '0':
 case ':':
 case '_':
 case '`':
 case 'e':
 case '~':
  VAR_22 = 128;

 default:
  if (VAR_22 == VAR_3)
   VAR_22 = VAR_11;
  *VAR_15 = --*VAR_14;
  *VAR_16 = 1;
  break;
 }






 if ('\0' != VAR_21) {
  while (**VAR_14 != VAR_21) {
   switch (**VAR_14) {
   case '\0':
    return VAR_3;
   case '\\':
    (*VAR_14)++;
    if (VAR_3 ==
        FUNC_8(VAR_14, ((void*)0), ((void*)0)))
     return VAR_3;
    break;
   default:
    (*VAR_14)++;
    break;
   }
  }
  *VAR_16 = (*VAR_14)++ - *VAR_15;







  if (VAR_22 == 128 && *VAR_16 == 1 && **VAR_15 != '-')
   return VAR_3;
 } else {
  FUNC_1(*VAR_16 > 0);
  if ((size_t)*VAR_16 > FUNC_5(*VAR_15))
   return VAR_3;
  *VAR_14 += *VAR_16;
 }



 switch (VAR_22) {
 case 129:
  VAR_22 = FUNC_3(*VAR_15, *VAR_16);
  break;
 case 128:
  if (**VAR_15 == 'c') {
   if (*VAR_16 < 6 || *VAR_16 > 7 ||
       FUNC_6(*VAR_15, "char", 4) != 0 ||
       (int)FUNC_7(*VAR_15 + 4, "0123456789") + 4 < *VAR_16)
    break;
   VAR_19 = 0;
   for (VAR_20 = 4; VAR_20 < *VAR_16; VAR_20++)
    VAR_19 = 10 * VAR_19 + ((*VAR_15)[VAR_20] - '0');
   if (VAR_19 < 0x21 || (VAR_19 > 0x7e && VAR_19 < 0xa0) || VAR_19 > 0xff)
    break;
   *VAR_15 += 4;
   *VAR_16 -= 4;
   VAR_22 = VAR_8;
   break;
  }







  if (**VAR_15 != 'u' || *VAR_16 < 5 || *VAR_16 > 7)
   break;
  if (*VAR_16 == 7 && ((*VAR_15)[1] != '1' || (*VAR_15)[2] != '0'))
   break;
  if (*VAR_16 == 6 && (*VAR_15)[1] == '0')
   break;
  if (*VAR_16 == 5 && (*VAR_15)[1] == 'D' &&
      FUNC_4("89ABCDEF", (*VAR_15)[2]) != ((void*)0))
   break;
  if ((int)FUNC_7(*VAR_15 + 1, "0123456789ABCDEFabcdef")
      + 1 == *VAR_16)
   VAR_22 = VAR_12;
  break;
 default:
  break;
 }

 return VAR_22;
}
