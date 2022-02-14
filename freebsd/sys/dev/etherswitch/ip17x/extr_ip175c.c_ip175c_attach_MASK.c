
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int es_vlan_caps; } ;
struct TYPE_3__ {int ip17x_set_vlan_mode; int ip17x_get_vlan_mode; int ip17x_hw_setup; int ip17x_reset; } ;
struct ip17x_softc {int phymask; int sc_dev; TYPE_2__ info; int numports; int cpuport; TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct ip17x_softc *VAR_11)
{
 uint32_t VAR_12;

 VAR_12 = FUNC_1(VAR_11->sc_dev, VAR_4, VAR_2);
 FUNC_0(VAR_11->sc_dev, "MII: %x\n", VAR_12);

 if((VAR_12 & (1 << VAR_3)) == 0)
  VAR_11->phymask |= 0x10;

 VAR_11->hal.ip17x_reset = VAR_9;
 VAR_11->hal.ip17x_hw_setup = VAR_8;
 VAR_11->hal.ip17x_get_vlan_mode = VAR_7;
 VAR_11->hal.ip17x_set_vlan_mode = VAR_10;


 VAR_11->cpuport = VAR_5;
 VAR_11->numports = VAR_6;
 VAR_11->info.es_vlan_caps = VAR_1 | VAR_0;

 FUNC_0(VAR_11->sc_dev, "type: IP175C\n");
}
