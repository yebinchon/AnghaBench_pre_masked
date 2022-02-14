
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {TYPE_1__ defset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;







 int const VAR_10 ;




 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int const,int ,int ) ;
 scalar_t__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int const,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int const) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 TYPE_2__* VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int ) ;
 int VAR_19 ;
 int VAR_20 ;

void
FUNC_15(int VAR_21)
{




 FUNC_0(VAR_9, FUNC_7("td: recv wont", VAR_21));

 if (VAR_12[VAR_21]) {
  VAR_12[VAR_21]--;
  if (VAR_12[VAR_21] && FUNC_4(VAR_21))
   VAR_12[VAR_21]--;
 }
 if (VAR_12[VAR_21] == 0) {
     if (FUNC_5(VAR_21)) {

  switch (VAR_21) {
  case 136:
   VAR_15 = 1;
   break;

  case 137:
   FUNC_6();
   FUNC_14(0);
   FUNC_12();
   break;
  case 131:






   FUNC_11(131);
   return;

  case 135:





   VAR_17[VAR_8].defset.flag &= ~VAR_6;
   VAR_17[VAR_8].defset.flag |= VAR_5;
   VAR_17[VAR_7].defset.flag &= ~VAR_6;
   VAR_17[VAR_7].defset.flag |= VAR_5;
   break;
  case 129:
   FUNC_13(VAR_19);
   break;

  case 130:
   FUNC_13(VAR_18);
   break;

  case 128:
   FUNC_13(VAR_20);
   break;

  case 132:
   FUNC_13(VAR_16);
   break;

  case 133:
   FUNC_13(VAR_13);
   break;

  default:
   break;
  }
  FUNC_11(VAR_21);
  if (FUNC_3(VAR_21))
   FUNC_8(VAR_21, 0);
     } else {
  switch (VAR_21) {
  case 131:
   break;






  default:
   break;
  }
     }
 }
 FUNC_10(VAR_21);

}
