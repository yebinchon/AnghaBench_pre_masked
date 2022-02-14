
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
struct TYPE_7__ {int ah_opmode; } ;
struct TYPE_6__ {int bt_nexttbtt; int bt_flags; int bt_nextdba; int bt_nextswba; int bt_nextatim; int bt_intval; } ;
typedef TYPE_2__ HAL_BEACON_TIMERS ;


 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,TYPE_2__*) ;

void
FUNC_3(struct ath_hal *VAR_9,
 uint32_t VAR_10, uint32_t VAR_11)
{
 HAL_BEACON_TIMERS VAR_12;

 VAR_12.bt_nexttbtt = VAR_10;






 VAR_12.bt_flags = 0;
 switch (FUNC_0(VAR_9)->ah_opmode) {
 case 128:
 case 129:
  VAR_12.bt_nextdba = 0xffff;
  VAR_12.bt_nextswba = 0x7ffff;
  VAR_12.bt_flags |= VAR_6;
  break;
 case 130:
  FUNC_1(VAR_9, VAR_7, VAR_8);
  VAR_12.bt_flags |= VAR_4;

 case 131:
  VAR_12.bt_nextdba = (VAR_10 -
      VAR_9->ah_config.ah_dma_beacon_response_time) << 3;
  VAR_12.bt_nextswba = (VAR_10 -
      VAR_9->ah_config.ah_sw_beacon_response_time) << 3;
  VAR_12.bt_flags |= VAR_6
       | VAR_3
       | VAR_5;
  break;
 }






 VAR_12.bt_nextatim = VAR_10 + 1;
 VAR_12.bt_intval = VAR_11 &
  (VAR_1 | VAR_2 | VAR_0);
 FUNC_2(VAR_9, &VAR_12);
}
