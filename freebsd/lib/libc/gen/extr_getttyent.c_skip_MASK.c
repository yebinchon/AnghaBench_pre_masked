
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_0(char *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_5 = 0, VAR_3 = VAR_2; (VAR_4 = *VAR_2) != '\0'; VAR_2++) {
  if (VAR_4 == '"') {
   VAR_5 ^= VAR_0;
   continue;
  }
  if (VAR_5 == VAR_0 && *VAR_2 == '\\' && *(VAR_2+1) == '"')
   VAR_2++;
  *VAR_3++ = *VAR_2;
  if (VAR_5 == VAR_0)
   continue;
  if (VAR_4 == '#') {
   VAR_1 = VAR_4;
   *VAR_2 = 0;
   break;
  }
  if (VAR_4 == '\t' || VAR_4 == ' ' || VAR_4 == '\n') {
   VAR_1 = VAR_4;
   *VAR_2++ = 0;
   while ((VAR_4 = *VAR_2) == '\t' || VAR_4 == ' ' || VAR_4 == '\n')
    VAR_2++;
   break;
  }
 }
 *--VAR_3 = '\0';
 return (VAR_2);
}
