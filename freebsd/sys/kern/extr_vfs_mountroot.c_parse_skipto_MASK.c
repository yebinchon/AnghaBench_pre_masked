
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (char**) ;

__attribute__((used)) static int
FUNC_2(char **VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 while (1) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4 == 0)
   return (VAR_0);
  switch (VAR_3) {
  case 128:
   VAR_5 = (VAR_4 == ' ' || VAR_4 == '\t' || VAR_4 == '\n') ? 1 : 0;
   break;
  case 129:
   if (VAR_4 == '\n')
    return (VAR_1);
   VAR_5 = (VAR_4 != ' ' && VAR_4 != '\t') ? 1 : 0;
   break;
  default:
   VAR_5 = (VAR_4 == VAR_3) ? 1 : 0;
   break;
  }
  if (VAR_5)
   break;
  FUNC_0(VAR_2);
 }
 return (0);
}
