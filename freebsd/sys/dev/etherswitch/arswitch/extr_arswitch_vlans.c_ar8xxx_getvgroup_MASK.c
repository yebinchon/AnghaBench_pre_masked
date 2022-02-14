
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* arswitch_get_dot1q_vlan ) (struct arswitch_softc*,scalar_t__*,scalar_t__*,int) ;int (* arswitch_get_port_vlan ) (struct arswitch_softc*,scalar_t__*,int) ;} ;
struct TYPE_5__ {size_t es_nvlangroups; } ;
struct arswitch_softc {int* vid; int vlan_mode; TYPE_2__ hal; TYPE_1__ info; } ;
struct TYPE_7__ {size_t es_vlangroup; int es_vid; scalar_t__ es_untagged_ports; scalar_t__ es_member_ports; scalar_t__ es_fid; } ;
typedef TYPE_3__ etherswitch_vlangroup_t ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*,int ) ;
 int FUNC_2 (struct arswitch_softc*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_3 (struct arswitch_softc*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (struct arswitch_softc*,scalar_t__*,int) ;

int
FUNC_5(struct arswitch_softc *VAR_3, etherswitch_vlangroup_t *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3, VAR_2);

 if (VAR_4->es_vlangroup > VAR_3->info.es_nvlangroups)
  return (VAR_0);


 VAR_4->es_untagged_ports = 0;
 VAR_4->es_member_ports = 0;


 VAR_4->es_fid = 0;


 FUNC_0(VAR_3);
 VAR_4->es_vid = VAR_3->vid[VAR_4->es_vlangroup];
 if ((VAR_4->es_vid & VAR_1) == 0) {
  FUNC_2(VAR_3);
  return (0);
 }


 switch (VAR_3->vlan_mode) {
 case 129:
  VAR_5 = VAR_3->hal.arswitch_get_dot1q_vlan(VAR_3, &VAR_4->es_member_ports,
      &VAR_4->es_untagged_ports,
      VAR_4->es_vid);
  break;
 case 128:
  VAR_5 = VAR_3->hal.arswitch_get_port_vlan(VAR_3, &VAR_4->es_member_ports,
      VAR_4->es_vid);
  VAR_4->es_untagged_ports = VAR_4->es_member_ports;
  break;
 default:
  VAR_4->es_member_ports = 0;
  VAR_4->es_untagged_ports = 0;
  VAR_5 = -1;
 }
 FUNC_2(VAR_3);

 return (VAR_5);
}
