
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal_5416 {int ah_btCoexMode; int ah_btCoexWLANWeight; int ah_btCoexBTWeight; int ah_btCoexMode2; int ah_btCoexFlag; scalar_t__ ah_btCoexSingleAnt; scalar_t__ ah_btCoexConfigType; int ah_btActiveGpioSelect; scalar_t__ ah_btCoexEnabled; int ah_wlanActiveGpioSelect; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int,int) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct ath_hal*,int ,int ) ;

int
FUNC_9(struct ath_hal *VAR_20)
{
 struct ath_hal_5416 *VAR_21 = FUNC_0(VAR_20);


 FUNC_6(VAR_20, VAR_3, VAR_21->ah_btCoexMode);
 FUNC_6(VAR_20, VAR_5,
     FUNC_7(VAR_21->ah_btCoexWLANWeight & 0xFFFF, VAR_7) |
     FUNC_7(VAR_21->ah_btCoexBTWeight & 0xFFFF, VAR_2));
 if (FUNC_2(VAR_20)) {
 FUNC_6(VAR_20, VAR_6,
     FUNC_7(VAR_21->ah_btCoexWLANWeight >> 16, VAR_7));
 }
 FUNC_6(VAR_20, VAR_4, VAR_21->ah_btCoexMode2);


 if (FUNC_1(VAR_20)) {
  uint32_t VAR_22;

  VAR_22 = FUNC_3(VAR_20, VAR_1);
  VAR_22 &= 0xFFFFFEFF;
  FUNC_6(VAR_20, VAR_1, VAR_22);
 }

 if (VAR_21->ah_btCoexFlag & VAR_15)
  FUNC_6(VAR_20, VAR_13, VAR_17);
 else
  FUNC_6(VAR_20, VAR_13, VAR_16);

 if (VAR_21->ah_btCoexSingleAnt == VAR_0) {
  FUNC_5(VAR_20, VAR_11,
      VAR_12, 1);

  FUNC_5(VAR_20, VAR_9,
      VAR_10, 1);
 } else {
  FUNC_5(VAR_20, VAR_11,
      VAR_12, 1);

  FUNC_5(VAR_20, VAR_9,
      VAR_10, 0);
 }

 if (VAR_21->ah_btCoexConfigType == VAR_14) {

  FUNC_8(VAR_20, VAR_21->ah_wlanActiveGpioSelect,
      VAR_19);
 } else {




  FUNC_8(VAR_20, VAR_21->ah_wlanActiveGpioSelect,
      VAR_18);
 }





 FUNC_4(VAR_20, VAR_8,
     (0x2 << (VAR_21->ah_btActiveGpioSelect * 2)),
     (0x3 << (VAR_21->ah_btActiveGpioSelect * 2)));

 VAR_21->ah_btCoexEnabled = VAR_0;

 return (0);
}
