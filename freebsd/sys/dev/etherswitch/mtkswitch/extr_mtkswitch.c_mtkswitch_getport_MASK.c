
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* mtkswitch_port_vlan_get ) (struct mtkswitch_softc*,TYPE_3__*) ;} ;
struct TYPE_6__ {scalar_t__ es_nports; } ;
struct mtkswitch_softc {TYPE_2__ hal; TYPE_1__ info; } ;
struct mii_data {int mii_media; int mii_ifp; } ;
struct ifmediareq {int ifm_current; int ifm_active; int ifm_status; scalar_t__ ifm_mask; scalar_t__ ifm_count; } ;
struct TYPE_8__ {scalar_t__ es_port; struct ifmediareq es_ifmr; int es_ifr; int es_flags; } ;
typedef TYPE_3__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mtkswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (struct mtkswitch_softc*,scalar_t__) ;
 struct mii_data* FUNC_3 (struct mtkswitch_softc*,scalar_t__) ;
 int FUNC_4 (struct mtkswitch_softc*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, etherswitch_port_t *VAR_10)
{
 struct mtkswitch_softc *VAR_11;
 struct mii_data *VAR_12;
 struct ifmediareq *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_10->es_port < 0 || VAR_10->es_port > VAR_11->info.es_nports)
  return (VAR_0);

 VAR_14 = VAR_11->hal.mtkswitch_port_vlan_get(VAR_11, VAR_10);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_12 = FUNC_3(VAR_11, VAR_10->es_port);
 if (FUNC_2(VAR_11, VAR_10->es_port)) {


  VAR_10->es_flags |= VAR_1;
  VAR_13 = &VAR_10->es_ifmr;
  VAR_13->ifm_count = 0;
  VAR_13->ifm_current = VAR_13->ifm_active =
      VAR_5 | VAR_2 | VAR_6;
  VAR_13->ifm_mask = 0;
  VAR_13->ifm_status = VAR_3 | VAR_4;
 } else if (VAR_12 != ((void*)0)) {
  VAR_14 = FUNC_1(VAR_12->mii_ifp, &VAR_10->es_ifr,
      &VAR_12->mii_media, VAR_8);
  if (VAR_14)
   return (VAR_14);
 } else {
  VAR_13 = &VAR_10->es_ifmr;
  VAR_13->ifm_count = 0;
  VAR_13->ifm_current = VAR_13->ifm_active = VAR_7;
  VAR_13->ifm_mask = 0;
  VAR_13->ifm_status = 0;
 }
 return (0);
}
