
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


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ mac_mode; int name; TYPE_6__* mac_regs_base; } ;
struct al_eth_link_status {int link_up; void* local_fault; void* remote_fault; } ;
struct TYPE_11__ {int mac_40g_ll_status; int pcs_40g_ll_status; } ;
struct TYPE_10__ {int rgmii_stat; } ;
struct TYPE_9__ {int link_stat; int reg_data; int reg_addr; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int pcs_data; int pcs_addr; } ;
struct TYPE_12__ {TYPE_5__ gen_v3; TYPE_4__ gen; TYPE_3__ sgmii; TYPE_2__ mac_10g; TYPE_1__ kr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(struct al_hal_eth_adapter *VAR_13,
      struct al_eth_link_status *VAR_14)
{
 uint32_t VAR_15;

 if (FUNC_1(VAR_13->mac_mode) || FUNC_2(VAR_13->mac_mode)) {
  VAR_14->link_up = VAR_5;
  VAR_14->local_fault = VAR_6;
  VAR_14->remote_fault = VAR_6;

  FUNC_6(&VAR_13->mac_regs_base->kr.pcs_addr, VAR_12);
  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->kr.pcs_data);

  if (VAR_15 & FUNC_0(15)) {
   VAR_15 = FUNC_5(&VAR_13->mac_regs_base->mac_10g.status);

   VAR_14->remote_fault = ((VAR_15 & VAR_9) ?
       VAR_6 : VAR_5);
   VAR_14->local_fault = ((VAR_15 & VAR_8) ?
       VAR_6 : VAR_5);

   VAR_14->link_up = ((VAR_14->remote_fault == VAR_5) &&
        (VAR_14->local_fault == VAR_5));
  }

 } else if (VAR_13->mac_mode == VAR_1) {
  FUNC_6(&VAR_13->mac_regs_base->sgmii.reg_addr, 1);




  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->sgmii.reg_data);
  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->sgmii.reg_data);

  VAR_14->link_up = VAR_5;

  if (VAR_15 & FUNC_0(2))
   VAR_14->link_up = VAR_6;

  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->sgmii.link_stat);

  if ((VAR_15 & FUNC_0(3)) == 0)
   VAR_14->link_up = VAR_5;

 } else if (VAR_13->mac_mode == VAR_0) {
  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->gen.rgmii_stat);

  VAR_14->link_up = VAR_5;

  if (VAR_15 & FUNC_0(4))
   VAR_14->link_up = VAR_6;

 } else if (VAR_13->mac_mode == VAR_2) {
  VAR_14->link_up = VAR_5;
  VAR_14->local_fault = VAR_6;
  VAR_14->remote_fault = VAR_6;

  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->gen_v3.pcs_40g_ll_status);

  VAR_14->link_up = VAR_5;

  if ((VAR_15 & 0xF) == 0xF) {
   VAR_15 = FUNC_5(&VAR_13->mac_regs_base->gen_v3.mac_40g_ll_status);

   VAR_14->remote_fault = ((VAR_15 & VAR_11) ?
       VAR_6 : VAR_5);
   VAR_14->local_fault = ((VAR_15 & VAR_10) ?
       VAR_6 : VAR_5);

   VAR_14->link_up = ((VAR_14->remote_fault == VAR_5) &&
        (VAR_14->local_fault == VAR_5));
  }

 } else if ((VAR_13->mac_mode == VAR_3) ||
   (VAR_13->mac_mode == VAR_4)) {
  VAR_15 = FUNC_5(&VAR_13->mac_regs_base->gen_v3.pcs_40g_ll_status);

  VAR_14->link_up = VAR_5;

  if ((VAR_15 & 0x1F) == 0x1F) {
   VAR_15 = FUNC_5(&VAR_13->mac_regs_base->gen_v3.mac_40g_ll_status);
   if ((VAR_15 & (VAR_11 |
     VAR_10)) == 0)
    VAR_14->link_up = VAR_6;
  }

 } else {

  return -VAR_7;
 }

 FUNC_3("[%s]: mac %s port. link_status: %s.\n", VAR_13->name,
  FUNC_4(VAR_13->mac_mode),
  (VAR_14->link_up == VAR_6) ? "LINK_UP" : "LINK_DOWN");

 return 0;
}
