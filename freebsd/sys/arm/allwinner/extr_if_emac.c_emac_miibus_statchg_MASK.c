
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct emac_softc {int emac_link; struct ifnet* emac_ifp; int emac_miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct emac_softc*,int ) ;
 int FUNC_1 (struct emac_softc*,int ,int) ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_11)
{
 struct emac_softc *VAR_12;
 struct mii_data *VAR_13;
 struct ifnet *VAR_14;
 uint32_t VAR_15;

 VAR_12 = FUNC_4(VAR_11);

 VAR_13 = FUNC_4(VAR_12->emac_miibus);
 VAR_14 = VAR_12->emac_ifp;
 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0) ||
     (VAR_14->if_drv_flags & VAR_7) == 0)
  return;

 VAR_12->emac_link = 0;
 if ((VAR_13->mii_media_status & (VAR_8 | VAR_9)) ==
     (VAR_8 | VAR_9)) {
  switch (FUNC_3(VAR_13->mii_media_active)) {
  case 128:
  case 129:
   VAR_12->emac_link = 1;
   break;
  default:
   break;
  }
 }

 if (VAR_12->emac_link != 0) {
  VAR_15 = FUNC_0(VAR_12, VAR_4);
  if ((FUNC_2(VAR_13->mii_media_active) & VAR_10) != 0) {
   VAR_15 &= ~VAR_6;
   VAR_15 |= VAR_5;
  } else {
   VAR_15 &= ~VAR_5;
   VAR_15 |= VAR_6;
  }
  FUNC_1(VAR_12, VAR_4, VAR_15);

  VAR_15 = FUNC_0(VAR_12, VAR_0);
  VAR_15 |= VAR_1 | VAR_3 | VAR_2;
  FUNC_1(VAR_12, VAR_0, VAR_15);
 } else {

  VAR_15 = FUNC_0(VAR_12, VAR_0);
  VAR_15 &= ~(VAR_1 | VAR_3 | VAR_2);
  FUNC_1(VAR_12, VAR_0, VAR_15);
 }
}
