
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_3__* ec_regs_base; } ;
typedef enum al_eth_tx_switch_vid_sel_type { ____Placeholder_al_eth_tx_switch_vid_sel_type } al_eth_tx_switch_vid_sel_type ;
typedef enum al_eth_tx_switch_dec_type { ____Placeholder_al_eth_tx_switch_dec_type } al_eth_tx_switch_dec_type ;
struct TYPE_4__ {int tx_gen; } ;
struct TYPE_6__ {TYPE_2__* tfw_udma; TYPE_1__ tfw; } ;
struct TYPE_5__ {int fwd_dec; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4,
     enum al_eth_tx_switch_vid_sel_type VAR_5,
     enum al_eth_tx_switch_dec_type VAR_6,
     enum al_eth_tx_switch_dec_type VAR_7,
     enum al_eth_tx_switch_dec_type VAR_8)
{
 uint32_t VAR_9;

 if (VAR_2 == 0) {
  VAR_9 = FUNC_0(&VAR_1->ec_regs_base->tfw.tx_gen);
  if (VAR_3)
   VAR_9 |= VAR_0;
  else
   VAR_9 &= ~VAR_0;
  FUNC_1(&VAR_1->ec_regs_base->tfw.tx_gen, VAR_9);
 }

 VAR_9 = VAR_4;
 VAR_9 |= (VAR_5 & 7) << 1;
 VAR_9 |= (VAR_8 & 3) << 4;
 VAR_9 |= (VAR_7 & 3) << 6;
 VAR_9 |= (VAR_6 & 3) << 8;
 FUNC_1(&VAR_1->ec_regs_base->tfw_udma[VAR_2].fwd_dec, VAR_9);

 return 0;
}
