
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct et_softc {int sc_flags; struct ifnet* ifp; int sc_miibus; } ;
typedef int device_t ;


 int FUNC_0 (struct et_softc*,int ) ;
 int FUNC_1 (struct et_softc*,int ,int) ;
 int FUNC_2 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;



 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 int VAR_30 ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_31)
{
 struct et_softc *VAR_32;
 struct mii_data *VAR_33;
 struct ifnet *VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37;
 int VAR_38;

 VAR_32 = FUNC_5(VAR_31);

 VAR_33 = FUNC_5(VAR_32->sc_miibus);
 VAR_34 = VAR_32->ifp;
 if (VAR_33 == ((void*)0) || VAR_34 == ((void*)0) ||
     (VAR_34->if_drv_flags & VAR_24) == 0)
  return;

 VAR_32->sc_flags &= ~VAR_1;
 if ((VAR_33->mii_media_status & (VAR_25 | VAR_26)) ==
     (VAR_25 | VAR_26)) {
  switch (FUNC_4(VAR_33->mii_media_active)) {
  case 128:
  case 129:
   VAR_32->sc_flags |= VAR_1;
   break;
  case 130:
   if ((VAR_32->sc_flags & VAR_0) == 0)
    VAR_32->sc_flags |= VAR_1;
   break;
  }
 }


 if ((VAR_32->sc_flags & VAR_1) == 0)
  return;


 VAR_37 = FUNC_0(VAR_32, VAR_21);
 VAR_37 &= ~(VAR_22 | VAR_23);
 VAR_35 = FUNC_0(VAR_32, VAR_3);
 VAR_35 &= ~(VAR_10 | VAR_6 |
     VAR_4);
 VAR_36 = FUNC_0(VAR_32, VAR_11);
 VAR_36 &= ~(VAR_17 | VAR_16 |
     VAR_14 | VAR_12);
 VAR_36 |= VAR_15 | VAR_13 | VAR_18 |
     ((7 << VAR_20) &
     VAR_19);

 if (FUNC_4(VAR_33->mii_media_active) == 130)
  VAR_36 |= VAR_16;
 else {
  VAR_36 |= VAR_17;
  VAR_37 |= VAR_23;
 }

 if (FUNC_3(VAR_33->mii_media_active) & VAR_29) {
  VAR_36 |= VAR_14;
  if (FUNC_3(VAR_33->mii_media_active) & VAR_27)
   VAR_35 |= VAR_6;
 } else
  VAR_37 |= VAR_22;

 FUNC_1(VAR_32, VAR_21, VAR_37);
 FUNC_1(VAR_32, VAR_11, VAR_36);
 VAR_35 |= VAR_9 | VAR_5;
 FUNC_1(VAR_32, VAR_3, VAR_35);



 for (VAR_38 = 0; VAR_38 < 50; ++VAR_38) {
  VAR_35 = FUNC_0(VAR_32, VAR_3);
  if ((VAR_35 & (VAR_8 | VAR_7)) ==
      (VAR_8 | VAR_7))
   break;
  FUNC_2(100);
 }
 if (VAR_38 == 50)
  FUNC_6(VAR_34, "can't enable RX/TX\n");
 VAR_32->sc_flags |= VAR_2;


}
