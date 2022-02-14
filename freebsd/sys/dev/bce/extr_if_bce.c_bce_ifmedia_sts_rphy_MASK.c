
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ifnet {void* if_baudrate; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct bce_softc {int bce_phy_flags; struct ifnet* bce_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bce_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct bce_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bce_softc *VAR_19, struct ifmediareq *VAR_20)
{
 struct ifnet *VAR_21;
 u32 VAR_22;

 VAR_21 = VAR_19->bce_ifp;
 FUNC_0(VAR_19);

 VAR_20->ifm_status = VAR_12;
 VAR_20->ifm_active = VAR_13;
 VAR_22 = FUNC_2(VAR_19, VAR_0);

 if ((VAR_22 & VAR_1) != 0)
  VAR_20->ifm_status |= VAR_11;
 else {
  VAR_20->ifm_active |= VAR_18;
  VAR_21->if_baudrate = 0;
  return;
 }
 switch (VAR_22 & VAR_3) {
 case 130:
  VAR_20->ifm_active |= VAR_9 | VAR_17;
  VAR_21->if_baudrate = FUNC_1(10UL);
  break;
 case 131:
  VAR_20->ifm_active |= VAR_9 | VAR_16;
  VAR_21->if_baudrate = FUNC_1(10UL);
  break;
 case 132:
  VAR_20->ifm_active |= VAR_8 | VAR_17;
  VAR_21->if_baudrate = FUNC_1(100UL);
  break;
 case 133:
  VAR_20->ifm_active |= VAR_8 | VAR_16;
  VAR_21->if_baudrate = FUNC_1(100UL);
  break;
 case 134:
  if ((VAR_19->bce_phy_flags & VAR_5) == 0)
   VAR_20->ifm_active |= VAR_7 | VAR_17;
  else
   VAR_20->ifm_active |= VAR_6 | VAR_17;
  VAR_21->if_baudrate = FUNC_1(1000UL);
  break;
 case 135:
  if ((VAR_19->bce_phy_flags & VAR_5) == 0)
   VAR_20->ifm_active |= VAR_7 | VAR_16;
  else
   VAR_20->ifm_active |= VAR_6 | VAR_16;
  VAR_21->if_baudrate = FUNC_1(1000UL);
  break;
 case 128:
  if ((VAR_19->bce_phy_flags & VAR_5) == 0) {
   VAR_20->ifm_active |= VAR_18;
   return;
  } else
   VAR_20->ifm_active |= VAR_10 | VAR_17;
  VAR_21->if_baudrate = FUNC_1(2500UL);
  break;
 case 129:
  if ((VAR_19->bce_phy_flags & VAR_5) == 0) {
   VAR_20->ifm_active |= VAR_18;
   return;
  } else
   VAR_20->ifm_active |= VAR_10 | VAR_16;
  VAR_21->if_baudrate = FUNC_1(2500UL);
  break;
 default:
  VAR_20->ifm_active |= VAR_18;
  return;
 }

 if ((VAR_22 & VAR_2) != 0)
  VAR_20->ifm_active |= VAR_14;
 if ((VAR_22 & VAR_4) != 0)
  VAR_20->ifm_active |= VAR_15;
}
