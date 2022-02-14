
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char) ;

char *
FUNC_8(const char *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 while (FUNC_2(VAR_2[*VAR_3]))
  (*VAR_3)++;
 VAR_8 = *VAR_3;
 if (VAR_2[*VAR_3] != '"')
  return (((void*)0));
 VAR_6 = FUNC_4(FUNC_6(VAR_2 + VAR_8), VAR_0, VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 FUNC_5(VAR_6, VAR_2 + VAR_8 + 1);
 for (VAR_10 = 0, VAR_9 = 1, VAR_7 = VAR_6; *VAR_7 != '\0'; VAR_10++, VAR_9++, VAR_7++) {
  if (*VAR_7 == '"') {
   *VAR_7 = '\0';
   *VAR_4 = VAR_9 + 1;
   if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_10;
   return (VAR_6);
  } else if (VAR_7[0] == '\\' && VAR_7[1] != '\0') {
   int VAR_11, VAR_12;
   char *VAR_13;

   FUNC_5(VAR_7, VAR_7 + 1);
   VAR_13 = VAR_7;
   switch (*VAR_7) {
   case 't':
    *VAR_13 = '\t';
    VAR_9++;
    continue;
   case 'n':
    *VAR_13 = '\n';
    VAR_9++;
    continue;
   case 'r':
    *VAR_13 = '\r';
    VAR_9++;
    continue;
   case 'v':
    *VAR_13 = '\v';
    VAR_9++;
    continue;
   case 'f':
    *VAR_13 = '\f';
    VAR_9++;
    continue;
   case '"':
    *VAR_13 = '"';
    VAR_9++;
    continue;
   case '0': case '1': case '2': case '3':
   case '4': case '5': case '6': case '7':
    for (VAR_11 = VAR_12 = 0;
        VAR_12 < 3 && *VAR_13 >= '0' && *VAR_13 <= '7'; VAR_13++) {
     VAR_11 = (VAR_11 << 3) + (*VAR_13 - '0');
     VAR_9++;
    }
    *--VAR_13 = (char)VAR_11;
    break;
   case 'x':
    for (VAR_13++, VAR_11 = VAR_12 = 0;
        VAR_12 < 2 && FUNC_3(*VAR_13); VAR_13++) {
     VAR_11 = (VAR_11 << 4) + (FUNC_1(*VAR_13) ?
           (*VAR_13 - '0') :
           (FUNC_7(*VAR_13) - 'a' + 10));
     VAR_9++;
    }
    *--VAR_13 = (char)VAR_11;
    break;
   default:
    continue;
   }
   FUNC_5(VAR_7, VAR_13);
  }
 }
 FUNC_0(VAR_6, VAR_0);
 return (((void*)0));
}
