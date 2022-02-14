
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void
FUNC_12(int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3[VAR_4]) {
     --VAR_3[VAR_4];
     if (VAR_3[VAR_4] && FUNC_1(VAR_4))
  --VAR_3[VAR_4];
 }

 if (VAR_3[VAR_4] == 0) {
   if (FUNC_2(VAR_4)) {

     switch (VAR_4) {

     case 131:




  FUNC_4(VAR_4, 0);
  FUNC_9(131);
  FUNC_7(131);
  return;

     case 140:
     case 135:
     case 130:
     case 137:
     case 129:
     case 132:



  VAR_5 = 1;
  break;

     case 134:
  VAR_5 = 1;
  break;
     case 128:
  if (FUNC_0((unsigned char *)"DISPLAY"))
      VAR_5 = 1;
  break;

     case 136:




  FUNC_8(136);
  FUNC_4(VAR_4, 0);
  FUNC_6(136);
  FUNC_11();
  return;

     case 139:
     default:
  break;
     }

     if (VAR_5) {
  FUNC_8(VAR_4);
  FUNC_4(VAR_4, 0);
  FUNC_10(0);
     } else {
  VAR_3[VAR_4]++;
  FUNC_5(VAR_4, 0);
     }
   } else {




     switch (VAR_4) {
     case 136:




  FUNC_6(VAR_4);
  FUNC_11();
  FUNC_3(132, 0);
  return;
     }
   }
 }
 FUNC_6(VAR_4);
}
