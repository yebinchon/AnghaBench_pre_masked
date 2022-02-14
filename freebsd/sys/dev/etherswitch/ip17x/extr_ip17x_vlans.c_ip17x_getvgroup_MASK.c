
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ip17x_softc {int phymask; int* phyport; TYPE_1__* vlan; } ;
struct TYPE_5__ {size_t es_vlangroup; int es_member_ports; int es_untagged_ports; scalar_t__ es_fid; int es_vid; } ;
typedef TYPE_2__ etherswitch_vlangroup_t ;
typedef int device_t ;
struct TYPE_4__ {int ports; int vlanid; } ;


 int VAR_0 ;
 struct ip17x_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, etherswitch_vlangroup_t *VAR_2)
{
 struct ip17x_softc *VAR_3;
 uint32_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_1);


 VAR_2->es_vid = VAR_3->vlan[VAR_2->es_vlangroup].vlanid;


 VAR_2->es_member_ports = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if ((VAR_3->phymask & (1 << VAR_5)) == 0)
   continue;
  if ((VAR_3->vlan[VAR_2->es_vlangroup].ports & (1 << VAR_5)) == 0)
   continue;
  VAR_4 = VAR_3->phyport[VAR_5];
  VAR_2->es_member_ports |= (1 << VAR_4);
 }


 VAR_2->es_untagged_ports = VAR_2->es_member_ports;
 VAR_2->es_fid = 0;

 return (0);
}
