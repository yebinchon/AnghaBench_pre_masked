
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int (* if_ioctl ) (struct ifnet*,int,scalar_t__) ;struct ieee80211vap* if_softc; int (* if_init ) (struct ieee80211vap*) ;int if_mtu; int * if_bridge; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct ieee80211vap {int iv_ifflags; int iv_caps; int iv_stats; int iv_media; int iv_myaddr; int iv_state; int iv_opmode; struct ieee80211com* iv_ic; } ;
struct ieee80211req {int dummy; } ;
struct ieee80211com {int ic_nrunning; int (* ic_ioctl ) (struct ieee80211com*,int,scalar_t__) ;int ic_mcast_task; } ;
struct epoch_tracker {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sa_family; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ieee80211com*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ieee80211com*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct epoch_tracker) ;
 int FUNC_6 (struct epoch_tracker) ;
 int VAR_13 ;
 int FUNC_7 (struct ifnet*,struct ifaddr*) ;
 int FUNC_8 (int *,int ,int) ;
 int VAR_14 ;
 int FUNC_9 (struct ifnet*,int,scalar_t__) ;
 int FUNC_10 (struct ieee80211vap*,int) ;
 int FUNC_11 (struct ieee80211vap*) ;
 int FUNC_12 (struct ieee80211vap*) ;
 int FUNC_13 (struct ieee80211vap*,int,struct ieee80211req*) ;
 int FUNC_14 (struct ieee80211vap*,int,struct ieee80211req*) ;
 int FUNC_15 (struct ieee80211vap*,int) ;
 int FUNC_16 (struct ieee80211com*,int *) ;
 int FUNC_17 (struct ieee80211vap*) ;
 int FUNC_18 (struct ieee80211vap*) ;
 int FUNC_19 (struct ieee80211com*) ;
 int FUNC_20 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_21 (struct ifreq*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct ieee80211vap*) ;
 int FUNC_24 (struct ieee80211vap*) ;
 int FUNC_25 (struct ieee80211com*,int,scalar_t__) ;

int
FUNC_26(struct ifnet *VAR_15, u_long VAR_16, caddr_t VAR_17)
{
 struct ieee80211vap *VAR_18 = VAR_15->if_softc;
 struct ieee80211com *VAR_19 = VAR_18->iv_ic;
 int VAR_20 = 0, VAR_21 = 0, VAR_22;
 struct ifreq *VAR_23;
 struct ifaddr *VAR_24;

 VAR_22 = (VAR_16 != 128 && VAR_16 != 134);
 if (VAR_22 && (VAR_20 = FUNC_12(VAR_18)) != 0)
  return (VAR_20);

 switch (VAR_16) {
 case 130:
  FUNC_2(VAR_19);
  if ((VAR_15->if_flags ^ VAR_18->iv_ifflags) & VAR_11) {






   if (VAR_15->if_bridge == ((void*)0) ||
       (VAR_15->if_flags & VAR_10) != 0 ||
       VAR_18->iv_opmode == VAR_6 ||
       (VAR_18->iv_opmode == VAR_5 &&
       (VAR_18->iv_caps & VAR_2) == 0)) {
    FUNC_15(VAR_18,
        VAR_15->if_flags & VAR_11);
    VAR_18->iv_ifflags ^= VAR_11;
   }
  }
  if ((VAR_15->if_flags ^ VAR_18->iv_ifflags) & VAR_8) {
   FUNC_10(VAR_18, VAR_15->if_flags & VAR_8);
   VAR_18->iv_ifflags ^= VAR_8;
  }
  if (VAR_15->if_flags & VAR_12) {






   if (VAR_18->iv_state == VAR_7) {
    if (VAR_19->ic_nrunning == 0)
     VAR_21 = 1;
    FUNC_17(VAR_18);
   }
  } else if (VAR_15->if_drv_flags & VAR_9) {




   if (VAR_19->ic_nrunning == 1)
    VAR_21 = 1;
   FUNC_18(VAR_18);
  }
  FUNC_3(VAR_19);

  if (VAR_21) {
   struct epoch_tracker VAR_25;

   FUNC_19(VAR_19);
   FUNC_5(VAR_25);
   if (VAR_15->if_ioctl == FUNC_26 &&
       (VAR_15->if_flags & VAR_12) == 0 &&
       !FUNC_1(VAR_18->iv_myaddr, FUNC_4(VAR_15)))
    FUNC_0(VAR_18->iv_myaddr,
        FUNC_4(VAR_15));
   FUNC_6(VAR_25);
  }
  break;
 case 137:
 case 136:
  FUNC_16(VAR_19, &VAR_19->ic_mcast_task);
  break;
 case 129:
 case 133:
  VAR_23 = (struct ifreq *)VAR_17;
  VAR_20 = FUNC_20(VAR_15, VAR_23, &VAR_18->iv_media, VAR_16);
  break;
 case 135:
  VAR_20 = FUNC_13(VAR_18, VAR_16,
    (struct ieee80211req *) VAR_17);
  break;
 case 132:
  VAR_20 = FUNC_22(VAR_14, VAR_13);
  if (VAR_20 == 0)
   VAR_20 = FUNC_14(VAR_18, VAR_16,
     (struct ieee80211req *) VAR_17);
  break;
 case 134:
  VAR_23 = (struct ifreq *)VAR_17;
  FUNC_8(&VAR_18->iv_stats, FUNC_21(VAR_23),
      sizeof (VAR_18->iv_stats));
  break;
 case 128:
  VAR_23 = (struct ifreq *)VAR_17;
  if (!(VAR_4 <= VAR_23->ifr_mtu &&
      VAR_23->ifr_mtu <= VAR_3))
   VAR_20 = VAR_0;
  else
   VAR_15->if_mtu = VAR_23->ifr_mtu;
  break;
 case 131:







  VAR_24 = (struct ifaddr *) VAR_17;
  switch (VAR_24->ifa_addr->sa_family) {
  default:
   if ((VAR_15->if_flags & VAR_12) == 0) {
    VAR_15->if_flags |= VAR_12;
    VAR_15->if_init(VAR_15->if_softc);
   }
   break;
  }
  break;
 default:




  if (VAR_19->ic_ioctl != ((void*)0) &&
      (VAR_20 = VAR_19->ic_ioctl(VAR_19, VAR_16, VAR_17)) != VAR_1)
   break;
  VAR_20 = FUNC_9(VAR_15, VAR_16, VAR_17);
  break;
 }

 if (VAR_22)
  FUNC_11(VAR_18);

 return (VAR_20);
}
