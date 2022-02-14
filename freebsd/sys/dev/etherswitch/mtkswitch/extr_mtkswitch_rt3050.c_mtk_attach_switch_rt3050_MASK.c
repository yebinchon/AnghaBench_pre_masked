
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mtkswitch_reg_write; int mtkswitch_reg_read; int mtkswitch_phy_write; int mtkswitch_phy_read; int mtkswitch_vlan_set_pvid; int mtkswitch_vlan_get_pvid; int mtkswitch_vlan_setvgroup; int mtkswitch_vlan_getvgroup; int mtkswitch_vlan_init_hw; int mtkswitch_port_vlan_get; int mtkswitch_port_vlan_setup; int mtkswitch_atu_flush; int mtkswitch_get_port_status; int mtkswitch_port_init; int mtkswitch_hw_global_setup; int mtkswitch_hw_setup; int mtkswitch_reset; } ;
struct TYPE_3__ {int es_nports; int es_nvlangroups; int es_name; int es_vlan_caps; } ;
struct mtkswitch_softc {int portmap; int phymap; TYPE_2__ hal; TYPE_1__ info; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*) ;

extern void
FUNC_1(struct mtkswitch_softc *VAR_18)
{

 VAR_18->portmap = 0x7f;
 VAR_18->phymap = 0x1f;

 VAR_18->info.es_nports = 7;
 VAR_18->info.es_vlan_caps = VAR_0;
 VAR_18->info.es_nvlangroups = 16;
 FUNC_0(VAR_18->info.es_name, "Ralink ESW");

 VAR_18->hal.mtkswitch_reset = VAR_12;
 VAR_18->hal.mtkswitch_hw_setup = VAR_4;
 VAR_18->hal.mtkswitch_hw_global_setup = VAR_3;
 VAR_18->hal.mtkswitch_port_init = VAR_7;
 VAR_18->hal.mtkswitch_get_port_status = VAR_2;
 VAR_18->hal.mtkswitch_atu_flush = VAR_1;
 VAR_18->hal.mtkswitch_port_vlan_setup = VAR_9;
 VAR_18->hal.mtkswitch_port_vlan_get = VAR_8;
 VAR_18->hal.mtkswitch_vlan_init_hw = VAR_15;
 VAR_18->hal.mtkswitch_vlan_getvgroup = VAR_14;
 VAR_18->hal.mtkswitch_vlan_setvgroup = VAR_17;
 VAR_18->hal.mtkswitch_vlan_get_pvid = VAR_13;
 VAR_18->hal.mtkswitch_vlan_set_pvid = VAR_16;
 VAR_18->hal.mtkswitch_phy_read = VAR_5;
 VAR_18->hal.mtkswitch_phy_write = VAR_6;
 VAR_18->hal.mtkswitch_reg_read = VAR_10;
 VAR_18->hal.mtkswitch_reg_write = VAR_11;
}
