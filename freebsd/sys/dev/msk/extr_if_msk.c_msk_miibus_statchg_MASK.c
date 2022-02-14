
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_flags; int msk_port; struct ifnet* msk_ifp; int msk_miibus; struct msk_softc* msk_softc; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int FUNC_0 (struct msk_softc*,int ,int) ;
 int FUNC_1 (struct msk_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct msk_softc*,int ,int ) ;
 int FUNC_3 (struct msk_softc*,int ,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;






 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct msk_if_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct msk_if_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(device_t VAR_26)
{
 struct msk_softc *VAR_27;
 struct msk_if_softc *VAR_28;
 struct mii_data *VAR_29;
 struct ifnet *VAR_30;
 uint32_t VAR_31;

 VAR_28 = FUNC_8(VAR_26);
 VAR_27 = VAR_28->msk_softc;

 FUNC_7(VAR_28);

 VAR_29 = FUNC_8(VAR_28->msk_miibus);
 VAR_30 = VAR_28->msk_ifp;
 if (VAR_29 == ((void*)0) || VAR_30 == ((void*)0) ||
     (VAR_30->if_drv_flags & VAR_15) == 0)
  return;

 VAR_28->msk_flags &= ~VAR_22;
 if ((VAR_29->mii_media_status & (VAR_17 | VAR_16)) ==
     (VAR_17 | VAR_16)) {
  switch (FUNC_5(VAR_29->mii_media_active)) {
  case 128:
  case 129:
   VAR_28->msk_flags |= VAR_22;
   break;
  case 130:
  case 131:
  case 132:
  case 133:
   if ((VAR_28->msk_flags & VAR_21) == 0)
    VAR_28->msk_flags |= VAR_22;
   break;
  default:
   break;
  }
 }

 if ((VAR_28->msk_flags & VAR_22) != 0) {

  FUNC_0(VAR_27, FUNC_6(VAR_28->msk_port, VAR_1),
      VAR_14 | VAR_13);





  VAR_31 = VAR_4;
  switch (FUNC_5(VAR_29->mii_media_active)) {
  case 131:
  case 130:
   VAR_31 |= VAR_10;
   break;
  case 129:
   VAR_31 |= VAR_9;
   break;
  case 128:
   break;
  }

  if ((FUNC_4(VAR_29->mii_media_active) &
      VAR_18) == 0)
   VAR_31 |= VAR_6;
  if ((FUNC_4(VAR_29->mii_media_active) &
       VAR_19) == 0)
   VAR_31 |= VAR_7;
  if ((FUNC_4(VAR_29->mii_media_active) & VAR_20) != 0)
   VAR_31 |= VAR_5;
  else
   VAR_31 |= VAR_6 | VAR_7;
  VAR_31 |= VAR_8 | VAR_11;
  FUNC_3(VAR_27, VAR_28->msk_port, VAR_12, VAR_31);

  FUNC_2(VAR_27, VAR_28->msk_port, VAR_12);
  VAR_31 = VAR_2;
  if ((FUNC_4(VAR_29->mii_media_active) & VAR_20) != 0) {
   if ((FUNC_4(VAR_29->mii_media_active) &
       VAR_18) != 0)
    VAR_31 = VAR_3;
  }
  FUNC_1(VAR_27, FUNC_6(VAR_28->msk_port, VAR_0), VAR_31);


  FUNC_9(VAR_28, VAR_23,
      VAR_24, VAR_25);
 } else {




  FUNC_9(VAR_28, VAR_23, VAR_24, 0);

  VAR_31 = FUNC_2(VAR_27, VAR_28->msk_port, VAR_12);
  if ((VAR_31 & (VAR_8 | VAR_11)) != 0) {
   VAR_31 &= ~(VAR_8 | VAR_11);
   FUNC_3(VAR_27, VAR_28->msk_port, VAR_12, VAR_31);

   FUNC_2(VAR_27, VAR_28->msk_port, VAR_12);
  }
 }
}
