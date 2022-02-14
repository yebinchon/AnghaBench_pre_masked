
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {size_t ts_tail; struct ar9300_txs* ts_ring; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txs {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int *,struct ar9300_txs*,int) ;

void
FUNC_2(struct ath_hal *VAR_0, u_int32_t *VAR_1)
{
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_0);
    struct ar9300_txs *VAR_3;

    VAR_3 = &VAR_2->ts_ring[VAR_2->ts_tail];

    FUNC_1(VAR_1, VAR_3, sizeof(struct ar9300_txs));
}
