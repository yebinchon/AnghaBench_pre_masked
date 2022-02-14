
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct eth_phy_cfg {int eee_cfg; int data_src_size; struct eth_phy_cfg* p_data_src; int cmd; int loopback_mode; int adv_speed; int pause; int speed; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int eee_cfg; int data_src_size; struct ecore_mcp_mb_params* p_data_src; int cmd; int loopback_mode; int adv_speed; int pause; int speed; } ;
struct TYPE_8__ {int adv_caps; int tx_lpi_timer; scalar_t__ tx_lpi_enable; scalar_t__ enable; } ;
struct TYPE_6__ {int advertised_speeds; int forced_speed; int autoneg; } ;
struct TYPE_5__ {scalar_t__ forced_tx; scalar_t__ forced_rx; scalar_t__ autoneg; } ;
struct ecore_mcp_link_params {TYPE_4__ eee; int loopback_mode; TYPE_2__ speed; TYPE_1__ pause; } ;
struct ecore_hwfn {int b_drv_link_init; TYPE_3__* mcp_info; int p_dev; } ;
typedef int phy_cfg ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_7__ {int capabilities; struct ecore_mcp_link_params link_input; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct eth_phy_cfg*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct eth_phy_cfg*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_16,
     struct ecore_ptt *VAR_17,
     bool VAR_18)
{
 struct ecore_mcp_link_params *VAR_19 = &VAR_16->mcp_info->link_input;
 struct ecore_mcp_mb_params VAR_20;
 struct eth_phy_cfg VAR_21;
 enum _ecore_status_t VAR_22 = VAR_5;
 u32 VAR_23;


 if (FUNC_0(VAR_16->p_dev))
  return VAR_5;



 FUNC_3(&VAR_21, sizeof(VAR_21));
 VAR_23 = VAR_18 ? VAR_0 : VAR_1;
 if (!VAR_19->speed.autoneg)
  VAR_21.speed = VAR_19->speed.forced_speed;
 VAR_21.pause |= (VAR_19->pause.autoneg) ? VAR_12 : 0;
 VAR_21.pause |= (VAR_19->pause.forced_rx) ? VAR_13 : 0;
 VAR_21.pause |= (VAR_19->pause.forced_tx) ? VAR_14 : 0;
 VAR_21.adv_speed = VAR_19->speed.advertised_speeds;
 VAR_21.loopback_mode = VAR_19->loopback_mode;






 if ((VAR_16->mcp_info->capabilities &
      VAR_15) &&
     VAR_19->eee.enable) {
  VAR_21.eee_cfg |= VAR_8;
  if (VAR_19->eee.tx_lpi_enable)
   VAR_21.eee_cfg |= VAR_9;
  if (VAR_19->eee.adv_caps & VAR_3)
   VAR_21.eee_cfg |= VAR_7;
  if (VAR_19->eee.adv_caps & VAR_2)
   VAR_21.eee_cfg |= VAR_6;
  VAR_21.eee_cfg |= (VAR_19->eee.tx_lpi_timer <<
        VAR_11) &
     VAR_10;
 }

 VAR_16->b_drv_link_init = VAR_18;

 if (VAR_18)
  FUNC_2(VAR_16, VAR_4,
      "Configuring Link: Speed 0x%08x, Pause 0x%08x, adv_speed 0x%08x, loopback 0x%08x\n",
      VAR_21.speed, VAR_21.pause, VAR_21.adv_speed,
      VAR_21.loopback_mode);
 else
  FUNC_2(VAR_16, VAR_4, "Resetting link\n");

 FUNC_3(&VAR_20, sizeof(VAR_20));
 VAR_20.cmd = VAR_23;
 VAR_20.p_data_src = &VAR_21;
 VAR_20.data_src_size = sizeof(VAR_21);
 VAR_22 = FUNC_4(VAR_16, VAR_17, &VAR_20);


 if (VAR_22 != VAR_5) {
  FUNC_1(VAR_16, "MCP response failure, aborting\n");
  return VAR_22;
 }







 FUNC_5(VAR_16, VAR_17, !VAR_18);

 return VAR_5;
}
