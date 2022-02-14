
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int** txpower; int** txpower_stbc; int ah_tx_chainmask; } ;
struct TYPE_6__ {int ath_hal_desc_tpc; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef int int16_t ;
struct TYPE_9__ {struct ieee80211_channel* ah_curchan; } ;
struct TYPE_8__ {int rateCount; TYPE_2__* info; } ;
struct TYPE_7__ {scalar_t__ rateCode; int rateKbps; } ;
typedef TYPE_3__ HAL_RATE_TABLE ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_5__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct ath_hal*,struct ieee80211_channel const*) ;
 int FUNC_7 (struct ath_hal*,char*,...) ;

void FUNC_8(struct ath_hal *VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_4);
    const struct ieee80211_channel *VAR_6 = FUNC_1(VAR_4)->ah_curchan;
    u_int VAR_7 = FUNC_6(VAR_4, VAR_6);
    const HAL_RATE_TABLE *VAR_8;
    int VAR_9, VAR_10;


    if (!VAR_4->ah_config.ath_hal_desc_tpc) {
        FUNC_7(VAR_4, "\n TPC Register method in use\n");
        return;
    }

    VAR_8 = FUNC_4(VAR_4, VAR_7);
    FUNC_2(VAR_8 != ((void*)0));

    FUNC_7(VAR_4, "\n===TARGET POWER TABLE===\n");
    for (VAR_10 = 0 ; VAR_10 < FUNC_3(VAR_5->ah_tx_chainmask) ; VAR_10++ ) {
        for (VAR_9 = 0; VAR_9 < VAR_8->rateCount; VAR_9++) {
            int16_t VAR_11[VAR_1];
            VAR_11[VAR_10] = VAR_5->txpower[VAR_9][VAR_10];
            FUNC_7(VAR_4, " Index[%2d] Rate[0x%02x] %6d kbps "
                       "Power (%d Chain) [%2d.%1d dBm]\n",
                       VAR_9, VAR_8->info[VAR_9].rateCode, VAR_8->info[VAR_9].rateKbps,
                       VAR_10 + 1, VAR_11[VAR_10] / 2, VAR_11[VAR_10]%2 * 5);
        }
    }
    FUNC_7(VAR_4, "\n");

    FUNC_7(VAR_4, "\n\n===TARGET POWER TABLE with STBC===\n");
    for ( VAR_10 = 0 ; VAR_10 < FUNC_3(VAR_5->ah_tx_chainmask) ; VAR_10++ ) {
        for (VAR_9 = 0; VAR_9 < VAR_8->rateCount; VAR_9++) {
            int16_t VAR_12[VAR_1];
            VAR_12[VAR_10] = VAR_5->txpower_stbc[VAR_9][VAR_10];


            if ((VAR_8->info[VAR_9].rateCode < VAR_2) ||
                (VAR_8->info[VAR_9].rateCode > VAR_3) ||
                FUNC_5(VAR_10, VAR_8->info[VAR_9].rateCode) == VAR_0) {
                continue;
            }

            FUNC_7(VAR_4, " Index[%2d] Rate[0x%02x] %6d kbps "
                       "Power (%d Chain) [%2d.%1d dBm]\n",
                       VAR_9, VAR_8->info[VAR_9].rateCode , VAR_8->info[VAR_9].rateKbps,
                       VAR_10 + 1, VAR_12[VAR_10] / 2, VAR_12[VAR_10]%2 * 5);
        }
    }
    FUNC_7(VAR_4, "\n");
}
