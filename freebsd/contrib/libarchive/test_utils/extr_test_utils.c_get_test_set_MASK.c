
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_list_t {char* name; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

int FUNC_1(int *VAR_0, int VAR_1, const char *VAR_2,
 struct test_list_t *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0)) {

  for (;VAR_6 < VAR_1; VAR_6++)
   VAR_0[VAR_6] = VAR_6;
  return (VAR_1);
 }
 if (*VAR_2 >= '0' && *VAR_2 <= '9') {
  const char *VAR_7 = VAR_2;
  VAR_4 = 0;
  while (*VAR_7 >= '0' && *VAR_7 <= '9') {
   VAR_4 *= 10;
   VAR_4 += *VAR_7 - '0';
   ++VAR_7;
  }
  if (*VAR_7 == '\0') {
   VAR_5 = VAR_4;
  } else if (*VAR_7 == '-') {
   ++VAR_7;
   if (*VAR_7 == '\0') {
    VAR_5 = VAR_1 - 1;
   } else {
    VAR_5 = 0;
    while (*VAR_7 >= '0' && *VAR_7 <= '9') {
     VAR_5 *= 10;
     VAR_5 += *VAR_7 - '0';
     ++VAR_7;
    }
   }
  } else
   return (-1);
  if (VAR_4 < 0 || VAR_5 >= VAR_1 || VAR_4 > VAR_5)
   return (-1);
  while (VAR_4 <= VAR_5)
   VAR_0[VAR_6++] = VAR_4++;
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   const char *VAR_8 = VAR_3[VAR_4].name;
   if (FUNC_0(VAR_2, VAR_8))
    VAR_0[VAR_6++] = VAR_4;
  }
 }
 return ((VAR_6 == 0)?-1:VAR_6);
}
