
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtl8366rb_softc {int* vid; scalar_t__ chip_type; scalar_t__ phy4cpu; } ;
struct TYPE_3__ {int es_vlangroup; int es_vid; int es_member_ports; int es_untagged_ports; int es_fid; } ;
typedef TYPE_1__ etherswitch_vlangroup_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct rtl8366rb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_13, etherswitch_vlangroup_t *VAR_14)
{
 struct rtl8366rb_softc *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_1(VAR_13);

 VAR_16 = VAR_14->es_vlangroup;

 VAR_15->vid[VAR_16] = VAR_14->es_vid;

 if (VAR_14->es_member_ports == 0 && VAR_14->es_untagged_ports == 0 && VAR_14->es_vid == 0)
  return (0);
 VAR_15->vid[VAR_16] |= VAR_0;
 FUNC_2(VAR_13, FUNC_0(VAR_2, VAR_16),
  (VAR_14->es_vid << VAR_4) & VAR_3);
 if (VAR_15->phy4cpu) {

  VAR_17 = (VAR_14->es_member_ports & 0x0f) |
      ((VAR_14->es_member_ports & 0x10) << 1);
  VAR_18 = (VAR_14->es_untagged_ports & 0x0f) |
      ((VAR_14->es_untagged_ports & 0x10) << 1);
 } else {
  VAR_17 = VAR_14->es_member_ports;
  VAR_18 = VAR_14->es_untagged_ports;
 }
 if (VAR_15->chip_type == VAR_1) {
  FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_16),
       ((VAR_17 << VAR_9) & VAR_8) |
      ((VAR_18 << VAR_12) & VAR_11));
  FUNC_2(VAR_13, FUNC_0(VAR_7, VAR_16),
      VAR_14->es_fid);
 } else {
  FUNC_2(VAR_13, FUNC_0(VAR_10, VAR_16),
      ((VAR_17 << VAR_9) & VAR_8) |
      ((VAR_18 << VAR_12) & VAR_11) |
      ((VAR_14->es_fid << VAR_6) & VAR_5));
 }
 return (0);
}
