
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int es_vlan_caps; int es_nvlangroups; } ;
struct TYPE_3__ {int arswitch_hw_global_setup; int arswitch_hw_setup; } ;
struct arswitch_softc {TYPE_2__ info; TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(struct arswitch_softc *VAR_6)
{

 VAR_6->hal.arswitch_hw_setup = VAR_5;
 VAR_6->hal.arswitch_hw_global_setup = VAR_4;


 VAR_6->info.es_vlan_caps = VAR_1 |
     VAR_3 | VAR_2;
 VAR_6->info.es_nvlangroups = VAR_0;
}
