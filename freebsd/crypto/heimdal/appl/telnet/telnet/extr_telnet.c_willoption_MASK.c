
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0[VAR_3]) {
     --VAR_0[VAR_3];
     if (VAR_0[VAR_3] && FUNC_1(VAR_3))
  --VAR_0[VAR_3];
 }

 if ((VAR_0[VAR_3] == 0) && FUNC_2(VAR_3)) {

     switch (VAR_3) {

     case 133:
     case 134:
     case 130:
  FUNC_10(VAR_2);

     case 129:






  VAR_4 = 1;
  break;

     case 128:
  if (VAR_1)
      VAR_1 = 0;




  FUNC_8(VAR_3);
  FUNC_6(VAR_3);
  return;

     case 131:
     default:
  break;
     }

     if (VAR_4) {
  FUNC_7(VAR_3);
  FUNC_3(VAR_3, 0);
  FUNC_9(0);
     } else {
  VAR_0[VAR_3]++;
  FUNC_4(VAR_3, 0);
     }
 }
 FUNC_5(VAR_3);




}
