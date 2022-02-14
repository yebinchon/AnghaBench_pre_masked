
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ath_hal_5212 {int ah_rfgainState; scalar_t__ ah_txPowerIndexOffset; scalar_t__ ah_ofdmTxPower; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3(struct ath_hal *VAR_4)
{
 struct ath_hal_5212 *VAR_5 = FUNC_0(VAR_4);
 uint32_t VAR_6;


 VAR_6 = VAR_5->ah_ofdmTxPower + VAR_5->ah_txPowerIndexOffset;
 FUNC_1(VAR_4, VAR_0,
    FUNC_2(VAR_6, VAR_2)
  | VAR_1);

 VAR_5->ah_rfgainState = VAR_3;
}
