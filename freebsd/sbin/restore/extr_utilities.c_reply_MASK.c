
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 char FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_3(char *VAR_5)
{
 int VAR_6;

 do {
  FUNC_1(VAR_3, "%s? [yn] ", VAR_5);
  (void) FUNC_0(VAR_3);
  VAR_6 = FUNC_2(VAR_4);
  while (VAR_6 != '\n' && FUNC_2(VAR_4) != '\n')
   if (VAR_6 == VAR_0)
    return (VAR_1);
 } while (VAR_6 != 'y' && VAR_6 != 'n');
 if (VAR_6 == 'y')
  return (VAR_2);
 return (VAR_1);
}
