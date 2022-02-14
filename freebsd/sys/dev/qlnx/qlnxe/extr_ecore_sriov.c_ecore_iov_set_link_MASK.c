
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {struct ecore_bulletin_content* p_virt; } ;
struct ecore_vf_info {TYPE_1__ bulletin; } ;
struct ecore_mcp_link_state {int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int an_complete; int an; int full_duplex; int speed; int link_up; } ;
struct TYPE_6__ {int forced_tx; int forced_rx; int autoneg; } ;
struct TYPE_5__ {int forced_speed; int advertised_speeds; int autoneg; } ;
struct ecore_mcp_link_params {int loopback_mode; TYPE_3__ pause; TYPE_2__ speed; } ;
struct ecore_mcp_link_capabilities {int speed_capabilities; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_bulletin_content {int capability_speed; int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int autoneg_complete; int autoneg; int full_duplex; int speed; int link_up; int req_loopback; int req_forced_tx; int req_forced_rx; int req_autoneg_pause; int req_forced_speed; int req_adv_speed; int req_autoneg; } ;


 struct ecore_vf_info* FUNC_0 (struct ecore_hwfn*,int ,int) ;

void FUNC_1(struct ecore_hwfn *VAR_0,
   u16 VAR_1,
   struct ecore_mcp_link_params *VAR_2,
   struct ecore_mcp_link_state *VAR_3,
   struct ecore_mcp_link_capabilities *VAR_4)
{
 struct ecore_vf_info *VAR_5 = FUNC_0(VAR_0, VAR_1, 0);
 struct ecore_bulletin_content *VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = VAR_5->bulletin.p_virt;
 VAR_6->req_autoneg = VAR_2->speed.autoneg;
 VAR_6->req_adv_speed = VAR_2->speed.advertised_speeds;
 VAR_6->req_forced_speed = VAR_2->speed.forced_speed;
 VAR_6->req_autoneg_pause = VAR_2->pause.autoneg;
 VAR_6->req_forced_rx = VAR_2->pause.forced_rx;
 VAR_6->req_forced_tx = VAR_2->pause.forced_tx;
 VAR_6->req_loopback = VAR_2->loopback_mode;

 VAR_6->link_up = VAR_3->link_up;
 VAR_6->speed = VAR_3->speed;
 VAR_6->full_duplex = VAR_3->full_duplex;
 VAR_6->autoneg = VAR_3->an;
 VAR_6->autoneg_complete = VAR_3->an_complete;
 VAR_6->parallel_detection = VAR_3->parallel_detection;
 VAR_6->pfc_enabled = VAR_3->pfc_enabled;
 VAR_6->partner_adv_speed = VAR_3->partner_adv_speed;
 VAR_6->partner_tx_flow_ctrl_en = VAR_3->partner_tx_flow_ctrl_en;
 VAR_6->partner_rx_flow_ctrl_en = VAR_3->partner_rx_flow_ctrl_en;
 VAR_6->partner_adv_pause = VAR_3->partner_adv_pause;
 VAR_6->sfp_tx_fault = VAR_3->sfp_tx_fault;

 VAR_6->capability_speed = VAR_4->speed_capabilities;
}
