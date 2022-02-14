
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ es_nvlangroups; int es_nports; } ;
struct TYPE_5__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int) ;} ;
struct mtkswitch_softc {scalar_t__ vlan_mode; scalar_t__ sc_switchtype; TYPE_2__ info; TYPE_1__ hal; } ;
struct TYPE_7__ {scalar_t__ es_vlangroup; int es_untagged_ports; int es_member_ports; int es_vid; scalar_t__ es_fid; } ;
typedef TYPE_3__ etherswitch_vlangroup_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mtkswitch_softc*,int ) ;
 int FUNC_8 (struct mtkswitch_softc*,int ) ;
 int FUNC_9 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_10 (struct mtkswitch_softc*,int ) ;
 int FUNC_11 (struct mtkswitch_softc*,int ) ;
 int FUNC_12 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static int
FUNC_13(struct mtkswitch_softc *VAR_16, etherswitch_vlangroup_t *VAR_17)
{
 uint32_t VAR_18, VAR_19;

 FUNC_1(VAR_16, VAR_3);

 if ((VAR_16->vlan_mode != VAR_2) ||
     (VAR_17->es_vlangroup > VAR_16->info.es_nvlangroups))
  return (VAR_0);


 VAR_17->es_untagged_ports = 0;
 VAR_17->es_member_ports = 0;


 VAR_17->es_fid = 0;

 FUNC_0(VAR_16);
 if (VAR_16->sc_switchtype == VAR_7) {
  VAR_17->es_vid = (VAR_16->hal.mtkswitch_read(VAR_16,
      FUNC_3(VAR_17->es_vlangroup)) >>
      FUNC_6(VAR_17->es_vlangroup)) & VAR_15;
 } else {
  VAR_17->es_vid = VAR_17->es_vlangroup;
 }

 while (VAR_16->hal.mtkswitch_read(VAR_16, VAR_6) & VAR_11);
 VAR_16->hal.mtkswitch_write(VAR_16, VAR_6, VAR_11 |
     VAR_12 | (VAR_17->es_vlangroup & VAR_14));
 while ((VAR_18 = VAR_16->hal.mtkswitch_read(VAR_16, VAR_6)) & VAR_11);
 if (VAR_18 & VAR_13) {
  FUNC_2(VAR_16);
  return (0);
 }

 VAR_18 = VAR_16->hal.mtkswitch_read(VAR_16, VAR_4);
 if (VAR_18 & VAR_10)
  VAR_17->es_vid |= VAR_1;
 else {
  FUNC_2(VAR_16);
  return (0);
 }
 VAR_17->es_member_ports = (VAR_18 >> VAR_9) & VAR_8;

 VAR_18 = VAR_16->hal.mtkswitch_read(VAR_16, VAR_5);
 for (VAR_19 = 0; VAR_19 < VAR_16->info.es_nports; VAR_19++) {
  if ((VAR_18 & FUNC_4(VAR_19)) == FUNC_5(VAR_19))
   VAR_17->es_untagged_ports |= (1<<VAR_19);
 }

 FUNC_2(VAR_16);
 return (0);
}
