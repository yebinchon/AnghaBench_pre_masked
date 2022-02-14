
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;

int
FUNC_3(char VAR_3[VAR_0], FILE *VAR_4)
{
 static char VAR_5 = ' ';
 int VAR_6 = 0;

 for (;;) {

  while (FUNC_2(VAR_5) && !FUNC_0(VAR_4))
   VAR_5 = FUNC_1(VAR_4);

  if (VAR_5 == '#')
   while (!FUNC_0(VAR_4)) {
    VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == '\n')
     break;
   }
  else
   break;
 }
 if (FUNC_0(VAR_4)) {
  VAR_5 = ' ';
  return (0);
 }
 do {
  if (VAR_6 < VAR_0)
   VAR_3[VAR_6++] = VAR_5;
  VAR_5 = FUNC_1(VAR_4);
 } while (!FUNC_0(VAR_4) && !FUNC_2(VAR_5));
 if (VAR_6 >= VAR_0) {
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_3[VAR_6] = '\0';
 return (1);
}
