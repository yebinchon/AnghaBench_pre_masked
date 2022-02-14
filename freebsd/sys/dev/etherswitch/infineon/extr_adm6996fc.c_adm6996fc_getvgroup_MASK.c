
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct adm6996fc_softc {scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int es_vlangroup; int es_vid; int es_member_ports; int es_untagged_ports; scalar_t__ es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 struct adm6996fc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6, etherswitch_vlangroup_t *VAR_7)
{
 struct adm6996fc_softc *VAR_8;
 device_t VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_1(VAR_6);

 if (VAR_8->vlan_mode == VAR_5) {
  if (VAR_7->es_vlangroup <= 5) {
   VAR_7->es_vid = VAR_3;
   VAR_7->es_vid |= VAR_7->es_vlangroup;
   VAR_11 = FUNC_0(VAR_9,
       VAR_1 + 2 * VAR_7->es_vlangroup);
   VAR_10 = FUNC_0(VAR_9,
       VAR_0 + 2 * VAR_7->es_vlangroup);

   VAR_7->es_member_ports = VAR_11 & 0x3f;
   VAR_7->es_untagged_ports = VAR_7->es_member_ports;
   VAR_7->es_fid = 0;
  } else {
   VAR_7->es_vid = 0;
  }
 } else if (VAR_8->vlan_mode == VAR_4) {
  VAR_11 = FUNC_0(VAR_9,
      VAR_1 + 2 * VAR_7->es_vlangroup);
  VAR_10 = FUNC_0(VAR_9,
      VAR_0 + 2 * VAR_7->es_vlangroup);

  if (VAR_10 & (1 << VAR_2)) {
   VAR_7->es_vid = VAR_3;
   VAR_7->es_vid |= VAR_10 & 0xfff;
   VAR_7->es_member_ports = VAR_11 & 0x3f;
   VAR_7->es_untagged_ports = (~VAR_11 >> 6) & 0x3f;
   VAR_7->es_fid = 0;
  } else {
   VAR_7->es_fid = 0;
  }
 } else {
  VAR_7->es_fid = 0;
 }

 return (0);
}
