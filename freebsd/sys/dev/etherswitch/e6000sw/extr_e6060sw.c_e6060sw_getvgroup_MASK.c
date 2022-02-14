
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct e6060sw_softc {scalar_t__ vlan_mode; int smi_offset; } ;
struct TYPE_3__ {int es_vid; int es_vlangroup; int es_member_ports; int es_untagged_ports; scalar_t__ es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct e6060sw_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int*,int*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, etherswitch_vlangroup_t *VAR_6)
{
 struct e6060sw_softc *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_2(VAR_5);

 if (VAR_7->vlan_mode == VAR_3) {
  VAR_6->es_vid = VAR_1;
  VAR_6->es_vid |= VAR_6->es_vlangroup;
  VAR_8 = FUNC_0(FUNC_1(VAR_5),
      VAR_0 + VAR_7->smi_offset + VAR_6->es_vlangroup,
      VAR_4);
  VAR_6->es_member_ports = VAR_8 & 0x3f;
  VAR_6->es_untagged_ports = VAR_6->es_member_ports;
  VAR_6->es_fid = 0;
 } else if (VAR_7->vlan_mode == VAR_2) {
  if (VAR_6->es_vlangroup == 0)
   return (0);
  VAR_10 = FUNC_3(VAR_5, VAR_6->es_vlangroup, &VAR_8, &VAR_9);
  if (VAR_10 > 0) {
   VAR_6->es_vid = VAR_1;
   VAR_6->es_vid |= VAR_10;
   VAR_6->es_member_ports = 0;
   VAR_6->es_untagged_ports = 0;
   for (VAR_11 = 0; VAR_11 < 4; ++VAR_11) {
    VAR_12 = VAR_8 >> (VAR_11 * 4) & 3;
    if (VAR_12 == 0 || VAR_12 == 1) {
     VAR_6->es_member_ports |= 1 << VAR_11;
     VAR_6->es_untagged_ports |= 1 << VAR_11;
    } else if (VAR_12 == 2) {
     VAR_6->es_member_ports |= 1 << VAR_11;
    }
   }
   for (VAR_11 = 0; VAR_11 < 2; ++VAR_11) {
    VAR_12 = VAR_9 >> (VAR_11 * 4) & 3;
    if (VAR_12 == 0 || VAR_12 == 1) {
     VAR_6->es_member_ports |= 1 << (VAR_11 + 4);
     VAR_6->es_untagged_ports |= 1 << (VAR_11 + 4);
    } else if (VAR_12 == 2) {
     VAR_6->es_member_ports |= 1 << (VAR_11 + 4);
    }
   }

  }
 } else {
  VAR_6->es_vid = 0;
 }
 return (0);
}
