
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct lio {int if_flags; int oct_dev; int ifmedia; int ifstate; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int dummy; } ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 struct lio* FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct ifnet*,int,int ) ;
 int FUNC_8 (struct ifnet*,int,int) ;
 int FUNC_9 (struct ifnet*,int) ;
 int FUNC_10 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*,int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct lio*) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 (struct ifnet*,int) ;
 int FUNC_18 (struct ifnet*) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct ifnet*) ;

int
FUNC_21(struct ifnet *VAR_20, u_long VAR_21, caddr_t VAR_22)
{
 struct lio *VAR_23 = FUNC_6(VAR_20);
 struct ifreq *VAR_24 = (struct ifreq *)VAR_22;
 int VAR_25 = 0;

 switch (VAR_21) {
 case 132:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFADDR\n");
  FUNC_7(VAR_20, VAR_18, 0);
  VAR_25 = FUNC_2(VAR_20, VAR_21, VAR_22);
  break;
 case 128:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFMTU\n");
  VAR_25 = FUNC_12(VAR_20, VAR_24->ifr_mtu);
  break;
 case 130:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFFLAGS\n");
  if (FUNC_5(VAR_20) & VAR_18) {
   if (FUNC_4(VAR_20) & VAR_16) {
    if ((FUNC_5(VAR_20) ^ VAR_23->if_flags) &
        (VAR_17 | VAR_15))
     VAR_25 = FUNC_11(VAR_20);
   } else {
    if (!(FUNC_1(&VAR_23->ifstate) &
          VAR_19))
     FUNC_14(VAR_23);
   }
  } else {
   if (FUNC_4(VAR_20) & VAR_16)
    FUNC_20(VAR_20);
  }
  VAR_23->if_flags = FUNC_5(VAR_20);
  break;
 case 136:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCADDMULTI\n");
  if (FUNC_4(VAR_20) & VAR_16)
   VAR_25 = FUNC_16(VAR_20);
  break;
 case 135:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFMULTI\n");
  break;
 case 129:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFMEDIA\n");
 case 134:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCGIFMEDIA\n");
 case 133:
  FUNC_13(VAR_23->oct_dev, "ioctl: SIOCGIFXMEDIA\n");
  VAR_25 = FUNC_10(VAR_20, VAR_24, &VAR_23->ifmedia, VAR_21);
  break;
 case 131:
  {
   int VAR_26 = VAR_24->ifr_reqcap ^
     FUNC_3(VAR_20);

   FUNC_13(VAR_23->oct_dev, "ioctl: SIOCSIFCAP (Set Capabilities)\n");

   if (!VAR_26)
    break;

   if (VAR_26 & VAR_10) {
    FUNC_9(VAR_20, VAR_10);
    if (FUNC_3(VAR_20) & VAR_10)
     FUNC_8(VAR_20, (VAR_1 |
         VAR_3 |
         VAR_0), 0);
    else
     FUNC_8(VAR_20, 0,
       (VAR_1 | VAR_3 |
        VAR_0));
   }
   if (VAR_26 & VAR_11) {
    FUNC_9(VAR_20, VAR_11);
    if (FUNC_3(VAR_20) & VAR_11)
     FUNC_8(VAR_20, (VAR_4 |
          VAR_2), 0);
    else
     FUNC_8(VAR_20, 0,
          (VAR_4 |
           VAR_2));
   }
   if (VAR_26 & (VAR_6 | VAR_7))
    VAR_25 |= FUNC_17(VAR_20, (VAR_26 &
              (VAR_6 |
        VAR_7)));

   if (VAR_26 & VAR_8)
    VAR_25 |= FUNC_18(VAR_20);

   if (VAR_26 & VAR_9)
    VAR_25 |= FUNC_19(VAR_20);

   if (VAR_26 & VAR_5)
    VAR_25 |= FUNC_15(VAR_20);

   if (VAR_26 & VAR_13)
    FUNC_9(VAR_20, VAR_13);

   if (VAR_26 & VAR_12)
    FUNC_9(VAR_20, VAR_12);

   if (VAR_26 & VAR_14)
    FUNC_9(VAR_20, VAR_14);

   FUNC_0(VAR_20);
   break;
  }
 default:
  FUNC_13(VAR_23->oct_dev, "ioctl: UNKNOWN (0x%X)\n", (int)VAR_21);
  VAR_25 = FUNC_2(VAR_20, VAR_21, VAR_22);
  break;
 }

 return (VAR_25);
}
