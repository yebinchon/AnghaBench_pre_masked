
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {int if_flags; int enp; int media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; int if_mtu; struct sfxge_softc* if_softc; } ;
struct ifi2creq {int len; int * data; int offset; int dev_addr; } ;
typedef struct ifi2creq sfxge_ioc_t ;
typedef int ioc ;
typedef int i2c ;
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
 int FUNC_0 (int,char*) ;
 int VAR_15 ;
 int FUNC_1 (struct sfxge_softc*) ;
 int FUNC_2 (struct sfxge_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,struct ifi2creq*,int) ;
 int FUNC_4 (struct ifi2creq*,int ,int) ;
 int VAR_18 ;
 int FUNC_5 (int ,int ,int ,int,int *) ;
 int FUNC_6 (struct ifnet*,unsigned long,scalar_t__) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*,char*) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,unsigned long) ;
 int FUNC_10 (struct ifreq*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct sfxge_softc*) ;
 int FUNC_13 (struct sfxge_softc*,struct ifi2creq*) ;
 int FUNC_14 (struct sfxge_softc*) ;
 int FUNC_15 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_16(struct ifnet *VAR_19, unsigned long VAR_20, caddr_t VAR_21)
{
 struct sfxge_softc *VAR_22;
 struct ifreq *VAR_23;
 sfxge_ioc_t VAR_24;
 int VAR_25;

 VAR_23 = (struct ifreq *)VAR_21;
 VAR_22 = VAR_19->if_softc;
 VAR_25 = 0;

 switch (VAR_20) {
 case 130:
  FUNC_1(VAR_22);
  if (VAR_19->if_flags & VAR_14) {
   if (VAR_19->if_drv_flags & VAR_12) {
    if ((VAR_19->if_flags ^ VAR_22->if_flags) &
        (VAR_13 | VAR_11)) {
     FUNC_12(VAR_22);
    }
   } else
    FUNC_14(VAR_22);
  } else
   if (VAR_19->if_drv_flags & VAR_12)
    FUNC_15(VAR_22);
  VAR_22->if_flags = VAR_19->if_flags;
  FUNC_2(VAR_22);
  break;
 case 128:
  if (VAR_23->ifr_mtu == VAR_19->if_mtu) {

   VAR_25 = 0;
  } else if (VAR_23->ifr_mtu > VAR_17) {
   VAR_25 = VAR_6;
  } else if (!(VAR_19->if_drv_flags & VAR_12)) {
   VAR_19->if_mtu = VAR_23->ifr_mtu;
   VAR_25 = 0;
  } else {

   FUNC_1(VAR_22);
   FUNC_15(VAR_22);
   VAR_19->if_mtu = VAR_23->ifr_mtu;
   VAR_25 = FUNC_14(VAR_22);
   FUNC_2(VAR_22);
   if (VAR_25 != 0) {
    VAR_19->if_flags &= ~VAR_14;
    VAR_19->if_drv_flags &= ~VAR_12;
    FUNC_7(VAR_19);
   }
  }
  break;
 case 136:
 case 135:
  if (VAR_19->if_drv_flags & VAR_12)
   FUNC_12(VAR_22);
  break;
 case 131:
 {
  int VAR_26 = VAR_23->ifr_reqcap;
  int VAR_27;

  FUNC_1(VAR_22);


  VAR_27 = VAR_19->if_capenable ^ VAR_26;







  FUNC_0((VAR_26 & ~VAR_19->if_capabilities) == 0,
      ("Unsupported capabilities 0x%x requested 0x%x vs "
       "supported 0x%x",
       VAR_26 & ~VAR_19->if_capabilities,
       VAR_26 , VAR_19->if_capabilities));
  if (VAR_27 & VAR_16) {
   VAR_25 = VAR_6;
   FUNC_2(VAR_22);
   break;
  }


  if ((VAR_27 & VAR_7) &&
      (VAR_26 & (VAR_7 | VAR_9)) == VAR_7) {
   VAR_25 = VAR_5;
   FUNC_2(VAR_22);
   FUNC_8(VAR_19, "enable txcsum before tso4\n");
   break;
  }
  if ((VAR_27 & VAR_8) &&
      (VAR_26 & (VAR_8 | VAR_10)) == VAR_8) {
   VAR_25 = VAR_5;
   FUNC_2(VAR_22);
   FUNC_8(VAR_19, "enable txcsum6 before tso6\n");
   break;
  }

  if (VAR_26 & VAR_9) {
   VAR_19->if_hwassist |= (VAR_0 | VAR_1 | VAR_3);
  } else {
   VAR_19->if_hwassist &= ~(VAR_0 | VAR_1 | VAR_3);
   if (VAR_26 & VAR_7) {
    VAR_26 &= ~VAR_7;
    FUNC_8(VAR_19,
        "tso4 disabled due to -txcsum\n");
   }
  }
  if (VAR_26 & VAR_10) {
   VAR_19->if_hwassist |= (VAR_2 | VAR_4);
  } else {
   VAR_19->if_hwassist &= ~(VAR_2 | VAR_4);
   if (VAR_26 & VAR_8) {
    VAR_26 &= ~VAR_8;
    FUNC_8(VAR_19,
        "tso6 disabled due to -txcsum6\n");
   }
  }
  VAR_19->if_capenable = VAR_26;

  FUNC_2(VAR_22);
  break;
 }
 case 129:
 case 133:
  VAR_25 = FUNC_9(VAR_19, VAR_23, &VAR_22->media, VAR_20);
  break;

 case 134:
 {
  struct ifi2creq VAR_28;

  VAR_25 = FUNC_3(FUNC_10(VAR_23), &VAR_28, sizeof(VAR_28));
  if (VAR_25 != 0)
   break;

  if (VAR_28.len > sizeof(VAR_28.data)) {
   VAR_25 = VAR_6;
   break;
  }

  FUNC_1(VAR_22);
  VAR_25 = FUNC_5(VAR_22->enp, VAR_28.dev_addr,
      VAR_28.offset, VAR_28.len,
      &VAR_28.data[0]);
  FUNC_2(VAR_22);
  if (VAR_25 == 0)
   VAR_25 = FUNC_4(&VAR_28, FUNC_10(VAR_23),
       sizeof(VAR_28));
  break;
 }

 case 132:
  VAR_25 = FUNC_11(VAR_18, VAR_15);
  if (VAR_25 != 0)
   break;
  VAR_25 = FUNC_3(FUNC_10(VAR_23), &VAR_24, sizeof(VAR_24));
  if (VAR_25 != 0)
   return (VAR_25);
  VAR_25 = FUNC_13(VAR_22, &VAR_24);
  if (VAR_25 == 0) {
   VAR_25 = FUNC_4(&VAR_24, FUNC_10(VAR_23),
       sizeof(VAR_24));
  }
  break;
 default:
  VAR_25 = FUNC_6(VAR_19, VAR_20, VAR_21);
 }

 return (VAR_25);
}
