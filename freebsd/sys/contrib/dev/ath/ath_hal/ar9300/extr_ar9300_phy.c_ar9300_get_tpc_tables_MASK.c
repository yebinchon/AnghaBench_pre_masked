
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
struct rate_power_tbl {int rateIdx; int rateCode; int chain1; int chain2; int chain3; int stbc; int * txpower_stbc; int * txpower; int rateKbps; } ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int ** txpower_stbc; int ah_tx_chainmask; int ** txpower; } ;
struct TYPE_5__ {int ath_hal_desc_tpc; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_8__ {struct ieee80211_channel* ah_curchan; } ;
struct TYPE_7__ {int rateCount; TYPE_2__* info; } ;
struct TYPE_6__ {int rateCode; int rateKbps; } ;
typedef TYPE_3__ HAL_RATE_TABLE ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_4__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct ath_hal*,int ) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (struct ath_hal*,struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct ath_hal*,char*) ;

u_int8_t *FUNC_10(struct ath_hal *VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_3);
    const struct ieee80211_channel *VAR_5 = FUNC_1(VAR_3)->ah_curchan;
    u_int VAR_6 = FUNC_7(VAR_3, VAR_5);
    const HAL_RATE_TABLE *VAR_7;
    u_int8_t *VAR_8;
    struct rate_power_tbl *VAR_9;
    int VAR_10, VAR_11;


    if (! VAR_3->ah_config.ath_hal_desc_tpc) {
        FUNC_9(VAR_3, "\n TPC Register method in use\n");
        return ((void*)0);
    }

    VAR_7 = (const HAL_RATE_TABLE *)FUNC_5(VAR_3, VAR_6);
    FUNC_2(VAR_7 != ((void*)0));

    VAR_8 = (u_int8_t *)FUNC_8(
                       1 + VAR_7->rateCount * sizeof(struct rate_power_tbl));
    if (VAR_8 == ((void*)0))
        return ((void*)0);

    FUNC_3(VAR_8, 1 + VAR_7->rateCount * sizeof(struct rate_power_tbl));

    *VAR_8 = VAR_7->rateCount;
    VAR_9 = (struct rate_power_tbl *)&VAR_8[1];

    for (VAR_11 = 0 ; VAR_11 < FUNC_4(VAR_4->ah_tx_chainmask) ; VAR_11++ ) {
        for (VAR_10 = 0; VAR_10 < VAR_7->rateCount; VAR_10++) {
            VAR_9[VAR_10].rateIdx = VAR_10;
            VAR_9[VAR_10].rateCode = VAR_7->info[VAR_10].rateCode;
            VAR_9[VAR_10].rateKbps = VAR_7->info[VAR_10].rateKbps;
            switch (VAR_11) {
            case 0:
                VAR_9[VAR_10].chain1 = VAR_7->info[VAR_10].rateCode <= 0x87 ? 1 : 0;
                break;
            case 1:
                VAR_9[VAR_10].chain2 = VAR_7->info[VAR_10].rateCode <= 0x8f ? 1 : 0;
                break;
            case 2:
                VAR_9[VAR_10].chain3 = 1;
                break;
            default:
                break;
            }
            if ((VAR_11 == 0 && VAR_9[VAR_10].chain1) ||
                (VAR_11 == 1 && VAR_9[VAR_10].chain2) ||
                (VAR_11 == 2 && VAR_9[VAR_10].chain3))
                VAR_9[VAR_10].txpower[VAR_11] = VAR_4->txpower[VAR_10][VAR_11];
        }
    }

    for ( VAR_11 = 0 ; VAR_11 < FUNC_4(VAR_4->ah_tx_chainmask) ; VAR_11++ ) {
        for (VAR_10 = 0; VAR_10 < VAR_7->rateCount; VAR_10++) {

            if ((VAR_7->info[VAR_10].rateCode < VAR_1) ||
                (VAR_7->info[VAR_10].rateCode > VAR_2) ||
                FUNC_6(VAR_11, VAR_7->info[VAR_10].rateCode) == VAR_0) {
                continue;
            }

            VAR_9[VAR_10].stbc = 1;
            VAR_9[VAR_10].txpower_stbc[VAR_11] = VAR_4->txpower_stbc[VAR_10][VAR_11];
        }
    }

    return VAR_8;

}
