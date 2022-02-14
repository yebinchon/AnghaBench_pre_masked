
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct fxp_softc {int if_flags; int flags; int revision; int sc_media; int * miibus; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct fxp_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fxp_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct fxp_softc*) ;
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






 struct mii_data* FUNC_3 (int *) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fxp_softc*,int) ;
 int VAR_22 ;
 int FUNC_8 (struct fxp_softc*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct fxp_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_20(if_t VAR_23, u_long VAR_24, caddr_t VAR_25)
{
 struct fxp_softc *VAR_26 = FUNC_13(VAR_23);
 struct ifreq *VAR_27 = (struct ifreq *)VAR_25;
 struct mii_data *VAR_28;
 int VAR_29, VAR_30, VAR_31 = 0, VAR_32;

 switch (VAR_24) {
 case 129:
  FUNC_1(VAR_26);






  if (FUNC_12(VAR_23) & VAR_21) {
   if (((FUNC_11(VAR_23) & VAR_18) != 0) &&
       ((FUNC_12(VAR_23) ^ VAR_26->if_flags) &
       (VAR_20 | VAR_17 | VAR_19)) != 0) {
    FUNC_15(VAR_23, 0, VAR_18);
    FUNC_7(VAR_26, 0);
   } else if ((FUNC_11(VAR_23) & VAR_18) == 0)
    FUNC_7(VAR_26, 1);
  } else {
   if ((FUNC_11(VAR_23) & VAR_18) != 0)
    FUNC_8(VAR_26);
  }
  VAR_26->if_flags = FUNC_12(VAR_23);
  FUNC_2(VAR_26);
  break;

 case 133:
 case 132:
  FUNC_1(VAR_26);
  if ((FUNC_11(VAR_23) & VAR_18) != 0) {
   FUNC_15(VAR_23, 0, VAR_18);
   FUNC_7(VAR_26, 0);
  }
  FUNC_2(VAR_26);
  break;

 case 128:
 case 131:
  if (VAR_26->miibus != ((void*)0)) {
   VAR_28 = FUNC_3(VAR_26->miibus);
                        VAR_31 = FUNC_19(VAR_23, VAR_27,
                            &VAR_28->mii_media, VAR_24);
  } else {
                        VAR_31 = FUNC_19(VAR_23, VAR_27, &VAR_26->sc_media, VAR_24);
  }
  break;

 case 130:
  VAR_32 = 0;
  VAR_30 = FUNC_10(VAR_23) ^ VAR_27->ifr_reqcap;
  FUNC_1(VAR_26);
  if ((VAR_30 & VAR_11) != 0 &&
      (FUNC_9(VAR_23) & VAR_11) != 0) {
   FUNC_17(VAR_23, VAR_11);
   if ((FUNC_10(VAR_23) & VAR_11) != 0)
    FUNC_16(VAR_23, VAR_2, 0);
   else
    FUNC_16(VAR_23, 0, VAR_2);
  }
  if ((VAR_30 & VAR_9) != 0 &&
      (FUNC_9(VAR_23) & VAR_9) != 0) {
   FUNC_17(VAR_23, VAR_9);
   if ((VAR_26->flags & VAR_3) != 0)
    VAR_32++;
  }
  if ((VAR_30 & VAR_10) != 0 &&
      (FUNC_9(VAR_23) & VAR_10) != 0) {
   FUNC_17(VAR_23, VAR_10);
   if ((FUNC_10(VAR_23) & VAR_10) != 0)
    FUNC_16(VAR_23, VAR_0, 0);
   else
    FUNC_16(VAR_23, 0, VAR_0);
  }
  if ((VAR_30 & VAR_16) != 0 &&
      (FUNC_9(VAR_23) & VAR_16) != 0)
   FUNC_17(VAR_23, VAR_16);
  if ((VAR_30 & VAR_15) != 0 &&
      (FUNC_9(VAR_23) & VAR_15) != 0) {
   FUNC_17(VAR_23, VAR_15);
   if (VAR_26->revision != VAR_6)
    VAR_29 = VAR_4;
   else
    VAR_29 = VAR_5;
   VAR_26->flags ^= VAR_29;
   if (FUNC_12(VAR_23) & VAR_21)
    VAR_32++;
  }
  if ((VAR_30 & VAR_12) != 0 &&
      (FUNC_9(VAR_23) & VAR_12) != 0)
   FUNC_17(VAR_23, VAR_12);
  if ((VAR_30 & VAR_14) != 0 &&
      (FUNC_9(VAR_23) & VAR_14) != 0)
   FUNC_17(VAR_23, VAR_14);
  if ((VAR_30 & VAR_13) != 0 &&
      (FUNC_9(VAR_23) & VAR_13) != 0) {
   FUNC_17(VAR_23, VAR_13);
   if ((FUNC_10(VAR_23) & VAR_13) == 0)
    FUNC_14(VAR_23, 0, VAR_14 |
        VAR_12);
   VAR_32++;
  }
  if (VAR_32 > 0 &&
      (FUNC_11(VAR_23) & VAR_18) != 0) {
   FUNC_15(VAR_23, 0, VAR_18);
   FUNC_7(VAR_26, 0);
  }
  FUNC_2(VAR_26);
  FUNC_18(VAR_23);
  break;

 default:
  VAR_31 = FUNC_4(VAR_23, VAR_24, VAR_25);
 }
 return (VAR_31);
}
