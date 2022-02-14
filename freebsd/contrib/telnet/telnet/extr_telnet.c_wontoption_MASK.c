
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void
FUNC_8(int VAR_4)
{
 if (VAR_0[VAR_4]) {
     --VAR_0[VAR_4];
     if (VAR_0[VAR_4] && FUNC_1(VAR_4))
  --VAR_0[VAR_4];
 }

 if ((VAR_0[VAR_4] == 0) && FUNC_2(VAR_4)) {

     switch (VAR_4) {







     case 130:
  FUNC_7(VAR_3);
  break;

     case 128:
  if (VAR_1)
      VAR_1 = 0;
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
  return;

     default:
  break;
     }
     FUNC_5(VAR_4);
     if (FUNC_0(VAR_4))
  FUNC_3(VAR_4, 0);
     FUNC_6(0);
 } else if (VAR_4 == 128) {



     if (VAR_1)
  VAR_1 = 0;
     FUNC_5(VAR_4);
 }
 FUNC_4(VAR_4);
}
