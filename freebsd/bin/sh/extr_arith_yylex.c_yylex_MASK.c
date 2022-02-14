
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int val; } ;


 int VAR_0 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char const* VAR_27 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*,char**) ;
 TYPE_1__ VAR_28 ;

int
FUNC_4(void)
{
 int VAR_29;
 const char *VAR_30 = VAR_27;
 char *VAR_31;
 const char *VAR_32;

 for (;;) {
  VAR_29 = *VAR_30;
  switch (VAR_29) {
  case ' ':
  case '\t':
  case '\n':
   VAR_30++;
   continue;
  default:
   return VAR_3;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   VAR_28.val = FUNC_3(VAR_30, &VAR_31);
   VAR_27 = VAR_31;
   return VAR_19;
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '_':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
   VAR_32 = VAR_30;
   while (VAR_30++, FUNC_0(*VAR_30))
    ;
   VAR_28.name = FUNC_2(VAR_30 - VAR_32 + 1);
   FUNC_1(VAR_28.name, VAR_32, VAR_30 - VAR_32);
   VAR_28.name[VAR_30 - VAR_32] = '\0';
   VAR_29 = VAR_26;
   goto out;
  case '=':
   VAR_29 += VAR_2 - '=';
checkeq:
   VAR_30++;
checkeqcur:
   if (*VAR_30 != '=')
    goto out;
   VAR_29 += 11;
   break;
  case '>':
   switch (*++VAR_30) {
   case '=':
    VAR_29 += VAR_10 - '>';
    break;
   case '>':
    VAR_29 += VAR_24 - '>';
    goto checkeq;
   default:
    VAR_29 += VAR_11 - '>';
    goto out;
   }
   break;
  case '<':
   switch (*++VAR_30) {
   case '=':
    VAR_29 += VAR_12 - '<';
    break;
   case '<':
    VAR_29 += VAR_14 - '<';
    goto checkeq;
   default:
    VAR_29 += VAR_15 - '<';
    goto out;
   }
   break;
  case '|':
   if (*++VAR_30 != '|') {
    VAR_29 += VAR_6 - '|';
    goto checkeqcur;
   }
   VAR_29 += VAR_20 - '|';
   break;
  case '&':
   if (*++VAR_30 != '&') {
    VAR_29 += VAR_4 - '&';
    goto checkeqcur;
   }
   VAR_29 += VAR_1 - '&';
   break;
  case '!':
   if (*++VAR_30 != '=') {
    VAR_29 += VAR_18 - '!';
    goto out;
   }
   VAR_29 += VAR_17 - '!';
   break;
  case 0:
   goto out;
  case '(':
   VAR_29 += VAR_13 - '(';
   break;
  case ')':
   VAR_29 += VAR_23 - ')';
   break;
  case '*':
   VAR_29 += VAR_16 - '*';
   goto checkeq;
  case '/':
   VAR_29 += VAR_9 - '/';
   goto checkeq;
  case '%':
   VAR_29 += VAR_22 - '%';
   goto checkeq;
  case '+':
   if (VAR_30[1] == '+')
    return VAR_3;
   VAR_29 += VAR_0 - '+';
   goto checkeq;
  case '-':
   if (VAR_30[1] == '-')
    return VAR_3;
   VAR_29 += VAR_25 - '-';
   goto checkeq;
  case '~':
   VAR_29 += VAR_5 - '~';
   break;
  case '^':
   VAR_29 += VAR_7 - '^';
   goto checkeq;
  case '?':
   VAR_29 += VAR_21 - '?';
   break;
  case ':':
   VAR_29 += VAR_8 - ':';
   break;
  }
  break;
 }

 VAR_30++;
out:
 VAR_27 = VAR_30;
 return VAR_29;
}
