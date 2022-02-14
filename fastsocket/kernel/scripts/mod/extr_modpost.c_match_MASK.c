
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char * const VAR_1[])
{
 const char *VAR_2;
 while (*VAR_1) {
  VAR_2 = *VAR_1++;
  const char *VAR_3 = VAR_2 + FUNC_2(VAR_2) - 1;


  if (*VAR_2 == '*') {
   if (FUNC_4(VAR_0, VAR_2 + 1) == 0)
    return 1;
  }

  else if (*VAR_3 == '*') {
   if (FUNC_3(VAR_0, VAR_2, FUNC_2(VAR_2) - 1) == 0)
    return 1;
  }

  else if (*VAR_3 == '$') {
   if (FUNC_3(VAR_0, VAR_2, FUNC_2(VAR_2) - 1) == 0) {
    if (FUNC_0(VAR_0 + FUNC_2(VAR_2) - 1))
     return 1;
   }
  }

  else {
   if (FUNC_1(VAR_2, VAR_0) == 0)
    return 1;
  }
 }

 return 0;
}
