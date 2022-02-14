
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0)
{
 char VAR_1[16];
 char *VAR_2;
 const char *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_0[0] == '\0'
     || FUNC_1(VAR_0) > 15)
  return (VAR_0);


 VAR_2 = VAR_1;
 VAR_3 = VAR_0;
 while (*VAR_3) {
  char VAR_4 = *VAR_3++;
  if (VAR_4 >= 'a' && VAR_4 <= 'z')
   VAR_4 -= 'a' - 'A';
  *VAR_2++ = VAR_4;
 }
 *VAR_2++ = '\0';

 if (FUNC_0(VAR_1, "UTF-8") == 0 ||
     FUNC_0(VAR_1, "UTF8") == 0)
  return ("UTF-8");
 if (FUNC_0(VAR_1, "UTF-16BE") == 0 ||
     FUNC_0(VAR_1, "UTF16BE") == 0)
  return ("UTF-16BE");
 if (FUNC_0(VAR_1, "UTF-16LE") == 0 ||
     FUNC_0(VAR_1, "UTF16LE") == 0)
  return ("UTF-16LE");
 if (FUNC_0(VAR_1, "CP932") == 0)
  return ("CP932");
 return (VAR_0);
}
