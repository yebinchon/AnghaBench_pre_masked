
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct nfe_softc {int nfe_flags; int nfe_if_flags; int nfe_miibus; int nfe_jumbo_disable; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


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
 int FUNC_0 (struct nfe_softc*) ;
 int FUNC_1 (struct nfe_softc*) ;







 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct nfe_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,struct ifreq*,int *,int) ;
 int FUNC_19 (struct nfe_softc*) ;
 int FUNC_20 (struct nfe_softc*) ;
 int FUNC_21 (struct nfe_softc*) ;
 int FUNC_22 (struct nfe_softc*) ;
 int VAR_18 ;
 int FUNC_23 (struct nfe_softc*) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static int
FUNC_25(if_t VAR_19, u_long VAR_20, caddr_t VAR_21)
{
 struct nfe_softc *VAR_22;
 struct ifreq *VAR_23;
 struct mii_data *VAR_24;
 int VAR_25, VAR_26, VAR_27;

 VAR_22 = FUNC_11(VAR_19);
 VAR_23 = (struct ifreq *) VAR_21;
 VAR_25 = 0;
 VAR_26 = 0;
 switch (VAR_20) {
 case 128:
  if (VAR_23->ifr_mtu < VAR_2 || VAR_23->ifr_mtu > VAR_16)
   VAR_25 = VAR_1;
  else if (FUNC_10(VAR_19) != VAR_23->ifr_mtu) {
   if ((((VAR_22->nfe_flags & VAR_17) == 0) ||
       (VAR_22->nfe_jumbo_disable != 0)) &&
       VAR_23->ifr_mtu > VAR_3)
    VAR_25 = VAR_1;
   else {
    FUNC_0(VAR_22);
    FUNC_15(VAR_19, VAR_23->ifr_mtu);
    if (FUNC_8(VAR_19) & VAR_12) {
     FUNC_13(VAR_19, 0, VAR_12);
     FUNC_22(VAR_22);
    }
    FUNC_1(VAR_22);
   }
  }
  break;
 case 130:
  FUNC_0(VAR_22);
  if (FUNC_9(VAR_19) & VAR_14) {





   if ((FUNC_8(VAR_19) & VAR_12) &&
       ((FUNC_9(VAR_19) ^ VAR_22->nfe_if_flags) &
        (VAR_11 | VAR_13)) != 0)
    FUNC_23(VAR_22);
   else
    FUNC_22(VAR_22);
  } else {
   if (FUNC_8(VAR_19) & VAR_12)
    FUNC_24(VAR_19);
  }
  VAR_22->nfe_if_flags = FUNC_9(VAR_19);
  FUNC_1(VAR_22);
  VAR_25 = 0;
  break;
 case 134:
 case 133:
  if ((FUNC_8(VAR_19) & VAR_12) != 0) {
   FUNC_0(VAR_22);
   FUNC_23(VAR_22);
   FUNC_1(VAR_22);
   VAR_25 = 0;
  }
  break;
 case 129:
 case 132:
  VAR_24 = FUNC_2(VAR_22->nfe_miibus);
  VAR_25 = FUNC_18(VAR_19, VAR_23, &VAR_24->mii_media, VAR_20);
  break;
 case 131:
  VAR_27 = VAR_23->ifr_reqcap ^ FUNC_7(VAR_19);
  if ((VAR_27 & VAR_10) != 0 &&
      (FUNC_6(VAR_19) & VAR_10) != 0)
   FUNC_16(VAR_19, VAR_10);
  if ((VAR_27 & VAR_7) != 0 &&
      (FUNC_6(VAR_19) & VAR_7) != 0) {
   FUNC_16(VAR_19, VAR_7);
   if ((FUNC_7(VAR_19) & VAR_7) != 0)
    FUNC_14(VAR_19, VAR_15, 0);
   else
    FUNC_14(VAR_19, 0, VAR_15);
  }
  if ((VAR_27 & VAR_5) != 0 &&
      (FUNC_6(VAR_19) & VAR_5) != 0) {
   FUNC_16(VAR_19, VAR_5);
   VAR_26++;
  }
  if ((VAR_27 & VAR_6) != 0 &&
      (FUNC_6(VAR_19) & VAR_6) != 0) {
   FUNC_16(VAR_19, VAR_6);
   if ((VAR_6 & FUNC_7(VAR_19)) != 0)
    FUNC_14(VAR_19, VAR_0, 0);
   else
    FUNC_14(VAR_19, 0, VAR_0);
  }
  if ((VAR_27 & VAR_9) != 0 &&
      (FUNC_6(VAR_19) & VAR_9) != 0)
   FUNC_16(VAR_19, VAR_9);
  if ((VAR_27 & VAR_8) != 0 &&
      (FUNC_6(VAR_19) & VAR_8) != 0) {
   FUNC_16(VAR_19, VAR_8);
   if ((FUNC_7(VAR_19) & VAR_8) == 0)
    FUNC_12(VAR_19, 0, VAR_9);
   VAR_26++;
  }







  if ((FUNC_7(VAR_19) & VAR_5) == 0) {
   if ((FUNC_7(VAR_19) & VAR_8) != 0)
    VAR_26++;
   FUNC_12(VAR_19, 0,
       (VAR_8 | VAR_9));
  }
  if (VAR_26 > 0 && (FUNC_8(VAR_19) & VAR_12) != 0) {
   FUNC_13(VAR_19, 0, VAR_12);
   FUNC_21(VAR_22);
  }
  FUNC_17(VAR_19);
  break;
 default:
  VAR_25 = FUNC_3(VAR_19, VAR_20, VAR_21);
  break;
 }

 return (VAR_25);
}
