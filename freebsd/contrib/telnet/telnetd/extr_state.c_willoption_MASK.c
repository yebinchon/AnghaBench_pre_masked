
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {TYPE_1__ defset; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void FUNC_1 () ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__* VAR_11 ;
 void FUNC_3 () ;
 void FUNC_4 () ;
 void FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 TYPE_2__* VAR_14 ;
 void FUNC_16 () ;
 int FUNC_17 (int) ;

void
FUNC_18(int VAR_15)
{
 int VAR_16 = 0;
 void (*VAR_17)(void) = 0;





 FUNC_0(VAR_8, FUNC_9("td: recv will", VAR_15));

 if (VAR_11[VAR_15]) {
  VAR_11[VAR_15]--;
  if (VAR_11[VAR_15] && FUNC_6(VAR_15))
   VAR_11[VAR_15]--;
 }
 if (VAR_11[VAR_15] == 0) {
     if (FUNC_7(VAR_15)) {
  switch (VAR_15) {

  case 140:
   FUNC_8();
   FUNC_17(1);
   FUNC_15();
   VAR_16++;
   break;

  case 139:



   VAR_13 = 0;
   break;

  case 131:
   return;

  case 137:





   VAR_14[VAR_7].defset.flag &= ~VAR_5;
   VAR_14[VAR_7].defset.flag |= VAR_4;
   VAR_14[VAR_6].defset.flag &= ~VAR_5;
   VAR_14[VAR_6].defset.flag |= VAR_4;
  case 129:
  case 132:
  case 135:
  case 130:
  case 128:
  case 134:
  case 133:
   VAR_16++;
   break;
  default:
   break;
  }
  if (VAR_16) {
   FUNC_14(VAR_15);
   FUNC_10(VAR_15, 0);
  } else {
   VAR_11[VAR_15]++;
   FUNC_11(VAR_15, 0);
  }
     } else {





  switch (VAR_15) {
  case 139:
   VAR_13 = 0;




   FUNC_11(VAR_15, 1);
   break;
  case 137:
   VAR_17 = FUNC_5;
   break;
  }
     }
 }
 FUNC_13(VAR_15);
 if (VAR_17)
  (*VAR_17)();
}
