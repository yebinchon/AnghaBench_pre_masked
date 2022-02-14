
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_5__ {int dma_dbg_4; int dma_dbg_5; int dma_dbg_6; int dma_dbg_3; } ;
typedef TYPE_1__ mac_dbg_regs_t ;
struct TYPE_6__ {int states; int dcu_chain_state; int dcu_complete_state; int qcu_stitch_state; int qcu_fetch_state; int qcu_complete_state; } ;
typedef TYPE_2__ hal_mac_hang_check_t ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HAL_BOOL
FUNC_0(struct ath_hal *VAR_5, const mac_dbg_regs_t *VAR_6,
    const hal_mac_hang_check_t *VAR_7)
{
 int VAR_8;

 VAR_8 = 0;
 if (VAR_7->states & VAR_0) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < 6; VAR_9++) {
   if (((VAR_6->dma_dbg_4 >> (5*VAR_9)) & 0x1f) ==
       VAR_7->dcu_chain_state)
    VAR_8 |= VAR_0;
  }
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   if (((VAR_6->dma_dbg_5 >> (5*VAR_9)) & 0x1f) ==
       VAR_7->dcu_chain_state)
    VAR_8 |= VAR_0;
  }
 }
 if (VAR_7->states & VAR_1) {
  if ((VAR_6->dma_dbg_6 & 0x3) == VAR_7->dcu_complete_state)
   VAR_8 |= VAR_1;
 }
 if (VAR_7->states & VAR_4) {
  if (((VAR_6->dma_dbg_3 >> 18) & 0xf) == VAR_7->qcu_stitch_state)
   VAR_8 |= VAR_4;
 }
 if (VAR_7->states & VAR_3) {
  if (((VAR_6->dma_dbg_3 >> 22) & 0xf) == VAR_7->qcu_fetch_state)
   VAR_8 |= VAR_3;
 }
 if (VAR_7->states & VAR_2) {
  if (((VAR_6->dma_dbg_3 >> 26) & 0x7) == VAR_7->qcu_complete_state)
   VAR_8 |= VAR_2;
 }
 return (VAR_8 == VAR_7->states);
}
