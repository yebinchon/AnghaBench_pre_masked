
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 while (*VAR_1 != '\0') {
  while (*VAR_1 == ',')
   ++VAR_1;
  if ((VAR_2 = FUNC_0(VAR_1, ',')) == ((void*)0))
   VAR_2 = FUNC_0(VAR_1, '\0');
  if (VAR_2 - VAR_1 == (ptrdiff_t)VAR_3 &&
      FUNC_2(VAR_1, VAR_0, VAR_3) == 0)
   return (1);
  VAR_1 = VAR_2;
 }
 return (0);
}
