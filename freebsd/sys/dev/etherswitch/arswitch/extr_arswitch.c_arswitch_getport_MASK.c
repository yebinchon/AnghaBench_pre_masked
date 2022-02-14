
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media; int mii_ifp; } ;
struct ifmediareq {int ifm_current; int ifm_active; int ifm_status; scalar_t__ ifm_mask; scalar_t__ ifm_count; } ;
struct TYPE_8__ {int (* arswitch_port_vlan_get ) (struct arswitch_softc*,TYPE_3__*) ;} ;
struct TYPE_7__ {scalar_t__ es_nports; } ;
struct arswitch_softc {TYPE_2__ hal; TYPE_1__ info; } ;
struct TYPE_9__ {scalar_t__ es_port; int es_nleds; int* es_led; int es_ifr; struct ifmediareq es_ifmr; int es_flags; } ;
typedef TYPE_3__ etherswitch_port_t ;
typedef int device_t ;
struct TYPE_10__ {int shift; int reg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct arswitch_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__** VAR_11 ;
 scalar_t__ FUNC_1 (struct arswitch_softc*,scalar_t__) ;
 struct mii_data* FUNC_2 (struct arswitch_softc*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 struct arswitch_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int* VAR_12 ;
 int FUNC_6 (struct arswitch_softc*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_13, etherswitch_port_t *VAR_14)
{
 struct arswitch_softc *VAR_15;
 struct mii_data *VAR_16;
 struct ifmediareq *VAR_17;
 int VAR_18;

 VAR_15 = FUNC_4(VAR_13);

 if (VAR_14->es_port < 0 || VAR_14->es_port > VAR_15->info.es_nports)
  return (VAR_1);

 VAR_18 = VAR_15->hal.arswitch_port_vlan_get(VAR_15, VAR_14);
 if (VAR_18 != 0)
  return (VAR_18);

 VAR_16 = FUNC_2(VAR_15, VAR_14->es_port);
 if (FUNC_1(VAR_15, VAR_14->es_port)) {


  VAR_14->es_flags |= VAR_2;
  VAR_17 = &VAR_14->es_ifmr;
  VAR_17->ifm_count = 0;
  VAR_17->ifm_current = VAR_17->ifm_active =
      VAR_8 | VAR_5 | VAR_9;
  VAR_17->ifm_mask = 0;
  VAR_17->ifm_status = VAR_6 | VAR_7;
 } else if (VAR_16 != ((void*)0)) {
  VAR_18 = FUNC_5(VAR_16->mii_ifp, &VAR_14->es_ifr,
      &VAR_16->mii_media, VAR_10);
  if (VAR_18)
   return (VAR_18);
 } else {
  return (VAR_1);
 }

 if (!FUNC_1(VAR_15, VAR_14->es_port) &&
     FUNC_0(VAR_15, VAR_0)) {
  int VAR_19;
  VAR_14->es_nleds = 3;

  for (VAR_19 = 0; VAR_19 < VAR_14->es_nleds; VAR_19++)
  {
   int VAR_20;
   uint32_t VAR_21;


   VAR_21 = FUNC_3(VAR_13,
       VAR_11[VAR_14->es_port-1][VAR_19].reg);
   VAR_21 = (VAR_21>>VAR_11[VAR_14->es_port-1][VAR_19].shift)&0x03;

   for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++)
   {
    if (VAR_12[VAR_20] == VAR_21) break;
   }


   if (VAR_20 == VAR_4)
    VAR_20 = VAR_3;

   VAR_14->es_led[VAR_19] = VAR_20;
  }
 } else
 {
  VAR_14->es_nleds = 0;
 }

 return (0);
}
