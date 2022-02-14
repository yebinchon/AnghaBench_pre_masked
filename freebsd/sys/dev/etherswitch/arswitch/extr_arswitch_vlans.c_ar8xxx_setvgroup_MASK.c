
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* arswitch_purge_dot1q_vlan ) (struct arswitch_softc*,int) ;int (* arswitch_set_dot1q_vlan ) (struct arswitch_softc*,int ,int ,int) ;int (* arswitch_set_port_vlan ) (struct arswitch_softc*,int ,int) ;} ;
struct arswitch_softc {int vlan_mode; int* vid; TYPE_1__ hal; } ;
struct TYPE_5__ {size_t es_vlangroup; int es_vid; int es_member_ports; int es_untagged_ports; } ;
typedef TYPE_2__ etherswitch_vlangroup_t ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*,int ) ;
 int FUNC_2 (struct arswitch_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_3 (struct arswitch_softc*,int) ;
 int FUNC_4 (struct arswitch_softc*,int ,int ,int) ;
 int FUNC_5 (struct arswitch_softc*,int ,int) ;

int
FUNC_6(struct arswitch_softc *VAR_4, etherswitch_vlangroup_t *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_1(VAR_4, VAR_3);


 if (VAR_4->vlan_mode == 0)
  return (VAR_0);





 FUNC_0(VAR_4);
 VAR_7 = VAR_4->vid[VAR_5->es_vlangroup];
 if (VAR_4->vlan_mode == 129 &&
     (VAR_7 & VAR_2) != 0 &&
     (VAR_7 & VAR_1) !=
     (VAR_5->es_vid & VAR_1)) {
  VAR_6 = VAR_4->hal.arswitch_purge_dot1q_vlan(VAR_4, VAR_7);
  if (VAR_6) {
   FUNC_2(VAR_4);
   return (VAR_6);
  }
 }


 if (VAR_4->vlan_mode == 129) {
  VAR_4->vid[VAR_5->es_vlangroup] = VAR_5->es_vid & VAR_1;

  if (VAR_4->vid[VAR_5->es_vlangroup] == 0) {
   FUNC_2(VAR_4);
   return (0);
  }
  VAR_4->vid[VAR_5->es_vlangroup] |= VAR_2;
  VAR_7 = VAR_4->vid[VAR_5->es_vlangroup];
 }


 switch (VAR_4->vlan_mode) {
 case 129:
  VAR_6 = VAR_4->hal.arswitch_set_dot1q_vlan(VAR_4, VAR_5->es_member_ports,
      VAR_5->es_untagged_ports, VAR_7);
  break;
 case 128:
  VAR_6 = VAR_4->hal.arswitch_set_port_vlan(VAR_4, VAR_5->es_member_ports, VAR_7);
  break;
 default:
  VAR_6 = -1;
 }
 FUNC_2(VAR_4);
 return (VAR_6);
}
