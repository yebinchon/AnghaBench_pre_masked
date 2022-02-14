
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,size_t,char*,...) ;
 int FUNC_1 (char*) ;

int
FUNC_2(int VAR_5, char *VAR_6[], mode_t *VAR_7, size_t VAR_8,
    char *VAR_9)
{
 int VAR_10;

 if (VAR_5 == 0) {
  FUNC_0(VAR_9, VAR_8, "mode expects mode value");
  return (-1);
 }

 if (VAR_5 != 1) {
  FUNC_0(VAR_9, VAR_8, "'%s' unexpected", VAR_6[1]);
  return (-1);
 }

 *VAR_7 = 0;
 for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_6[0]); VAR_10++) {
  switch (VAR_6[0][VAR_10]) {
  case 'a':
   *VAR_7 |= VAR_0;
   break;
  case 'r':
   *VAR_7 |= VAR_2;
   break;
  case 's':
   *VAR_7 |= VAR_3;
   break;
  case 'w':
   *VAR_7 |= VAR_4;
   break;
  case 'x':
   *VAR_7 |= VAR_1;
   break;
  case 'n':

   break;
  default:
   FUNC_0(VAR_9, VAR_8, "Unknown mode letter: %c",
       VAR_6[0][VAR_10]);
   return (-1);
  }
 }

 return (0);
}
