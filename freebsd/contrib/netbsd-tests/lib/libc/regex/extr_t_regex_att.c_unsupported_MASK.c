
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 static const char *VAR_1[] = {
 };

 if (VAR_0 == ((void*)0))
  return 0;

 while (*VAR_0 == '#' || FUNC_1((unsigned char)*VAR_0))
  VAR_0++;

 for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_2(VAR_1[VAR_2], VAR_0) == 0)
   return 1;
 return 0;
}
