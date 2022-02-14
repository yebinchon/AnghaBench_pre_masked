
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct axe_softc {int sc_flags; int sc_ue; int sc_mtx; } ;
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
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*) ;
 int VAR_10 ;
 int FUNC_2 (struct axe_softc*) ;
 struct mii_data* FUNC_3 (struct axe_softc*) ;
 int VAR_11 ;



 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct axe_softc*,int ,int ,int,int *) ;
 struct axe_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *) ;
 struct ifnet* FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_17)
{
 struct axe_softc *VAR_18 = FUNC_7(VAR_17);
 struct mii_data *VAR_19 = FUNC_3(VAR_18);
 struct ifnet *VAR_20;
 uint16_t VAR_21;
 int VAR_22, VAR_23;

 VAR_23 = FUNC_9(&VAR_18->sc_mtx);
 if (!VAR_23)
  FUNC_1(VAR_18);

 VAR_20 = FUNC_10(&VAR_18->sc_ue);
 if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0) ||
     (VAR_20->if_drv_flags & VAR_11) == 0)
  goto done;

 VAR_18->sc_flags &= ~VAR_9;
 if ((VAR_19->mii_media_status & (VAR_12 | VAR_13)) ==
     (VAR_12 | VAR_13)) {
  switch (FUNC_5(VAR_19->mii_media_active)) {
  case 128:
  case 129:
   VAR_18->sc_flags |= VAR_9;
   break;
  case 130:
   if ((VAR_18->sc_flags & VAR_8) == 0)
    break;
   VAR_18->sc_flags |= VAR_9;
   break;
  default:
   break;
  }
 }


 if ((VAR_18->sc_flags & VAR_9) == 0)
  goto done;

 VAR_21 = 0;
 if ((FUNC_4(VAR_19->mii_media_active) & VAR_16) != 0) {
  VAR_21 |= VAR_10;
  if (FUNC_0(VAR_18)) {
   if ((FUNC_4(VAR_19->mii_media_active) &
       VAR_15) != 0)
    VAR_21 |= VAR_6;
   if ((FUNC_4(VAR_19->mii_media_active) &
       VAR_14) != 0)
    VAR_21 |= VAR_4;
  }
 }
 if (FUNC_0(VAR_18)) {
  VAR_21 |= VAR_5 | VAR_3;
  if ((VAR_18->sc_flags & VAR_8) != 0)
   VAR_21 |= VAR_1;
  switch (FUNC_5(VAR_19->mii_media_active)) {
  case 130:
   VAR_21 |= VAR_2 | VAR_1;
   break;
  case 129:
   VAR_21 |= VAR_0;
   break;
  case 128:

   break;
  }
 }
 VAR_22 = FUNC_6(VAR_18, VAR_7, 0, VAR_21, ((void*)0));
 if (VAR_22)
  FUNC_8(VAR_17, "media change failed, error %d\n", VAR_22);
done:
 if (!VAR_23)
  FUNC_2(VAR_18);
}
