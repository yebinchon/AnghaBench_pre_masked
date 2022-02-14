
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2)
{
 const char *VAR_3;

 if (VAR_2[0] != '/')
  return VAR_1;
 VAR_3 = VAR_2;
 do {
  VAR_3 = FUNC_0(VAR_3, "/.");
  if (!VAR_3)
   break;
  VAR_3 += 2;
  if (VAR_3[0] == '/' || VAR_3[0] == '\0')
   return VAR_1;
  else if (VAR_3[0] == '.') {
   if (VAR_3[1] == '/' || VAR_3[1] == '\0')
    return VAR_1;
  }
 } while (VAR_3);
 return VAR_0;
}
