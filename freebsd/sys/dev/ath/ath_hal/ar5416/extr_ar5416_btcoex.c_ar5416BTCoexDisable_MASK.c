
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5416 {scalar_t__ ah_btCoexSingleAnt; int ah_btCoexEnabled; int ah_wlanActiveGpioSelect; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int VAR_12 ;
 int FUNC_3 (struct ath_hal*,int ,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int ) ;

void
FUNC_8(struct ath_hal *VAR_13)
{
 struct ath_hal_5416 *VAR_14 = FUNC_0(VAR_13);


 FUNC_7(VAR_13, VAR_14->ah_wlanActiveGpioSelect, 0);
 FUNC_6(VAR_13, VAR_14->ah_wlanActiveGpioSelect,
     VAR_12);

 if (FUNC_1(VAR_13)) {




  FUNC_5(VAR_13, VAR_14->ah_wlanActiveGpioSelect);
 }

 if (VAR_14->ah_btCoexSingleAnt == VAR_1) {
  FUNC_3(VAR_13, VAR_10, VAR_11,
      1);
  FUNC_3(VAR_13, VAR_8, VAR_9,
      0);
 }

 FUNC_4(VAR_13, VAR_2, VAR_7 | VAR_6);
 FUNC_4(VAR_13, VAR_4, 0);
 if (FUNC_2(VAR_13))
  FUNC_4(VAR_13, VAR_5, 0);
 FUNC_4(VAR_13, VAR_3, 0);

 VAR_14->ah_btCoexEnabled = VAR_0;
}
