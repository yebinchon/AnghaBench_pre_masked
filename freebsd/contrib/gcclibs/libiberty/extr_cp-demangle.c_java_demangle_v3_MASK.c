
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,int,size_t*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

char *
FUNC_2 (const char* VAR_3)
{
  size_t VAR_4;
  char *VAR_5;
  int VAR_6;
  char *VAR_7;
  char *VAR_8;

  VAR_5 = FUNC_0 (VAR_3, VAR_0 | VAR_1 | VAR_2,
     &VAR_4);

  if (VAR_5 == ((void*)0))
    return ((void*)0);

  VAR_6 = 0;
  VAR_7 = VAR_5;
  VAR_8 = VAR_7;
  while (*VAR_7 != '\0')
    {
      if (FUNC_1 (VAR_7, "JArray<", 7) == 0)
 {
   VAR_7 += 7;
   ++VAR_6;
 }
      else if (VAR_6 > 0 && *VAR_7 == '>')
 {
   while (VAR_8 > VAR_5 && VAR_8[-1] == ' ')
     --VAR_8;
   *VAR_8++ = '[';
   *VAR_8++ = ']';
   --VAR_6;
   ++VAR_7;
 }
      else
 *VAR_8++ = *VAR_7++;
    }

  *VAR_8 = '\0';

  return VAR_5;
}
