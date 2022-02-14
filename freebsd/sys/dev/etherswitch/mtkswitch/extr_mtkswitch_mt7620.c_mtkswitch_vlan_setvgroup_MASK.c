
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int) ;} ;
struct TYPE_5__ {scalar_t__ es_nvlangroups; int es_nports; } ;
struct mtkswitch_softc {scalar_t__ vlan_mode; scalar_t__ sc_switchtype; TYPE_2__ hal; TYPE_1__ info; } ;
struct TYPE_7__ {scalar_t__ es_vlangroup; scalar_t__ es_fid; int es_vid; int es_member_ports; int es_untagged_ports; } ;
typedef TYPE_3__ etherswitch_vlangroup_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtkswitch_softc*) ;
 int FUNC_1 (struct mtkswitch_softc*,int ) ;
 int FUNC_2 (struct mtkswitch_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mtkswitch_softc*,int ) ;
 int FUNC_7 (struct mtkswitch_softc*,int ) ;
 int FUNC_8 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_9 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_10 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_11 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_12 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static int
FUNC_13(struct mtkswitch_softc *VAR_17, etherswitch_vlangroup_t *VAR_18)
{
 uint32_t VAR_19, VAR_20, VAR_21;

 FUNC_1(VAR_17, VAR_2);

 if ((VAR_17->vlan_mode != VAR_1) ||
     (VAR_18->es_vlangroup > VAR_17->info.es_nvlangroups))
  return (VAR_0);


 if (VAR_18->es_fid != 0)
  return (VAR_0);

 FUNC_0(VAR_17);
 while (VAR_17->hal.mtkswitch_read(VAR_17, VAR_5) & VAR_12);
 if (VAR_17->sc_switchtype == VAR_6) {
  VAR_19 = VAR_17->hal.mtkswitch_read(VAR_17,
      FUNC_3(VAR_18->es_vlangroup));
  VAR_19 &= ~(VAR_16 << FUNC_5(VAR_18->es_vlangroup));
  VAR_19 |= ((VAR_18->es_vid & VAR_16) << FUNC_5(VAR_18->es_vlangroup));
  VAR_17->hal.mtkswitch_write(VAR_17, FUNC_3(VAR_18->es_vlangroup),
      VAR_19);
  VAR_21 = VAR_18->es_vlangroup;
 } else
  VAR_21 = VAR_18->es_vid;


 VAR_19 = VAR_7 | VAR_11 | VAR_10;
 VAR_19 |= ((VAR_18->es_member_ports & VAR_8) << VAR_9);
 VAR_17->hal.mtkswitch_write(VAR_17, VAR_3, VAR_19);


 VAR_19 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_17->info.es_nports; VAR_20++)
  if (((1<<VAR_20) & VAR_18->es_untagged_ports) == 0)
   VAR_19 |= FUNC_4(VAR_20);
 VAR_17->hal.mtkswitch_write(VAR_17, VAR_4, VAR_19);


 VAR_17->hal.mtkswitch_write(VAR_17, VAR_5, VAR_12 |
     VAR_13 | (VAR_21 & VAR_15));
 while ((VAR_19 = VAR_17->hal.mtkswitch_read(VAR_17, VAR_5)) & VAR_12);

 FUNC_2(VAR_17);

 if (VAR_19 & VAR_14)
  return (VAR_0);

 return (0);
}
