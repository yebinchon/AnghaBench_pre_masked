
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
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void FUNC_1 () ;
 scalar_t__* VAR_5 ;
 void FUNC_2 () ;
 void FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 TYPE_2__* VAR_7 ;
 void FUNC_13 () ;
 int FUNC_14 (int) ;

void
FUNC_15(int VAR_8)
{
    int VAR_9 = 0;
    void (*VAR_10)(void) = ((void*)0);





    FUNC_0(VAR_4, FUNC_7("td: recv will", VAR_8));

    if (VAR_5[VAR_8]) {
 VAR_5[VAR_8]--;
 if (VAR_5[VAR_8] && FUNC_4(VAR_8))
     VAR_5[VAR_8]--;
    }
    if (VAR_5[VAR_8] == 0) {
 if (FUNC_5(VAR_8)) {
     switch (VAR_8) {

     case 139:
  FUNC_6();
  FUNC_14(1);
  FUNC_12();
  VAR_9++;
  break;

     case 138:



  VAR_6 = 0;
  break;

     case 131:




  return;

     case 136:





  VAR_7[VAR_3].defset.flag &= ~VAR_1;
  VAR_7[VAR_3].defset.flag |= VAR_0;
  VAR_7[VAR_2].defset.flag &= ~VAR_1;
  VAR_7[VAR_2].defset.flag |= VAR_0;
     case 129:
     case 132:
     case 135:
     case 130:
     case 128:
     case 134:
     case 133:
  VAR_9++;
  break;
     default:
  break;
     }
     if (VAR_9) {
  FUNC_11(VAR_8);
  FUNC_8(VAR_8, 0);
     } else {
  VAR_5[VAR_8]++;
  FUNC_9(VAR_8, 0);
     }
 } else {





     switch (VAR_8) {
     case 138:
  VAR_6 = 0;




  FUNC_9(VAR_8, 1);
  break;
     case 136:
  VAR_10 = FUNC_3;
  break;
     }
 }
    }
    FUNC_10(VAR_8);
    if (VAR_10)
 (*VAR_10)();
}
