
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
typedef int u_int16_t ;
struct ath_hal_9300 {int ts_size; struct ar9300_txs* ts_ring; void* ts_paddr_end; void* ts_paddr_start; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txs {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;

void
FUNC_2(struct ath_hal *VAR_0, void *VAR_1,
    u_int32_t VAR_2, u_int16_t VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_0);

    VAR_4->ts_paddr_start = VAR_2;
    VAR_4->ts_paddr_end = VAR_2 + (VAR_3 * sizeof(struct ar9300_txs));
    VAR_4->ts_size = VAR_3;
    VAR_4->ts_ring = (struct ar9300_txs *)VAR_1;

    FUNC_1(VAR_0);
}
