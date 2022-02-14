
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;


 if (FUNC_1(VAR_0, VAR_1) == 0)
  return (1);

 if (FUNC_2(VAR_0, "no", 2) == 0 && FUNC_1(VAR_0 + 2, VAR_1) == 0)
  return (1);

 if (FUNC_2(VAR_1, "no", 2) == 0 && FUNC_1(VAR_0, VAR_1 + 2) == 0)
  return (1);
 while ((VAR_2 = FUNC_0(VAR_0, '.')) != ((void*)0) &&
     !FUNC_2(VAR_0, VAR_1, ++VAR_2 - VAR_0)) {
  VAR_1 += VAR_2 - VAR_0;
  VAR_0 = VAR_2;

  if (FUNC_2(VAR_0, "no", 2) == 0 && FUNC_1(VAR_0 + 2, VAR_1) == 0)
   return (1);

  if (FUNC_2(VAR_1, "no", 2) == 0 && FUNC_1(VAR_0, VAR_1 + 2) == 0)
   return (1);
 }

 if ((FUNC_3(VAR_0) || FUNC_4(VAR_0)) &&
     (FUNC_3(VAR_1) || FUNC_4(VAR_1)))
  return (1);
 return (0);
}
