
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_vlan_caps; } ;
struct TYPE_4__ {int ip17x_set_vlan_mode; int ip17x_get_vlan_mode; int ip17x_hw_setup; int ip17x_reset; } ;
struct ip17x_softc {int sc_dev; TYPE_1__ info; int numports; int cpuport; TYPE_2__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_1(struct ip17x_softc *VAR_7)
{

 VAR_7->hal.ip17x_reset = VAR_5;
 VAR_7->hal.ip17x_hw_setup = VAR_4;
 VAR_7->hal.ip17x_get_vlan_mode = VAR_3;
 VAR_7->hal.ip17x_set_vlan_mode = VAR_6;


 VAR_7->cpuport = VAR_1;
 VAR_7->numports = VAR_2;
 VAR_7->info.es_vlan_caps = VAR_0;

 FUNC_0(VAR_7->sc_dev, "type: IP175D\n");
}
