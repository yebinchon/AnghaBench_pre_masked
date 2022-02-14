
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcp_link_state {int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int an_complete; int an; int full_duplex; int speed; int link_up; } ;
struct ecore_bulletin_content {int sfp_tx_fault; int partner_adv_pause; int partner_rx_flow_ctrl_en; int partner_tx_flow_ctrl_en; int partner_adv_speed; int pfc_enabled; int parallel_detection; int autoneg_complete; int autoneg; int full_duplex; int speed; int link_up; } ;


 int FUNC_0 (struct ecore_mcp_link_state*,int ,int) ;

void FUNC_1(struct ecore_mcp_link_state *VAR_0,
          struct ecore_bulletin_content *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->link_up = VAR_1->link_up;
 VAR_0->speed = VAR_1->speed;
 VAR_0->full_duplex = VAR_1->full_duplex;
 VAR_0->an = VAR_1->autoneg;
 VAR_0->an_complete = VAR_1->autoneg_complete;
 VAR_0->parallel_detection = VAR_1->parallel_detection;
 VAR_0->pfc_enabled = VAR_1->pfc_enabled;
 VAR_0->partner_adv_speed = VAR_1->partner_adv_speed;
 VAR_0->partner_tx_flow_ctrl_en = VAR_1->partner_tx_flow_ctrl_en;
 VAR_0->partner_rx_flow_ctrl_en = VAR_1->partner_rx_flow_ctrl_en;
 VAR_0->partner_adv_pause = VAR_1->partner_adv_pause;
 VAR_0->sfp_tx_fault = VAR_1->sfp_tx_fault;
}
