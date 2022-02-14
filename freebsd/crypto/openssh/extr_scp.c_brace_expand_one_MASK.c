
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,int,int,int,int,char***,size_t*) ;
 scalar_t__ FUNC_1 (char const*,int*,int*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, char ***VAR_1, size_t *VAR_2,
    int *VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 *VAR_4 = *VAR_3 = 0;

 if (FUNC_1(VAR_0, &VAR_7, &VAR_8) != 0) {
  *VAR_4 = 1;
  return 0;
 } else if (VAR_7 == -1)
  return 0;

 VAR_6 = VAR_9 = 0;
 for (VAR_5 = VAR_10 = VAR_7 + 1; VAR_5 < VAR_8; VAR_5++) {
  switch (VAR_0[VAR_5]) {
  case '{':
   if (VAR_6)
    break;
   VAR_9++;
   break;
  case '}':
   if (VAR_6)
    break;
   VAR_9--;
   break;
  case '[':
   VAR_6 = 1;
   break;
  case ']':
   VAR_6 = 0;
   break;
  case '\\':
   if (VAR_5 < VAR_8 - 1)
    VAR_5++;
   break;
  }
  if (VAR_0[VAR_5] == ',' || VAR_5 == VAR_8 - 1) {
   if (VAR_6 || VAR_9 > 0)
    continue;



   VAR_11 = (VAR_5 == VAR_8 - 1) ? VAR_8 : VAR_5;
   if (FUNC_0(VAR_0, VAR_7, VAR_8,
       VAR_10, VAR_11, VAR_1, VAR_2) != 0)
    return -1;

   VAR_10 = VAR_5 + 1;
   continue;
  }
 }
 if (VAR_6 || VAR_9 > 0) {
  *VAR_4 = 1;
  return 0;
 }

 *VAR_3 = 1;
 return 0;
}
