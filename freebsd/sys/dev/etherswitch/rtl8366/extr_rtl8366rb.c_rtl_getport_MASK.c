
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct rtl8366rb_softc {int numphys; int* vid; int * ifp; int * miibus; scalar_t__ phy4cpu; } ;
struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifmediareq {int ifm_status; int ifm_count; int * ifm_ulist; scalar_t__ ifm_mask; int ifm_active; int ifm_current; } ;
struct TYPE_3__ {int es_port; int es_pvid; int es_flags; int es_ifr; struct ifmediareq es_ifmr; } ;
typedef TYPE_1__ etherswitch_port_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,struct ifmedia*,int ) ;
 int FUNC_5 (int,int*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_12, etherswitch_port_t *VAR_13)
{
 struct rtl8366rb_softc *VAR_14;
 struct ifmedia *VAR_15;
 struct mii_data *VAR_16;
 struct ifmediareq *VAR_17;
 uint16_t VAR_18;
 int VAR_19, VAR_20;

 VAR_14 = FUNC_3(VAR_12);

 VAR_17 = &VAR_13->es_ifmr;

 if (VAR_13->es_port < 0 || VAR_13->es_port >= (VAR_14->numphys + 1))
  return (VAR_0);
 if (VAR_14->phy4cpu && VAR_13->es_port == VAR_14->numphys) {
  VAR_20 = FUNC_1(VAR_13->es_port + 1,
      FUNC_6(VAR_12, FUNC_2(VAR_13->es_port + 1)));
 } else {
  VAR_20 = FUNC_1(VAR_13->es_port,
      FUNC_6(VAR_12, FUNC_2(VAR_13->es_port)));
 }
 VAR_13->es_pvid = VAR_14->vid[VAR_20] & VAR_2;

 if (VAR_13->es_port < VAR_14->numphys) {
  VAR_16 = FUNC_3(VAR_14->miibus[VAR_13->es_port]);
  VAR_15 = &VAR_16->mii_media;
  VAR_19 = FUNC_4(VAR_14->ifp[VAR_13->es_port], &VAR_13->es_ifr, VAR_15, VAR_11);
  if (VAR_19)
   return (VAR_19);
 } else {

  VAR_13->es_flags |= VAR_1;
  FUNC_7(VAR_12, VAR_9 + (VAR_8)/2, &VAR_18, VAR_10);
  VAR_18 = VAR_18 >> (8 * ((VAR_8) % 2));
  FUNC_5(VAR_18, &VAR_17->ifm_status, &VAR_17->ifm_active);
  VAR_17->ifm_current = VAR_17->ifm_active;
  VAR_17->ifm_mask = 0;
  VAR_17->ifm_status = VAR_4 | VAR_5;

  if (VAR_17->ifm_count > 0) {
   VAR_17->ifm_count = 1;
   VAR_17->ifm_ulist[0] = FUNC_0(VAR_6, VAR_3,
       VAR_7, 0);
  } else
   VAR_17->ifm_count = 0;
 }
 return (0);
}
