
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_drv_flags; } ;
struct axge_softc {int sc_flags; int sc_ue; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct axge_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct axge_softc*) ;
 struct mii_data* FUNC_2 (struct axge_softc*) ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_5 (struct axge_softc*,int ,int ) ;
 int FUNC_6 (struct axge_softc*,int ,int,int ,int) ;
 int FUNC_7 (struct axge_softc*,int ,int,int ,int*,int) ;
 struct axge_softc* FUNC_8 (int ) ;
 int FUNC_9 (int*,int *,int) ;
 int FUNC_10 (int *) ;
 struct ifnet* FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(device_t VAR_21)
{
 struct axge_softc *VAR_22;
 struct mii_data *VAR_23;
 struct ifnet *VAR_24;
 uint8_t VAR_25, VAR_26[5];
 uint16_t VAR_27;
 int VAR_28;

 VAR_22 = FUNC_8(VAR_21);
 VAR_23 = FUNC_2(VAR_22);
 VAR_28 = FUNC_10(&VAR_22->sc_mtx);
 if (!VAR_28)
  FUNC_0(VAR_22);

 VAR_24 = FUNC_11(&VAR_22->sc_ue);
 if (VAR_23 == ((void*)0) || VAR_24 == ((void*)0) ||
     (VAR_24->if_drv_flags & VAR_5) == 0)
  goto done;

 VAR_22->sc_flags &= ~VAR_1;
 if ((VAR_23->mii_media_status & (VAR_6 | VAR_7)) ==
     (VAR_6 | VAR_7)) {
  switch (FUNC_4(VAR_23->mii_media_active)) {
  case 128:
  case 129:
  case 130:
   VAR_22->sc_flags |= VAR_1;
   break;
  default:
   break;
  }
 }


 if ((VAR_22->sc_flags & VAR_1) == 0)
  goto done;

 VAR_25 = FUNC_5(VAR_22, VAR_0, VAR_3);

 VAR_27 = 0;
 if ((FUNC_3(VAR_23->mii_media_active) & VAR_10) != 0) {
  VAR_27 |= VAR_12;
  if ((FUNC_3(VAR_23->mii_media_active) & VAR_9) != 0)
   VAR_27 |= VAR_17;
  if ((FUNC_3(VAR_23->mii_media_active) & VAR_8) != 0)
   VAR_27 |= VAR_16;
 }
 VAR_27 |= VAR_15;
 switch (FUNC_4(VAR_23->mii_media_active)) {
 case 130:
  VAR_27 |= VAR_13 | VAR_11;
  if (VAR_25 & VAR_19)
   FUNC_9(VAR_26, &VAR_20[0], 5);
  else if (VAR_25 & VAR_18)
   FUNC_9(VAR_26, &VAR_20[1], 5);
  else
   FUNC_9(VAR_26, &VAR_20[3], 5);
  break;
 case 129:
  VAR_27 |= VAR_14;
  if (VAR_25 & (VAR_19 | VAR_18))
   FUNC_9(VAR_26, &VAR_20[2], 5);
  else
   FUNC_9(VAR_26, &VAR_20[3], 5);
  break;
 case 128:
  FUNC_9(VAR_26, &VAR_20[3], 5);
  break;
 }

 FUNC_7(VAR_22, VAR_0, 5, VAR_4, VAR_26, 5);
 FUNC_6(VAR_22, VAR_0, 2, VAR_2, VAR_27);
done:
 if (!VAR_28)
  FUNC_1(VAR_22);
}
