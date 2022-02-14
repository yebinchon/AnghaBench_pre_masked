
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 const char *VAR_1;


 if (FUNC_0(VAR_0, '.') == 0 || FUNC_1(VAR_0) > 255)
  return 0;
 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  if (*VAR_1 >= 'a' && *VAR_1 <= 'z')
   continue;
  if (*VAR_1 >= 'A' && *VAR_1 <= 'Z')
   continue;
  if (*VAR_1 >= '0' && *VAR_1 <= '9')
   continue;
  if (*VAR_1 == '-' || *VAR_1 == '.' || *VAR_1 == '_')
   continue;
  return 0;
 }
 return 1;
}
