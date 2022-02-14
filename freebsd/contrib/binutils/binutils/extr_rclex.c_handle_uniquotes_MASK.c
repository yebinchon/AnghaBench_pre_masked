
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* unichar ;
typedef int rc_uint_type ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int) ;
 void** FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static unichar *
FUNC_5 (rc_uint_type *VAR_8)
{
  const char *VAR_9 = VAR_7;
  unichar *VAR_10, *VAR_11;
  const char *VAR_12;
  int VAR_13;
  int VAR_14;

  VAR_10 = FUNC_2 (FUNC_4 (VAR_9) + 1);

  VAR_11 = VAR_10;
  VAR_12 = VAR_9;
  if ((*VAR_12 == 'L' || *VAR_12 == 'l') && VAR_12[1] == '"')
    VAR_12 += 2;
  else if (*VAR_12 == '"')
    ++VAR_12;
  while (*VAR_12 != '\0')
    {
      if (*VAR_12 == '\\')
 {
   ++VAR_12;
   switch (*VAR_12)
     {
     case '\0':
       FUNC_3 ("backslash at end of string");
       break;

     case '\"':
       FUNC_3 ("use \"\" to put \" in a string");
       break;

     case 'a':
       *VAR_11++ = VAR_0;
       ++VAR_12;
       break;

     case 'b':
       *VAR_11++ = VAR_0;
       ++VAR_12;
       break;

     case 'f':
       *VAR_11++ = VAR_1;
       ++VAR_12;
       break;

     case 'n':
       *VAR_11++ = VAR_2;
       ++VAR_12;
       break;

     case 'r':
       *VAR_11++ = VAR_3;
       ++VAR_12;
       break;

     case 't':
       *VAR_11++ = VAR_4;
       ++VAR_12;
       break;

     case 'v':
       *VAR_11++ = VAR_5;
       ++VAR_12;
       break;

     case '\\':
       *VAR_11++ = (unichar) *VAR_12++;
       break;

     case '0': case '1': case '2': case '3':
     case '4': case '5': case '6': case '7':
       VAR_13 = *VAR_12 - '0';
       ++VAR_12;
       if (*VAR_12 >= '0' && *VAR_12 <= '7')
  {
    VAR_13 = (VAR_13 << 3) | (*VAR_12 - '0');
    ++VAR_12;
    if (*VAR_12 >= '0' && *VAR_12 <= '7')
      {
        VAR_13 = (VAR_13 << 3) | (*VAR_12 - '0');
        ++VAR_12;
      }
  }
       *VAR_11++ = (unichar) VAR_13;
       break;

     case 'x': case 'X':
       ++VAR_12;
       VAR_13 = 0;



              VAR_14 = 4;
        while (VAR_14--)
  {
    if (*VAR_12 >= '0' && *VAR_12 <= '9')
      VAR_13 = (VAR_13 << 4) | (*VAR_12 - '0');
    else if (*VAR_12 >= 'a' && *VAR_12 <= 'f')
      VAR_13 = (VAR_13 << 4) | (*VAR_12 - 'a' + 10);
    else if (*VAR_12 >= 'A' && *VAR_12 <= 'F')
      VAR_13 = (VAR_13 << 4) | (*VAR_12 - 'A' + 10);
    else
      break;
    ++VAR_12;
  }
       *VAR_11++ = (unichar) VAR_13;
       break;

     default:
       FUNC_3 ("unrecognized escape sequence");
       *VAR_11++ = '\\';
       *VAR_11++ = (unichar) *VAR_12++;
       break;
     }
 }
      else if (*VAR_12 != '"')
 *VAR_11++ = (unichar) *VAR_12++;
      else if (VAR_12[1] == '\0')
 break;
      else if (VAR_12[1] == '"')
 {
   *VAR_11++ = '"';
   VAR_12 += 2;
 }
      else
 {
   ++VAR_12;
   FUNC_1 (FUNC_0 (*VAR_12));
   while (FUNC_0 (*VAR_12))
     {
       if ((*VAR_12) == '\n')
  ++VAR_6;
       ++VAR_12;
     }
   if (*VAR_12 == '\0')
     break;
   FUNC_1 (*VAR_12 == '"');
   ++VAR_12;
 }
    }

  *VAR_11 = '\0';

  *VAR_8 = VAR_11 - VAR_10;

  return VAR_10;
}
