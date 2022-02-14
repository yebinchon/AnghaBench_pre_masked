
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t
FUNC_0(char *VAR_0)
{
 char *VAR_1, *VAR_2, VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_1 = VAR_2 = VAR_0; (VAR_3 = *VAR_1) != '\0'; VAR_1++) {
  if (VAR_4) {
   switch (VAR_3) {
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
    VAR_3 -= '0';
    VAR_1++;

    if (*VAR_1 >= '0' && *VAR_1 <= '7') {
     VAR_3 = VAR_3 * 8 + *VAR_1++ - '0';

     if (*VAR_1 >= '0' && *VAR_1 <= '7')
      VAR_3 = VAR_3 * 8 + *VAR_1 - '0';
     else
      VAR_1--;
    } else
     VAR_1--;

    *VAR_2++ = VAR_3;
    break;

   case 'a':
    *VAR_2++ = '\a';
    break;
   case 'b':
    *VAR_2++ = '\b';
    break;
   case 'f':
    *VAR_2++ = '\f';
    break;
   case 'n':
    *VAR_2++ = '\n';
    break;
   case 'r':
    *VAR_2++ = '\r';
    break;
   case 't':
    *VAR_2++ = '\t';
    break;
   case 'v':
    *VAR_2++ = '\v';
    break;

   case 'x':
    for (VAR_5 = 0; (VAR_3 = *++VAR_1) != '\0'; ) {
     if (VAR_3 >= '0' && VAR_3 <= '9')
      VAR_5 = VAR_5 * 16 + VAR_3 - '0';
     else if (VAR_3 >= 'a' && VAR_3 <= 'f')
      VAR_5 = VAR_5 * 16 + VAR_3 - 'a' + 10;
     else if (VAR_3 >= 'A' && VAR_3 <= 'F')
      VAR_5 = VAR_5 * 16 + VAR_3 - 'A' + 10;
     else
      break;
    }
    *VAR_2++ = (char)VAR_5;
    VAR_1--;
    break;

   case '"':
   case '\\':
    *VAR_2++ = VAR_3;
    break;
   default:
    *VAR_2++ = '\\';
    *VAR_2++ = VAR_3;
   }

   VAR_4 = 0;

  } else {
   if ((VAR_4 = VAR_3 == '\\') == 0)
    *VAR_2++ = VAR_3;
  }
 }

 *VAR_2 = '\0';
 return ((size_t)(VAR_2 - VAR_0));
}
