
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksz8995ma_softc {scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int es_vlangroup; int es_member_ports; int es_fid; int es_vid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ksz8995ma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_11, etherswitch_vlangroup_t *VAR_12)
{
 struct ksz8995ma_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_0(VAR_11);

 if (VAR_13->vlan_mode == VAR_1) {
  VAR_14 = FUNC_1(VAR_11, VAR_7 +
      VAR_8 * VAR_12->es_vlangroup);
  FUNC_2(VAR_11, VAR_7 +
      VAR_8 * VAR_12->es_vlangroup,
      (VAR_14 & 0xe0) | (VAR_12->es_member_ports & 0x1f));
 } else if (VAR_13->vlan_mode == VAR_0) {
  if (VAR_12->es_member_ports != 0) {
   FUNC_2(VAR_11, VAR_6,
       VAR_9 |
       (VAR_12->es_member_ports & 0x1f));
   FUNC_2(VAR_11, VAR_5,
       VAR_12->es_fid << 4 | VAR_12->es_vid >> 8);
   FUNC_2(VAR_11, VAR_4,
       VAR_12->es_vid & 0xff);
  } else {
   FUNC_2(VAR_11, VAR_6, 0);
   FUNC_2(VAR_11, VAR_5, 0);
   FUNC_2(VAR_11, VAR_4, 0);
  }
  FUNC_2(VAR_11, VAR_2,
      VAR_10);
  FUNC_2(VAR_11, VAR_3, VAR_12->es_vlangroup);
 }

 return (0);
}
