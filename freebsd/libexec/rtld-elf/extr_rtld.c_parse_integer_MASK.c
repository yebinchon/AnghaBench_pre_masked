
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
 static const int VAR_1 = 10;
 const char *VAR_2;
 int VAR_3;
 char VAR_4;

 VAR_2 = VAR_0;
 VAR_3 = 0;
 for (VAR_4 = *VAR_0; VAR_4 != '\0'; VAR_4 = *++VAR_0) {
  if (VAR_4 < '0' || VAR_4 > '9')
   return (-1);

  VAR_3 *= VAR_1;
  VAR_3 += VAR_4 - '0';
 }


 if (VAR_0 == VAR_2)
  return (-1);
 return (VAR_3);
}
