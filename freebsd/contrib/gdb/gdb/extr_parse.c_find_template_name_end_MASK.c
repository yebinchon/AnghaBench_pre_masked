
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0 (char *VAR_0)
{
  int VAR_1 = 1;
  int VAR_2 = 0;
  int VAR_3 = 0;
  int VAR_4 = 0;

  if (!VAR_0 || (*VAR_0 != '<'))
    return 0;

  while (*++VAR_0)
    {
      switch (*VAR_0)
 {
 case '\'':
 case '\"':
 case '{':
 case '}':

   return 0;
 case '<':
   VAR_1++;
   if (VAR_3 || VAR_2 || VAR_4)
     return 0;
   break;
 case '>':
   if (VAR_3 || VAR_2)
     return 0;
   VAR_2 = 1;
   if (--VAR_1 == 0)
     return ++VAR_0;
   break;
 case ':':
   if (VAR_4 || (VAR_3 > 1))
     return 0;
   VAR_3++;
   break;
 case ' ':
   break;
 default:
   if (!((*VAR_0 >= 'a' && *VAR_0 <= 'z') ||
  (*VAR_0 >= 'A' && *VAR_0 <= 'Z') ||
  (*VAR_0 >= '0' && *VAR_0 <= '9') ||
  (*VAR_0 == '_') || (*VAR_0 == ',') ||
  (*VAR_0 == '&') || (*VAR_0 == '*') ||
  (*VAR_0 == '(') || (*VAR_0 == ')') ||
  (*VAR_0 == '[') || (*VAR_0 == ']')))
     return 0;
 }
      if (*VAR_0 != ' ')
 VAR_4 = 0;
      if (*VAR_0 != ':')
 VAR_3 = 0;
      if (*VAR_0 != '>')
 VAR_2 = 0;
    }
  return 0;
}
