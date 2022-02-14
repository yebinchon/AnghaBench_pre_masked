
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;

int FUNC_1(char *VAR_1, char *VAR_2[])
{
 char *VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_1;
 for (;;) {
  while (*VAR_3 == ' ')
   VAR_3++;
  if (*VAR_3 == '\0')
   break;
  VAR_2[VAR_4] = VAR_3;
  VAR_4++;
  if (VAR_4 == VAR_0)
   break;
  if (*VAR_3 == '"') {
   char *VAR_5 = FUNC_0(VAR_3, '"');
   if (VAR_5)
    VAR_3 = VAR_5 + 1;
  }
  while (*VAR_3 != '\0' && *VAR_3 != ' ')
   VAR_3++;
  if (*VAR_3 == ' ')
   *VAR_3++ = '\0';
 }

 return VAR_4;
}
