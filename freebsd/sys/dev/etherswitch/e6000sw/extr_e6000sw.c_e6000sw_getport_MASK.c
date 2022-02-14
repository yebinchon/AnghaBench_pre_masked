
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media; int mii_ifp; } ;
struct ifmediareq {int ifm_status; int ifm_active; int ifm_current; scalar_t__ ifm_mask; scalar_t__ ifm_count; } ;
struct TYPE_16__ {scalar_t__ es_port; int es_ifr; struct ifmediareq es_ifmr; int es_flags; int es_pvid; } ;
typedef TYPE_1__ etherswitch_port_t ;
struct TYPE_17__ {scalar_t__ num_ports; } ;
typedef TYPE_2__ e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 struct mii_data* FUNC_10 (TYPE_2__*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_15, etherswitch_port_t *VAR_16)
{
 struct mii_data *VAR_17;
 int VAR_18;
 struct ifmediareq *VAR_19;
 uint32_t VAR_20;

 e6000sw_softc_t *VAR_21 = FUNC_4(VAR_15);
 FUNC_1(VAR_21, VAR_13);

 if (VAR_16->es_port >= VAR_21->num_ports || VAR_16->es_port < 0)
  return (VAR_0);
 if (!FUNC_9(VAR_21, VAR_16->es_port))
  return (0);

 FUNC_0(VAR_21);
 FUNC_5(VAR_21, VAR_16->es_port, &VAR_16->es_pvid);


 VAR_20 = FUNC_11(VAR_21, FUNC_3(VAR_21, VAR_16->es_port), VAR_10);
 if (VAR_20 & VAR_11)
  VAR_16->es_flags |= VAR_2;
 if (VAR_20 & VAR_12)
  VAR_16->es_flags |= VAR_3;

 VAR_18 = 0;
 if (FUNC_8(VAR_21, VAR_16->es_port)) {
  if (FUNC_6(VAR_21, VAR_16->es_port))
   VAR_16->es_flags |= VAR_1;
  VAR_19 = &VAR_16->es_ifmr;
  VAR_19->ifm_status = VAR_6 | VAR_7;
  VAR_19->ifm_count = 0;
  if (FUNC_7(VAR_21, VAR_16->es_port))
   VAR_19->ifm_active = VAR_5;
  else
   VAR_19->ifm_active = VAR_4;
  VAR_19->ifm_active |= VAR_8 | VAR_9;
  VAR_19->ifm_current = VAR_19->ifm_active;
  VAR_19->ifm_mask = 0;
 } else {
  VAR_17 = FUNC_10(VAR_21, VAR_16->es_port);
  VAR_18 = FUNC_12(VAR_17->mii_ifp, &VAR_16->es_ifr,
      &VAR_17->mii_media, VAR_14);
 }
 FUNC_2(VAR_21);

 return (VAR_18);
}
