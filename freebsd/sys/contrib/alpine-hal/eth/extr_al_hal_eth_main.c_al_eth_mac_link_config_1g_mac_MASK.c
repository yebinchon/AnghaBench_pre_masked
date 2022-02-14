
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ mac_mode; TYPE_4__* mac_regs_base; } ;
typedef scalar_t__ al_bool ;
struct TYPE_7__ {int cmd_cfg; } ;
struct TYPE_6__ {int reg_data; int reg_addr; } ;
struct TYPE_5__ {int rgmii_cfg; } ;
struct TYPE_8__ {TYPE_3__ mac_1g; TYPE_2__ sgmii; TYPE_1__ gen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_3 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(
    struct al_hal_eth_adapter *VAR_18,
    al_bool VAR_19,
    al_bool VAR_20,
    uint32_t VAR_21,
    al_bool VAR_22)
{
 uint32_t VAR_23;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;

 VAR_23 = FUNC_2(&VAR_18->mac_regs_base->mac_1g.cmd_cfg);

 if (VAR_18->mac_mode == VAR_1) {
  FUNC_3(&VAR_18->mac_regs_base->sgmii.reg_addr,
          VAR_10);
  VAR_24 = FUNC_2(&VAR_18->mac_regs_base->sgmii.reg_data);




  if (VAR_19 == VAR_2)
   VAR_25 = VAR_15;

  if (VAR_20 == VAR_3) {
   VAR_25 |= VAR_13;
   VAR_24 |= VAR_12;
  } else {
   VAR_24 &= ~(VAR_12);
  }
 }

 if (VAR_18->mac_mode == VAR_0) {



  VAR_26 = FUNC_2(&VAR_18->mac_regs_base->gen.rgmii_cfg);

  FUNC_0(VAR_26, VAR_7);
  FUNC_0(VAR_26, VAR_8);
  FUNC_0(VAR_26, VAR_9);

  FUNC_3(&VAR_18->mac_regs_base->gen.rgmii_cfg, VAR_26);
 }

 if (VAR_22 == VAR_3) {
  FUNC_0(VAR_23, VAR_6);
 } else {
  FUNC_1(VAR_23, VAR_6);
  VAR_25 |= VAR_14;
 }

 if (VAR_21 == 1000) {
  FUNC_1(VAR_23, VAR_5);
  VAR_25 |= VAR_17;
 } else {
  FUNC_0(VAR_23, VAR_5);
  if (VAR_21 == 10) {
   FUNC_1(VAR_23, VAR_4);
  } else {
   VAR_25 |= VAR_16;
   FUNC_0(VAR_23, VAR_4);
  }
 }

 if (VAR_18->mac_mode == VAR_1) {
  FUNC_3(&VAR_18->mac_regs_base->sgmii.reg_addr,
          VAR_11);
  FUNC_3(&VAR_18->mac_regs_base->sgmii.reg_data,
          VAR_25);

  FUNC_3(&VAR_18->mac_regs_base->sgmii.reg_addr,
          VAR_10);
  FUNC_3(&VAR_18->mac_regs_base->sgmii.reg_data,
          VAR_24);
 }

 FUNC_3(&VAR_18->mac_regs_base->mac_1g.cmd_cfg, VAR_23);
}
