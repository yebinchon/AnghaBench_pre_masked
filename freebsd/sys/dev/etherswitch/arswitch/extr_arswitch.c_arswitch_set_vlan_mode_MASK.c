
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* arswitch_vlan_init_hw ) (struct arswitch_softc*) ;} ;
struct TYPE_3__ {int es_vlan_caps; } ;
struct arswitch_softc {int vlan_mode; TYPE_2__ hal; TYPE_1__ info; } ;


 int VAR_0 ;


 int FUNC_0 (struct arswitch_softc*) ;

__attribute__((used)) static int
FUNC_1(struct arswitch_softc *VAR_1, uint32_t VAR_2)
{


 if ((VAR_2 & VAR_1->info.es_vlan_caps) != VAR_2)
  return (VAR_0);

 switch (VAR_2) {
 case 129:
  VAR_1->vlan_mode = 129;
  break;
 case 128:
  VAR_1->vlan_mode = 128;
  break;
 default:
  VAR_1->vlan_mode = 0;
 }


 VAR_1->hal.arswitch_vlan_init_hw(VAR_1);

 return (0);
}
