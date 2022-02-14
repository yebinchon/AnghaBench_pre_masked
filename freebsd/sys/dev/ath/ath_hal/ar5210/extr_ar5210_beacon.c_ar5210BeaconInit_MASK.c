
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ah_dma_beacon_response_time; int ah_sw_beacon_response_time; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_7__ {scalar_t__ ah_opmode; } ;
struct TYPE_6__ {int bt_nexttbtt; int bt_nextdba; int bt_nextswba; int bt_nextatim; int bt_intval; } ;
typedef TYPE_2__ HAL_BEACON_TIMERS ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ath_hal*,TYPE_2__*) ;

void
FUNC_2(struct ath_hal *VAR_4,
 uint32_t VAR_5, uint32_t VAR_6)
{
 HAL_BEACON_TIMERS VAR_7;

 VAR_7.bt_nexttbtt = VAR_5;

 if (FUNC_0(VAR_4)->ah_opmode != VAR_3) {
  VAR_7.bt_nextdba = (VAR_5 -
   VAR_4->ah_config.ah_dma_beacon_response_time) << 3;
  VAR_7.bt_nextswba = (VAR_5 -
            VAR_4->ah_config.ah_sw_beacon_response_time) << 3;
  VAR_7.bt_nextatim = VAR_5 + 0;
 } else {
  VAR_7.bt_nextdba = ~0;
  VAR_7.bt_nextswba = ~0;
  VAR_7.bt_nextatim = 1;
 }
 VAR_7.bt_intval = VAR_6 &
  (VAR_1 | VAR_2 | VAR_0);
 FUNC_1(VAR_4, &VAR_7);
}
