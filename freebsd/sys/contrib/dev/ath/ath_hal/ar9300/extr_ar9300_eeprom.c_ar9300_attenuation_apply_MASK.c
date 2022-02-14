
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int16_t ;
struct TYPE_3__ {scalar_t__ ath_hal_min_gainidx; scalar_t__ ath_hal_ext_atten_margin_cfg; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_4__ {int ah_rx_chainmask; int ah_tx_chainmask; } ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int,int ,int) ;
 int FUNC_4 (struct ath_hal*,int,int ) ;
 int FUNC_5 (struct ath_hal*,int,int ) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_5, u_int16_t VAR_6)
{
 int VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9[3] = {
     VAR_0,
     VAR_1,
     VAR_2
 };
 if (FUNC_1(VAR_5) && (FUNC_0(VAR_5)->ah_rx_chainmask == 0x2)) {
  VAR_8 = FUNC_4(VAR_5, 1, VAR_6);
  FUNC_3(VAR_5, VAR_9[0],
      VAR_3, VAR_8);
  VAR_8 = FUNC_5(VAR_5, 1, VAR_6);
  FUNC_3(VAR_5, VAR_9[0],
      VAR_4, VAR_8);
 }





 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if ((FUNC_0(VAR_5)->ah_tx_chainmask & (1 << VAR_7)) == 0)
   continue;

  VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6);
  FUNC_3(VAR_5, VAR_9[VAR_7],
      VAR_3,
      VAR_8);

  if (FUNC_2(VAR_5) &&
      (FUNC_6(VAR_5) == 0) &&
      VAR_5->ah_config.ath_hal_ext_atten_margin_cfg) {
   VAR_8 = 5;
  } else {
   VAR_8 = FUNC_5(VAR_5, 0,
       VAR_6);
  }





  if (VAR_5->ah_config.ath_hal_min_gainidx)
   FUNC_3(VAR_5,
       VAR_0,
       VAR_4,
       VAR_8);

  FUNC_3(VAR_5,
      VAR_9[VAR_7],
      VAR_4,
      VAR_8);
 }

 return (0);
}
