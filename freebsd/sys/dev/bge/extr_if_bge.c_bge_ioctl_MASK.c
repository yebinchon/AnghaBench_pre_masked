
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct bge_softc {int bge_flags; int bge_if_flags; int bge_csum_features; int bge_miibus; int bge_ifmedia; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct bge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bge_softc*,int ,int ) ;
 int FUNC_4 (struct bge_softc*) ;
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







 int FUNC_5 (struct bge_softc*) ;
 int FUNC_6 (struct bge_softc*) ;
 int VAR_21 ;
 int FUNC_7 (struct bge_softc*) ;
 int FUNC_8 (struct bge_softc*) ;
 int FUNC_9 (struct bge_softc*) ;
 int FUNC_10 (struct bge_softc*) ;
 int FUNC_11 (struct bge_softc*,int ,int) ;
 struct mii_data* FUNC_12 (int ) ;
 int FUNC_13 (int ,int,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 struct bge_softc* FUNC_21 (int ) ;
 int FUNC_22 (int ,int,int) ;
 int FUNC_23 (int ,int ,int) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_29(if_t VAR_22, u_long VAR_23, caddr_t VAR_24)
{
 struct bge_softc *VAR_25 = FUNC_21(VAR_22);
 struct ifreq *VAR_26 = (struct ifreq *) VAR_24;
 struct mii_data *VAR_27;
 int VAR_28, VAR_29, VAR_30 = 0;

 switch (VAR_23) {
 case 128:
  if (FUNC_1(VAR_25) ||
      (VAR_25->bge_flags & VAR_0)) {
   if (VAR_26->ifr_mtu < VAR_8 ||
       VAR_26->ifr_mtu > VAR_2) {
    VAR_30 = VAR_7;
    break;
   }
  } else if (VAR_26->ifr_mtu < VAR_8 || VAR_26->ifr_mtu > VAR_9) {
   VAR_30 = VAR_7;
   break;
  }
  FUNC_2(VAR_25);
  if (FUNC_20(VAR_22) != VAR_26->ifr_mtu) {
   FUNC_25(VAR_22, VAR_26->ifr_mtu);
   if (FUNC_18(VAR_22) & VAR_18) {
    FUNC_23(VAR_22, 0, VAR_18);
    FUNC_6(VAR_25);
   }
  }
  FUNC_4(VAR_25);
  break;
 case 130:
  FUNC_2(VAR_25);
  if (FUNC_19(VAR_22) & VAR_20) {
   if (FUNC_18(VAR_22) & VAR_18) {
    VAR_28 = FUNC_19(VAR_22) ^ VAR_25->bge_if_flags;
    if (VAR_28 & VAR_19)
     FUNC_8(VAR_25);
    if (VAR_28 & VAR_17)
     FUNC_7(VAR_25);
   } else
    FUNC_6(VAR_25);
  } else {
   if (FUNC_18(VAR_22) & VAR_18) {
    FUNC_10(VAR_25);
   }
  }
  VAR_25->bge_if_flags = FUNC_19(VAR_22);
  FUNC_4(VAR_25);
  VAR_30 = 0;
  break;
 case 134:
 case 133:
  if (FUNC_18(VAR_22) & VAR_18) {
   FUNC_2(VAR_25);
   FUNC_7(VAR_25);
   FUNC_4(VAR_25);
   VAR_30 = 0;
  }
  break;
 case 129:
 case 132:
  if (VAR_25->bge_flags & VAR_1) {
   VAR_30 = FUNC_28(VAR_22, VAR_26,
       &VAR_25->bge_ifmedia, VAR_23);
  } else {
   VAR_27 = FUNC_12(VAR_25->bge_miibus);
   VAR_30 = FUNC_28(VAR_22, VAR_26,
       &VAR_27->mii_media, VAR_23);
  }
  break;
 case 131:
  VAR_29 = VAR_26->ifr_reqcap ^ FUNC_17(VAR_22);
  if ((VAR_29 & VAR_13) != 0 &&
      (FUNC_16(VAR_22) & VAR_13) != 0) {
   FUNC_26(VAR_22, VAR_13);
   if ((FUNC_17(VAR_22) & VAR_13) != 0)
    FUNC_24(VAR_22,
        VAR_25->bge_csum_features, 0);
   else
    FUNC_24(VAR_22, 0,
        VAR_25->bge_csum_features);
  }

  if ((VAR_29 & VAR_11) != 0 &&
      (FUNC_16(VAR_22) & VAR_11) != 0)
   FUNC_26(VAR_22, VAR_11);

  if ((VAR_29 & VAR_12) != 0 &&
      (FUNC_16(VAR_22) & VAR_12) != 0) {
   FUNC_26(VAR_22, VAR_12);
   if ((FUNC_17(VAR_22) & VAR_12) != 0)
    FUNC_24(VAR_22, VAR_6, 0);
   else
    FUNC_24(VAR_22, 0, VAR_6);
  }

  if (VAR_29 & VAR_16) {
   FUNC_26(VAR_22, VAR_16);
   FUNC_23(VAR_22, 0, VAR_18);
   FUNC_5(VAR_25);
  }

  if ((VAR_29 & VAR_15) != 0 &&
      (FUNC_16(VAR_22) & VAR_15) != 0)
   FUNC_26(VAR_22, VAR_15);
  if ((VAR_29 & VAR_14) != 0 &&
      (FUNC_16(VAR_22) & VAR_14) != 0) {
   FUNC_26(VAR_22, VAR_14);
   if ((FUNC_17(VAR_22) & VAR_14) == 0)
    FUNC_22(VAR_22, 0, VAR_15);
   FUNC_2(VAR_25);
   FUNC_9(VAR_25);
   FUNC_4(VAR_25);
  }



  break;
 default:
  VAR_30 = FUNC_13(VAR_22, VAR_23, VAR_24);
  break;
 }

 return (VAR_30);
}
