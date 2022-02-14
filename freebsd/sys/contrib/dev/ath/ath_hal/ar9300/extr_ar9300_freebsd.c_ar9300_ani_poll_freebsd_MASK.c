
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int survey ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int stats ;
typedef int anistats ;
struct TYPE_8__ {int rxframecnt_diff; int rx_busy; int txframecnt_diff; int tx_busy; int extrxclr_cnt; int ext_chan_busy; int rxclr_cnt; int chan_busy; int cyclecnt_diff; int cycle_count; scalar_t__ valid; } ;
typedef TYPE_1__ HAL_SURVEY_SAMPLE ;
typedef TYPE_1__ HAL_NODE_STATS ;
typedef TYPE_1__ HAL_ANISTATS ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct ath_hal*,TYPE_1__*,struct ieee80211_channel const*,TYPE_1__*) ;
 int FUNC_2 (struct ath_hal*,TYPE_1__*) ;

void
FUNC_3(struct ath_hal *VAR_0,
    const struct ieee80211_channel *VAR_1)
{

 HAL_NODE_STATS VAR_2;
 HAL_ANISTATS VAR_3;
 HAL_SURVEY_SAMPLE VAR_4;

 FUNC_0(&VAR_2, sizeof(VAR_2));
 FUNC_0(&VAR_3, sizeof(VAR_3));
 FUNC_0(&VAR_4, sizeof(VAR_4));

 FUNC_1(VAR_0, &VAR_2, VAR_1, &VAR_3);





 if (VAR_3.valid) {
  VAR_4.cycle_count = VAR_3.cyclecnt_diff;
  VAR_4.chan_busy = VAR_3.rxclr_cnt;
  VAR_4.ext_chan_busy = VAR_3.extrxclr_cnt;
  VAR_4.tx_busy = VAR_3.txframecnt_diff;
  VAR_4.rx_busy = VAR_3.rxframecnt_diff;
  FUNC_2(VAR_0, &VAR_4);
 }
}
