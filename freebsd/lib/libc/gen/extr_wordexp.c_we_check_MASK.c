
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_2)
{
 char VAR_3;

 bool VAR_4 = 0, VAR_5 = 0;

 bool VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 bool VAR_9 = 0;

 bool VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 bool VAR_13 = 0, VAR_14 = 0;

 while ((VAR_3 = *VAR_2++) != '\0') {
  switch (VAR_3) {
  case '\\':
   VAR_4 = !VAR_4;
   continue;
  case '$':
   if (VAR_4)
    VAR_4 = 0;
   else
    VAR_5 = !VAR_5;
   continue;
  case '\'':
   if (!VAR_4 && !VAR_6 && !VAR_7)
    VAR_10 = 1;
   else
    VAR_10 = 0;
   VAR_6 = 1;
   break;
  case '"':
   if (!VAR_4 && !VAR_6 && !VAR_7)
    VAR_11 = 1;
   else
    VAR_11 = 0;
   VAR_7 = 1;
   break;
  case '`':
   if (!VAR_4 && !VAR_6 && !VAR_9)
    VAR_13 = 1;
   else
    VAR_13 = 0;
   VAR_9 = 1;
   break;
  case '{':
   if (!VAR_4 && !VAR_5 && !VAR_6 && !VAR_7 &&
       !VAR_9)
    return (VAR_0);
   if (VAR_5) {
    if (!VAR_4 && !VAR_6)
     VAR_12 = 1;
    VAR_8 = 1;
   }
   break;
  case '}':
   if (!VAR_4 && !VAR_6 && !VAR_7 && !VAR_8 &&
       !VAR_9)
    return (VAR_0);
   VAR_12 = 0;
   break;
  case '(':
   if (!VAR_4 && !VAR_5 && !VAR_6 && !VAR_7 &&
       !VAR_9)
    return (VAR_0);
   if (VAR_5) {
    if (!VAR_4 && !VAR_6)
     VAR_14 = 1;
    VAR_9 = 1;
   }
   break;
  case ')':
   if (!VAR_4 && !VAR_6 && !VAR_7 && !VAR_9)
    return (VAR_0);
   VAR_14 = 0;
   break;
  case '|': case '&': case ';': case '<': case '>': case '\n':
   if (!VAR_4 && !VAR_6 && !VAR_7 && !VAR_9)
    return (VAR_0);
   break;
  default:
   break;
  }
  VAR_4 = VAR_5 = 0;
 }
 if (VAR_4 || VAR_5 || VAR_10 || VAR_11 || VAR_12 ||
     VAR_13 || VAR_14)
  return (VAR_1);

 return (0);
}
