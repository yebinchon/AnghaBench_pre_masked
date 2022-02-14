
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int const) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int ) ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_13(int VAR_14)
{




    FUNC_0(VAR_5, FUNC_6("td: recv wont", VAR_14));

    if (VAR_6[VAR_14]) {
 VAR_6[VAR_14]--;
 if (VAR_6[VAR_14] && FUNC_3(VAR_14))
     VAR_6[VAR_14]--;
    }
    if (VAR_6[VAR_14] == 0) {
 if (FUNC_4(VAR_14)) {

     switch (VAR_14) {
     case 135:
  VAR_8 = 1;
  break;

     case 136:
  FUNC_5();
  FUNC_12(0);
  FUNC_10();
  break;

     case 131:






  FUNC_9(131);
  return;

     case 134:





  VAR_10[VAR_4].defset.flag &= ~VAR_2;
  VAR_10[VAR_4].defset.flag |= VAR_1;
  VAR_10[VAR_3].defset.flag &= ~VAR_2;
  VAR_10[VAR_3].defset.flag |= VAR_1;
  break;
     case 129:
  FUNC_11(VAR_12);
  break;

     case 130:
  FUNC_11(VAR_11);
  break;

     case 128:
  FUNC_11(VAR_13);
  break;

     case 132:
  FUNC_11(VAR_9);
  break;

     case 133:
  FUNC_11(VAR_7);
  break;

     default:
  break;
     }
     FUNC_9(VAR_14);
     if (FUNC_2(VAR_14))
  FUNC_7(VAR_14, 0);
 } else {
     switch (VAR_14) {
     case 131:
  break;






     default:
  break;
     }
 }
    }
    FUNC_8(VAR_14);

}
