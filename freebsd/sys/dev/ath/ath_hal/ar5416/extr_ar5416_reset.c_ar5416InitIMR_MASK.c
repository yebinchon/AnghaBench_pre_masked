
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_5212 {int ah_maskReg; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_OPMODE ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_19, HAL_OPMODE VAR_20)
{
 struct ath_hal_5212 *VAR_21 = FUNC_0(VAR_19);







        VAR_21->ah_maskReg = VAR_11 | VAR_13
   | VAR_3 | VAR_7
                        | VAR_1;




 VAR_21->ah_maskReg |= VAR_6;

 VAR_21->ah_maskReg |= VAR_12;

 if (VAR_20 == VAR_18)
  VAR_21->ah_maskReg |= VAR_2;
 FUNC_3(VAR_19, VAR_0, VAR_21->ah_maskReg);
}
