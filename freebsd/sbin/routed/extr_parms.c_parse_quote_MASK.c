
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char **VAR_0,
     const char *VAR_1,
     char *VAR_2,
     char *VAR_3,
     int VAR_4)
{
 char VAR_5 = '\0', *VAR_6;
 const char *VAR_7;


 VAR_6 = *VAR_0;
 if (*VAR_6 == '\0')
  return -1;

 while (VAR_4 != 0) {
  VAR_5 = *VAR_6++;
  if (VAR_5 == '\0')
   break;

  if (VAR_5 == '\\' && *VAR_6 != '\0') {
   if ((VAR_5 = *VAR_6++) == 'n') {
    VAR_5 = '\n';
   } else if (VAR_5 == 'r') {
    VAR_5 = '\r';
   } else if (VAR_5 == 't') {
    VAR_5 = '\t';
   } else if (VAR_5 == 'b') {
    VAR_5 = '\b';
   } else if (VAR_5 >= '0' && VAR_5 <= '7') {
    VAR_5 -= '0';
    if (*VAR_6 >= '0' && *VAR_6 <= '7') {
     VAR_5 = (VAR_5<<3)+(*VAR_6++ - '0');
     if (*VAR_6 >= '0' && *VAR_6 <= '7')
         VAR_5 = (VAR_5<<3)+(*VAR_6++ - '0');
    }
   }

  } else {
   for (VAR_7 = VAR_1; *VAR_7 != '\0'; ++VAR_7) {
    if (*VAR_7 == VAR_5)
     goto exit;
   }
  }

  *VAR_3++ = VAR_5;
  --VAR_4;
 }
exit:
 if (VAR_4 == 0)
  return -1;

 *VAR_3 = '\0';
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_5;
 *VAR_0 = VAR_6-1;
 return 0;
}
