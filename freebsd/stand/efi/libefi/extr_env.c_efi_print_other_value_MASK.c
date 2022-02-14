
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int UINTN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(uint8_t *VAR_2, UINTN VAR_3)
{
 UINTN VAR_4;
 bool VAR_5 = 1;

 FUNC_1(" = ");
 for (VAR_4 = 0; VAR_4 < VAR_3 - 1; VAR_4++) {




  if ((VAR_2[VAR_4] < 32 || VAR_2[VAR_4] > 126)
      && VAR_2[VAR_4] != 9 && VAR_2[VAR_4] != 10 && VAR_2[VAR_4] != 13) {
   VAR_5 = 0;
   break;
  }
 }
 if (VAR_2[VAR_3 - 1] != '\0')
  VAR_5 = 0;
 if (VAR_5 == 1) {
  FUNC_1("%s", VAR_2);
  if (FUNC_0("\n"))
   return (VAR_1);
 } else {
  if (FUNC_0("\n"))
   return (VAR_1);



  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   FUNC_1("%02x ", VAR_2[VAR_4]);
   if ((VAR_4 + 1) % 4 == 0)
    FUNC_1(" ");
   if ((VAR_4 + 1) % 20 == 0) {
    if (FUNC_0("\n"))
     return (VAR_1);
   }
  }
  if (FUNC_0("\n"))
   return (VAR_1);
 }

 return (VAR_0);
}
