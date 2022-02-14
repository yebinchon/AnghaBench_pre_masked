
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_6__* mac_regs_base; int mac_mode; TYPE_2__* ec_regs_base; } ;
struct TYPE_11__ {int frm_len; } ;
struct TYPE_10__ {int frm_len; } ;
struct TYPE_9__ {int rx_afifo_cfg_2; int rx_afifo_cfg_1; } ;
struct TYPE_12__ {TYPE_5__ mac_10g; TYPE_4__ mac_1g; TYPE_3__ gen_v3; } ;
struct TYPE_7__ {int max_pkt; int min_pkt; } ;
struct TYPE_8__ {TYPE_1__ mac; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct al_hal_eth_adapter*,int ,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;

int FUNC_6(struct al_hal_eth_adapter *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 FUNC_3(VAR_5 <= VAR_0);


 FUNC_5(&VAR_3->ec_regs_base->mac.min_pkt, VAR_4);

 FUNC_5(&VAR_3->ec_regs_base->mac.max_pkt, VAR_5);

 if (VAR_3->rev_id > VAR_1) {
  FUNC_5(&VAR_3->mac_regs_base->gen_v3.rx_afifo_cfg_1, VAR_4);
  FUNC_5(&VAR_3->mac_regs_base->gen_v3.rx_afifo_cfg_2, VAR_5);
 }




 if (FUNC_1(VAR_3->mac_mode))
  FUNC_5(&VAR_3->mac_regs_base->mac_1g.frm_len, VAR_5 + 16);
 else if (FUNC_0(VAR_3->mac_mode) || FUNC_2(VAR_3->mac_mode))

  FUNC_5(&VAR_3->mac_regs_base->mac_10g.frm_len, (VAR_5 + 16));
 else
  FUNC_4(VAR_3, VAR_2, (VAR_5 + 16));

 return 0;
}
