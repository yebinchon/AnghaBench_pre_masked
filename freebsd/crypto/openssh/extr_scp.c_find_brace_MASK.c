
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;

 *VAR_2 = *VAR_3 = -1;
 VAR_5 = VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0 && *VAR_3 < 0 && VAR_1[VAR_4] != '\0'; VAR_4++) {
  switch (VAR_1[VAR_4]) {
  case '\\':

   if (VAR_1[VAR_4 + 1] != '\0')
    VAR_4++;
   break;
  case '[':
   VAR_5 = 1;
   break;
  case ']':
   VAR_5 = 0;
   break;
  case '{':
   if (VAR_5)
    break;
   if (VAR_1[VAR_4 + 1] == '}') {

    VAR_4++;
    break;
   }
   if (*VAR_2 == -1)
    *VAR_2 = VAR_4;
   VAR_6++;
   break;
  case '}':
   if (VAR_5)
    break;
   if (*VAR_2 < 0) {

    return -1;
   }
   if (--VAR_6 <= 0)
    *VAR_3 = VAR_4;
   break;
  }
 }

 if (*VAR_3 < 0 && (*VAR_2 >= 0 || VAR_5))
  return -1;
 return 0;
}
