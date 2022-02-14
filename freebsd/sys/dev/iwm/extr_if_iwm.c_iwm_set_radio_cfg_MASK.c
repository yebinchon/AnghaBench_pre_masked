
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {TYPE_1__* cfg; } ;
struct iwm_nvm_data {int valid_rx_ant; int valid_tx_ant; int radio_cfg_pnum; int radio_cfg_dash; int radio_cfg_step; int radio_cfg_type; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const struct iwm_softc *VAR_1, struct iwm_nvm_data *VAR_2,
    uint32_t VAR_3)
{
 if (VAR_1->cfg->device_family < VAR_0) {
  VAR_2->radio_cfg_type = FUNC_8(VAR_3);
  VAR_2->radio_cfg_step = FUNC_5(VAR_3);
  VAR_2->radio_cfg_dash = FUNC_0(VAR_3);
  VAR_2->radio_cfg_pnum = FUNC_3(VAR_3);
  return;
 }


 VAR_2->radio_cfg_type = FUNC_9(VAR_3);
 VAR_2->radio_cfg_step = FUNC_6(VAR_3);
 VAR_2->radio_cfg_dash = FUNC_1(VAR_3);
 VAR_2->radio_cfg_pnum = FUNC_2(VAR_3);
 VAR_2->valid_tx_ant = FUNC_7(VAR_3);
 VAR_2->valid_rx_ant = FUNC_4(VAR_3);
}
