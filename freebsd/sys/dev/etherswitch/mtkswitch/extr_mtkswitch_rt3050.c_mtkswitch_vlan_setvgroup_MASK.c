
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int es_nvlangroups; } ;
struct mtkswitch_softc {scalar_t__ vlan_mode; scalar_t__ sc_switchtype; int valid_vlans; TYPE_1__ info; } ;
struct TYPE_5__ {int es_vlangroup; int es_untagged_ports; int es_member_ports; int es_vid; } ;
typedef TYPE_2__ etherswitch_vlangroup_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;
 int FUNC_3 (struct mtkswitch_softc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mtkswitch_softc*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct mtkswitch_softc *VAR_10, etherswitch_vlangroup_t *VAR_11)
{
 uint32_t VAR_12, VAR_13;

 if ((VAR_10->vlan_mode != VAR_2) ||
     (VAR_11->es_vlangroup > VAR_10->info.es_nvlangroups))
  return (VAR_0);

 FUNC_1(VAR_10, VAR_3);
 FUNC_0(VAR_10);

 VAR_12 = FUNC_2(VAR_10, VAR_4);
 if (VAR_10->sc_switchtype == VAR_5 ||
     (VAR_12 & VAR_6) == 0) {
  VAR_12 &= VAR_9;


  VAR_13 = VAR_11->es_untagged_ports & VAR_11->es_member_ports;

  if (VAR_13 != VAR_11->es_untagged_ports) {

   FUNC_3(VAR_10);
   return (VAR_1);
  }


  if ((VAR_13 & VAR_12) != VAR_13) {

   FUNC_3(VAR_10);
   return (VAR_1);
  }


  VAR_13 = VAR_11->es_member_ports & ~VAR_13;

  if ((VAR_13 & VAR_12) != 0) {

   FUNC_3(VAR_10);
   return (VAR_1);
  }
 } else {

  VAR_12 = FUNC_2(VAR_10, FUNC_6(VAR_11->es_vlangroup));
  VAR_12 &= ~(VAR_9 << FUNC_10(VAR_11->es_vlangroup));
  VAR_12 |= (((VAR_11->es_untagged_ports) & VAR_9) <<
      FUNC_10(VAR_11->es_vlangroup));
  FUNC_7(VAR_10, FUNC_6(VAR_11->es_vlangroup), VAR_12);
 }


 VAR_12 = FUNC_2(VAR_10, FUNC_4(VAR_11->es_vlangroup));
 VAR_12 &= ~(VAR_7 << FUNC_8(VAR_11->es_vlangroup));
 VAR_12 |= (VAR_11->es_vid & VAR_7) << FUNC_8(VAR_11->es_vlangroup);
 FUNC_7(VAR_10, FUNC_4(VAR_11->es_vlangroup), VAR_12);


 VAR_12 = FUNC_2(VAR_10, FUNC_5(VAR_11->es_vlangroup));
 VAR_12 &= ~(VAR_8 << FUNC_9(VAR_11->es_vlangroup));
 VAR_12 |= (VAR_11->es_member_ports << FUNC_9(VAR_11->es_vlangroup));
 FUNC_7(VAR_10, FUNC_5(VAR_11->es_vlangroup), VAR_12);

 VAR_10->valid_vlans |= (1<<VAR_11->es_vlangroup);

 FUNC_3(VAR_10);
 return (0);
}
