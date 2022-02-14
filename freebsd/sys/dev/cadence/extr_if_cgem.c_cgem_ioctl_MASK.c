
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct cgem_softc {int if_old_flags; int miibus; } ;
typedef int if_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cgem_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct cgem_softc*,int ) ;






 int FUNC_3 (struct cgem_softc*,int ,int) ;
 int FUNC_4 (struct cgem_softc*) ;
 int FUNC_5 (struct cgem_softc*) ;
 int FUNC_6 (struct cgem_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int FUNC_8 (int ,int,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct cgem_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_17(if_t VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct cgem_softc *VAR_17 = FUNC_12(VAR_14);
 struct ifreq *VAR_18 = (struct ifreq *)VAR_16;
 struct mii_data *VAR_19;
 int VAR_20 = 0, VAR_21;

 switch (VAR_15) {
 case 129:
  FUNC_0(VAR_17);
  if ((FUNC_11(VAR_14) & VAR_13) != 0) {
   if ((FUNC_10(VAR_14) & VAR_11) != 0) {
    if (((FUNC_11(VAR_14) ^ VAR_17->if_old_flags) &
         (VAR_12 | VAR_10)) != 0) {
     FUNC_5(VAR_17);
    }
   } else {
    FUNC_4(VAR_17);
   }
  } else if ((FUNC_10(VAR_14) & VAR_11) != 0) {
   FUNC_14(VAR_14, 0, VAR_11);
   FUNC_6(VAR_17);
  }
  VAR_17->if_old_flags = FUNC_11(VAR_14);
  FUNC_1(VAR_17);
  break;

 case 133:
 case 132:

  if ((FUNC_10(VAR_14) & VAR_11) != 0) {
   FUNC_0(VAR_17);
   FUNC_5(VAR_17);
   FUNC_1(VAR_17);
  }
  break;

 case 128:
 case 131:
  VAR_19 = FUNC_7(VAR_17->miibus);
  VAR_20 = FUNC_16(VAR_14, VAR_18, &VAR_19->mii_media, VAR_15);
  break;

 case 130:
  FUNC_0(VAR_17);
  VAR_21 = FUNC_9(VAR_14) ^ VAR_18->ifr_reqcap;

  if ((VAR_21 & VAR_7) != 0) {
   if ((VAR_18->ifr_reqcap & VAR_7) != 0) {

    FUNC_13(VAR_14, VAR_7 |
         VAR_8, 0);
    FUNC_15(VAR_14, VAR_0, 0);

    FUNC_3(VAR_17, VAR_1,
        FUNC_2(VAR_17, VAR_1) |
         VAR_2);
   } else {

    FUNC_13(VAR_14, 0, VAR_7 |
         VAR_8);
    FUNC_15(VAR_14, 0, VAR_0);

    FUNC_3(VAR_17, VAR_1,
        FUNC_2(VAR_17, VAR_1) &
         ~VAR_2);
   }
  }
  if ((VAR_21 & VAR_5) != 0) {
   if ((VAR_18->ifr_reqcap & VAR_5) != 0) {

    FUNC_13(VAR_14, VAR_5 |
         VAR_6, 0);
    FUNC_3(VAR_17, VAR_3,
        FUNC_2(VAR_17, VAR_3) |
         VAR_4);
   } else {

    FUNC_13(VAR_14, 0, VAR_5 |
         VAR_6);
    FUNC_3(VAR_17, VAR_3,
        FUNC_2(VAR_17, VAR_3) &
         ~VAR_4);
   }
  }
  if ((FUNC_9(VAR_14) & (VAR_5 | VAR_7)) ==
      (VAR_5 | VAR_7))
   FUNC_13(VAR_14, VAR_9, 0);
  else
   FUNC_13(VAR_14, 0, VAR_9);

  FUNC_1(VAR_17);
  break;
 default:
  VAR_20 = FUNC_8(VAR_14, VAR_15, VAR_16);
  break;
 }

 return (VAR_20);
}
