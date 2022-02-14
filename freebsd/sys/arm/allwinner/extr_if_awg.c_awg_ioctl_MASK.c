
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct awg_softc {int if_flags; int miibus; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct awg_softc*) ;
 int FUNC_1 (struct awg_softc*) ;
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






 int FUNC_2 (struct awg_softc*) ;
 int FUNC_3 (struct awg_softc*) ;
 int FUNC_4 (struct awg_softc*) ;
 int VAR_11 ;
 int FUNC_5 (struct awg_softc*) ;
 int FUNC_6 (struct awg_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct awg_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_19(if_t VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct awg_softc *VAR_15;
 struct mii_data *VAR_16;
 struct ifreq *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_15 = FUNC_14(VAR_12);
 VAR_16 = FUNC_7(VAR_15->miibus);
 VAR_17 = (struct ifreq *)VAR_14;
 VAR_20 = 0;

 switch (VAR_13) {
 case 129:
  FUNC_0(VAR_15);
  if (FUNC_13(VAR_12) & VAR_10) {
   if (FUNC_12(VAR_12) & VAR_8) {
    VAR_18 = FUNC_13(VAR_12) ^ VAR_15->if_flags;
    if ((VAR_18 & (VAR_9|VAR_7)) != 0)
     FUNC_5(VAR_15);
   } else
    FUNC_4(VAR_15);
  } else {
   if (FUNC_12(VAR_12) & VAR_8)
    FUNC_6(VAR_15);
  }
  VAR_15->if_flags = FUNC_13(VAR_12);
  FUNC_1(VAR_15);
  break;
 case 133:
 case 132:
  if (FUNC_12(VAR_12) & VAR_8) {
   FUNC_0(VAR_15);
   FUNC_5(VAR_15);
   FUNC_1(VAR_15);
  }
  break;
 case 128:
 case 131:
  VAR_20 = FUNC_18(VAR_12, VAR_17, &VAR_16->mii_media, VAR_13);
  break;
 case 130:
  VAR_19 = VAR_17->ifr_reqcap ^ FUNC_11(VAR_12);
  if (VAR_19 & VAR_6)
   FUNC_17(VAR_12, VAR_6);
  if (VAR_19 & VAR_4)
   FUNC_17(VAR_12, VAR_4);
  if (VAR_19 & VAR_5)
   FUNC_17(VAR_12, VAR_5);
  if ((FUNC_11(VAR_12) & VAR_5) != 0)
   FUNC_16(VAR_12, VAR_0 | VAR_2 | VAR_1, 0);
  else
   FUNC_16(VAR_12, 0, VAR_0 | VAR_2 | VAR_1);
  break;
 default:
  VAR_20 = FUNC_8(VAR_12, VAR_13, VAR_14);
  break;
 }

 return (VAR_20);
}
