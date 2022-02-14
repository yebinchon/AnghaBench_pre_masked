
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {int dma_dbg_4; int dma_dbg_5; int dma_dbg_6; } ;
typedef TYPE_1__ mac_dbg_regs_t ;
typedef int hal_mac_hangs_t ;
struct TYPE_6__ {int dcu_chain_state; int dcu_complete_state; } ;
typedef TYPE_2__ hal_mac_hang_check_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static hal_mac_hangs_t
FUNC_0(struct ath_hal *VAR_2, mac_dbg_regs_t VAR_3,
  hal_mac_hang_check_t VAR_4, hal_mac_hangs_t VAR_5, u_int8_t *VAR_6)
{
    int VAR_7 = 0;
    hal_mac_hangs_t VAR_8 = 0;

    if (VAR_5 & VAR_0) {
        for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
            if (((VAR_3.dma_dbg_4 >> (5 * VAR_7)) & 0x1f) ==
                 VAR_4.dcu_chain_state)
            {
                VAR_8 |= VAR_0;
                *VAR_6 = VAR_7;
            }
        }
        for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            if (((VAR_3.dma_dbg_5 >> (5 * VAR_7)) & 0x1f) ==
                  VAR_4.dcu_chain_state)
            {
                VAR_8 |= VAR_0;
                *VAR_6 = VAR_7 + 6;
            }
        }
    }

    if (VAR_5 & VAR_1) {
        if ((VAR_3.dma_dbg_6 & 0x3) == VAR_4.dcu_complete_state) {
            VAR_8 |= VAR_1;
        }
    }

    return VAR_8;

}
