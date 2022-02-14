
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {size_t ts_tail; struct ar9300_txs* ts_ring; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txs {int status8; } ;
typedef int HAL_STATUS ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_3);
    struct ar9300_txs *VAR_5;

    VAR_5 = &VAR_4->ts_ring[VAR_4->ts_tail];

    if (VAR_5->status8 & VAR_0) {
        return VAR_2;
    }
    return VAR_1;
}
