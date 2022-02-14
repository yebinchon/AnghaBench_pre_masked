
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct adm6996fc_softc {scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int es_vlangroup; int es_member_ports; int es_untagged_ports; int es_vid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 struct adm6996fc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, etherswitch_vlangroup_t *VAR_6)
{
 struct adm6996fc_softc *VAR_7;
 device_t VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 VAR_8 = FUNC_1(VAR_5);

 if (VAR_7->vlan_mode == VAR_4) {
  FUNC_0(VAR_8, VAR_1 + 2 * VAR_6->es_vlangroup,
      VAR_6->es_member_ports);
 } else if (VAR_7->vlan_mode == VAR_3) {
  FUNC_0(VAR_8, VAR_1 + 2 * VAR_6->es_vlangroup,
      VAR_6->es_member_ports | ((~VAR_6->es_untagged_ports & 0x3f)<< 6));
  FUNC_0(VAR_8, VAR_0 + 2 * VAR_6->es_vlangroup,
      (1 << VAR_2) | VAR_6->es_vid);
 }

 return (0);
}
