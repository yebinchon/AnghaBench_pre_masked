
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 const char *VAR_4 = VAR_0;
 const char *VAR_5 = VAR_1;

 if (VAR_4[0] == '^')
 {
  VAR_3 = 1;
  VAR_4++;
 }

 while (1)
 {
  if (VAR_4[0] == '\\')
   VAR_4++;
  else if (VAR_4[0] == '*')
  {
   while (VAR_4[0] == '*')
    VAR_4++;
   if (VAR_4[0] == '\\')
    VAR_4++;
   if ((VAR_5 = FUNC_0(VAR_5, VAR_4[0])) == 0)
    break;
  }
  if (VAR_4[0] != VAR_5[0])
   break;
  if (VAR_4[0] == '\0') {
   VAR_2 = 1;
   break;
  }
  VAR_4++;
  VAR_5++;
 }

 return (VAR_3) ? !VAR_2 : VAR_2;
}
