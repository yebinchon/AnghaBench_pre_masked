
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_6)
{





 if (!VAR_5 || VAR_4) {
  FUNC_6("%c", VAR_6);
  if (!VAR_5)
   return;
  if (VAR_6 == '\r' || VAR_6 == '\n')
   FUNC_3();
  if (VAR_6 == '\n' && VAR_1 > 0) {
   VAR_2++;
   if (VAR_2 >= VAR_1)
    FUNC_5();
  }
  return;
 }


 if (VAR_6 > ' ' && VAR_6 <= '~') {





     FUNC_4();
     FUNC_1(VAR_6);
     FUNC_2(VAR_6);
     VAR_3++;
     VAR_0 = VAR_3;
 }
 else if (VAR_6 == '\n') {

     FUNC_1(VAR_6);
     FUNC_2(VAR_6);
     VAR_3 = 0;
     VAR_0 = 0;
     FUNC_3();
     if (VAR_1 > 0) {
      VAR_2++;
      if (VAR_2 >= VAR_1)
       FUNC_5();
     }
 }
 else if (VAR_6 == '\r') {

     FUNC_1(VAR_6);
     FUNC_2(VAR_6);
     VAR_3 = 0;
     VAR_0 = 0;
     FUNC_3();
 }
 else if (VAR_6 == '\t') {

     VAR_3 = FUNC_0(VAR_3);
 }
 else if (VAR_6 == ' ') {

     VAR_3++;
 }
 else if (VAR_6 == '\007') {

     FUNC_1(VAR_6);

 }

}
