
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int (* ip17x_hw_setup ) (struct ip17x_softc*) ;} ;
struct TYPE_6__ {int es_nvlangroups; } ;
struct ip17x_softc {scalar_t__ vlan_mode; int numports; int* portphy; TYPE_3__ hal; TYPE_2__* vlan; TYPE_1__ info; } ;
struct TYPE_9__ {int es_vid; int es_vlangroup; int es_member_ports; } ;
typedef TYPE_4__ etherswitch_vlangroup_t ;
typedef int device_t ;
struct TYPE_7__ {int vlanid; int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ip17x_softc*,int ) ;
 struct ip17x_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct ip17x_softc*) ;
 int FUNC_3 (struct ip17x_softc*) ;

int
FUNC_4(device_t VAR_6, etherswitch_vlangroup_t *VAR_7)
{
 struct ip17x_softc *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_6);


 if (VAR_8->vlan_mode == 0)
  return (VAR_0);


 if (FUNC_0(VAR_8, VAR_4) &&
     (VAR_7->es_vid & VAR_1) > VAR_5)
  return (VAR_0);


 if (VAR_8->vlan_mode == VAR_3) {
  for (VAR_10 = 0; VAR_10 < VAR_8->info.es_nvlangroups; VAR_10++) {

   if (VAR_10 != VAR_7->es_vlangroup &&
       VAR_8->vlan[VAR_10].vlanid & VAR_2 &&
       (VAR_8->vlan[VAR_10].vlanid & VAR_1) ==
       (VAR_7->es_vid & VAR_1))
    return (VAR_0);
  }
  VAR_8->vlan[VAR_7->es_vlangroup].vlanid = VAR_7->es_vid &
      VAR_1;

  if (VAR_8->vlan[VAR_7->es_vlangroup].vlanid == 0) {
   VAR_8->vlan[VAR_7->es_vlangroup].ports = 0;
   return (VAR_8->hal.ip17x_hw_setup(VAR_8));
  }
  VAR_8->vlan[VAR_7->es_vlangroup].vlanid |= VAR_2;
 }


 VAR_8->vlan[VAR_7->es_vlangroup].ports = 0;
 for (VAR_10 = 0; VAR_10 < VAR_8->numports; VAR_10++) {
  if ((VAR_7->es_member_ports & (1 << VAR_10)) == 0)
   continue;
  VAR_9 = VAR_8->portphy[VAR_10];
  VAR_8->vlan[VAR_7->es_vlangroup].ports |= (1 << VAR_9);
 }

 return (VAR_8->hal.ip17x_hw_setup(VAR_8));
}
