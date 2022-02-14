
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(void)
{
 for (;;) {
  int VAR_3;
  int VAR_4;

  FUNC_3(VAR_2);






  for (;;) {
   VAR_3 = FUNC_5();
   if (VAR_3 < 0) {
    return -1;
   }
   if (FUNC_6(VAR_3)) {
    continue;
   }
   if (VAR_3 == ';') {
    for (;;) {
     VAR_3 = FUNC_5();
     if (VAR_3 < 0) {
      return -1;
     }
     if (VAR_3 == '\n') {
      break;
     }
    }
    continue;
   }
   break;
  }





  VAR_1 = VAR_0;
  VAR_4 = (VAR_3 == '\\');
  FUNC_0(VAR_2, VAR_3);
  for (;;) {
   VAR_3 = FUNC_5();
   if (VAR_3 < 0) {
    break;
   }
   if (VAR_4) {
    if (VAR_3 == '\n') {
     FUNC_4(VAR_2,
      FUNC_2(VAR_2) - 1);
    }
    VAR_4 = 0;
    continue;
   }
   if (VAR_3 == '\n') {
    break;
   } else if (VAR_3 == '\\') {
    VAR_4 = 1;
   }
   FUNC_0(VAR_2, VAR_3);
  }




  for (;;) {
   size_t VAR_5;

   VAR_5 = FUNC_2(VAR_2);
   if (VAR_5 == 0 || !FUNC_6(
    FUNC_1(VAR_2)[VAR_5 - 1]))
   {
    break;
   }
   FUNC_4(VAR_2, VAR_5 - 1);
  }






  if (FUNC_2(VAR_2) > 0) {
   return 0;
  }
 }
}
