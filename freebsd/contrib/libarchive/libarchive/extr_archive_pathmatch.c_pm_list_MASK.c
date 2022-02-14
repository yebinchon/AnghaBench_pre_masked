
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1, const char VAR_2, int VAR_3)
{
 const char *VAR_4 = VAR_0;
 char VAR_5 = '\0', VAR_6;
 int VAR_7 = 1, VAR_8 = 0;


 (void)VAR_3;


 if ((*VAR_4 == '!' || *VAR_4 == '^') && VAR_4 < VAR_1) {
  VAR_7 = 0;
  VAR_8 = 1;
  ++VAR_4;
 }

 while (VAR_4 < VAR_1) {
  VAR_6 = '\0';
  switch (*VAR_4) {
  case '-':

   if ((VAR_5 == '\0') || (VAR_4 == VAR_1 - 1)) {
    if (*VAR_4 == VAR_2)
     return (VAR_7);
   } else {
    char VAR_9 = *++VAR_4;
    if (VAR_9 == '\\')
     VAR_9 = *++VAR_4;
    if ((VAR_5 <= VAR_2) && (VAR_2 <= VAR_9))
     return (VAR_7);
   }
   break;
  case '\\':
   ++VAR_4;

  default:
   if (*VAR_4 == VAR_2)
    return (VAR_7);
   VAR_6 = *VAR_4;
  }
  VAR_5 = VAR_6;
  ++VAR_4;
 }
 return (VAR_8);
}
