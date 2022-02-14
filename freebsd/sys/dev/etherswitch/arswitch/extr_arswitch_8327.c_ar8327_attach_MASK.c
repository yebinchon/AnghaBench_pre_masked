
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int es_vlan_caps; int es_nvlangroups; } ;
struct TYPE_3__ {int arswitch_phy_write; int arswitch_phy_read; int arswitch_atu_fetch_table; int arswitch_atu_flush_port; int arswitch_atu_flush; int arswitch_atu_learn_default; int arswitch_set_port_vlan; int arswitch_get_port_vlan; int arswitch_vlan_set_pvid; int arswitch_vlan_get_pvid; int arswitch_vlan_init_hw; int arswitch_get_dot1q_vlan; int arswitch_set_dot1q_vlan; int arswitch_purge_dot1q_vlan; int arswitch_flush_dot1q_vlan; int arswitch_port_vlan_get; int arswitch_port_vlan_setup; int arswitch_vlan_setvgroup; int arswitch_vlan_getvgroup; int arswitch_port_init; int arswitch_hw_global_setup; int arswitch_hw_setup; } ;
struct arswitch_softc {TYPE_2__ info; TYPE_1__ hal; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

void
FUNC_0(struct arswitch_softc *VAR_26)
{

 VAR_26->hal.arswitch_hw_setup = VAR_12;
 VAR_26->hal.arswitch_hw_global_setup = VAR_11;

 VAR_26->hal.arswitch_port_init = VAR_13;

 VAR_26->hal.arswitch_vlan_getvgroup = VAR_21;
 VAR_26->hal.arswitch_vlan_setvgroup = VAR_23;
 VAR_26->hal.arswitch_port_vlan_setup = VAR_15;
 VAR_26->hal.arswitch_port_vlan_get = VAR_14;
 VAR_26->hal.arswitch_flush_dot1q_vlan = VAR_8;
 VAR_26->hal.arswitch_purge_dot1q_vlan = VAR_16;
 VAR_26->hal.arswitch_set_dot1q_vlan = VAR_18;
 VAR_26->hal.arswitch_get_dot1q_vlan = VAR_9;

 VAR_26->hal.arswitch_vlan_init_hw = VAR_17;
 VAR_26->hal.arswitch_vlan_get_pvid = VAR_10;
 VAR_26->hal.arswitch_vlan_set_pvid = VAR_19;

 VAR_26->hal.arswitch_get_port_vlan = VAR_20;
 VAR_26->hal.arswitch_set_port_vlan = VAR_22;

 VAR_26->hal.arswitch_atu_learn_default = VAR_7;
 VAR_26->hal.arswitch_atu_flush = VAR_5;
 VAR_26->hal.arswitch_atu_flush_port = VAR_6;
 VAR_26->hal.arswitch_atu_fetch_table = VAR_4;
 VAR_26->hal.arswitch_phy_read = VAR_24;
 VAR_26->hal.arswitch_phy_write = VAR_25;


 VAR_26->info.es_vlan_caps = VAR_1 |
     VAR_3 | VAR_2;
 VAR_26->info.es_nvlangroups = VAR_0;
}
