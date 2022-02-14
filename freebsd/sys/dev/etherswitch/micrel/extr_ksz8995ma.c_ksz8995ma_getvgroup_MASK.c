
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksz8995ma_softc {scalar_t__ vlan_mode; scalar_t__ numports; } ;
struct TYPE_3__ {scalar_t__ es_vlangroup; int es_vid; int es_member_ports; int es_untagged_ports; int es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ksz8995ma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_12, etherswitch_vlangroup_t *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 struct ksz8995ma_softc *VAR_18;

 VAR_18 = FUNC_0(VAR_12);

 if (VAR_18->vlan_mode == VAR_2) {
  if (VAR_13->es_vlangroup < VAR_18->numports) {
   VAR_13->es_vid = VAR_0;
   VAR_13->es_vid |= VAR_13->es_vlangroup;
   VAR_14 = FUNC_1(VAR_12, VAR_8 +
       VAR_9 * VAR_13->es_vlangroup);
   VAR_13->es_member_ports = VAR_14 & 0x1f;
   VAR_13->es_untagged_ports = VAR_13->es_member_ports;
   VAR_13->es_fid = 0;
  } else {
   VAR_13->es_vid = 0;
  }
 } else if (VAR_18->vlan_mode == VAR_1) {
  FUNC_2(VAR_12, VAR_3,
      VAR_10);
  FUNC_2(VAR_12, VAR_4, VAR_13->es_vlangroup);
  VAR_16 = FUNC_1(VAR_12, VAR_7);
  VAR_15 = FUNC_1(VAR_12, VAR_6);
  VAR_14 = FUNC_1(VAR_12, VAR_5);
  VAR_17 = VAR_16 << 16 | VAR_15 << 8 | VAR_14;
  if (VAR_16 & VAR_11) {
   VAR_13->es_vid = VAR_0;
   VAR_13->es_vid |= VAR_17 & 0xfff;
   VAR_13->es_member_ports = (VAR_17 >> 16) & 0x1f;
   VAR_13->es_untagged_ports = VAR_13->es_member_ports;
   VAR_13->es_fid = (VAR_17 >> 12) & 0x0f;
  } else {
   VAR_13->es_fid = 0;
  }
 }

 return (0);
}
