
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ath_tx_status {int ts_longretry; int ts_flags; int ts_finaltsi; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txc {int ds_ctl15; int ds_ctl13; int ds_ctl16; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ar9300_txc* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;

u_int32_t
FUNC_3(struct ath_hal *VAR_8, void *VAR_9, struct ath_tx_status *VAR_10,
        HAL_BOOL VAR_11, u_int8_t VAR_12, u_int8_t VAR_13 )
{
    struct ar9300_txc *VAR_14 = FUNC_0(VAR_9);
    int VAR_15;
    u_int32_t VAR_16, VAR_17;
    if ( !VAR_11 ){
        VAR_15 = VAR_10->ts_longretry + (VAR_10->ts_flags & VAR_7)? 1 : 0;
    } else {
        VAR_15 = VAR_10->ts_longretry ;
    }





    switch (VAR_10->ts_finaltsi) {
    case 0:
        VAR_17 = FUNC_2(VAR_14->ds_ctl15, VAR_0);
        VAR_16 = (VAR_17 * VAR_15);
        break;
    case 1:
        VAR_17 = FUNC_2(VAR_14->ds_ctl15, VAR_1);
        VAR_16 = (VAR_17 * VAR_15) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_4) *
             FUNC_2(VAR_14->ds_ctl15, VAR_0));
        break;
    case 2:
        VAR_17 = FUNC_2(VAR_14->ds_ctl16, VAR_2);
        VAR_16 = (VAR_17 * VAR_15) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_5) *
             FUNC_2(VAR_14->ds_ctl15, VAR_1)) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_4) *
             FUNC_2(VAR_14->ds_ctl15, VAR_0));
        break;
    case 3:
        VAR_17 = FUNC_2(VAR_14->ds_ctl16, VAR_3);
        VAR_16 = (VAR_17 * VAR_15) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_6) *
             FUNC_2(VAR_14->ds_ctl16, VAR_2)) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_5) *
             FUNC_2(VAR_14->ds_ctl15, VAR_1)) +
            (FUNC_2(VAR_14->ds_ctl13, VAR_4) *
             FUNC_2(VAR_14->ds_ctl15, VAR_0));
        break;
    default:
        FUNC_1(0);
        return 0;
    }

    if ( VAR_11 && (VAR_10->ts_flags & VAR_7)){
        VAR_16 += VAR_12?((VAR_17*VAR_12) / VAR_13):0;
    }
    return VAR_16;

}
