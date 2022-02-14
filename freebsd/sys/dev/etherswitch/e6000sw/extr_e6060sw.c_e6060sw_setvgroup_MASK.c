
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct e6060sw_softc {scalar_t__ vlan_mode; scalar_t__ smi_offset; } ;
struct TYPE_3__ {scalar_t__ es_vlangroup; int es_member_ports; int es_untagged_ports; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct e6060sw_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, etherswitch_vlangroup_t *VAR_5)
{
 struct e6060sw_softc *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_4);

 if (VAR_6->vlan_mode == VAR_2) {
  VAR_7 = FUNC_0(FUNC_2(VAR_4),
      VAR_0 + VAR_6->smi_offset + VAR_5->es_vlangroup,
      VAR_3);
  VAR_7 &= ~0x3f;
  VAR_7 |= VAR_5->es_member_ports;
  FUNC_1(FUNC_2(VAR_4),
      VAR_0 + VAR_6->smi_offset + VAR_5->es_vlangroup,
      VAR_3, VAR_7);
 } else if (VAR_6->vlan_mode == VAR_1) {
  if (VAR_5->es_vlangroup == 0)
   return (0);
  VAR_7 = 0;
  VAR_8 = 0;
  for (VAR_9 = 0; VAR_9 < 6; ++VAR_9) {
   if (VAR_5->es_member_ports &
       VAR_5->es_untagged_ports & (1 << VAR_9)) {
    if (VAR_9 < 4) {
     VAR_7 |= (0xd << VAR_9 * 4);
    } else {
     VAR_8 |= (0xd << (VAR_9 - 4) * 4);
    }
   } else if (VAR_5->es_member_ports & (1 << VAR_9)) {
    if (VAR_9 < 4) {
     VAR_7 |= (0xe << VAR_9 * 4);
    } else {
     VAR_8 |= (0xe << (VAR_9 - 4) * 4);
    }
   } else {
    if (VAR_9 < 4) {
     VAR_7 |= (0x3 << VAR_9 * 4);
    } else {
     VAR_8 |= (0x3 << (VAR_9 - 4) * 4);
    }
   }
  }
  FUNC_4(VAR_4, VAR_5->es_vlangroup, VAR_7, VAR_8);
 }
 return (0);
}
