
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct tuntap_softc {int tun_flags; int tun_pid; } ;
struct ifstat {char* ascii; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_capenable; int if_mtu; struct tuntap_softc* if_softc; } ;
struct ifmediareq {int ifm_count; int ifm_ulist; void* ifm_active; void* ifm_current; int ifm_status; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct ifnet*,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct tuntap_softc*) ;
 int VAR_6 ;
 int FUNC_2 (struct tuntap_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ifnet*) ;
 int VAR_7 ;
 int FUNC_10 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct ifreq *VAR_11 = (struct ifreq *)VAR_10;
 struct tuntap_softc *VAR_12;
 struct ifstat *VAR_13;
 struct ifmediareq *VAR_14;
 int VAR_15, VAR_16 = 0;
 bool VAR_17;

 VAR_14 = ((void*)0);
 FUNC_7(&VAR_7);
 VAR_12 = VAR_8->if_softc;
 if (VAR_12 == ((void*)0)) {
  VAR_16 = VAR_1;
  goto bad;
 }
 VAR_17 = (VAR_12->tun_flags & VAR_5) != 0;
 switch(VAR_9) {
 case 132:
  VAR_13 = (struct ifstat *)VAR_10;
  FUNC_1(VAR_12);
  if (VAR_12->tun_pid)
   FUNC_6(VAR_13->ascii, sizeof(VAR_13->ascii),
       "\tOpened by PID %d\n", VAR_12->tun_pid);
  else
   VAR_13->ascii[0] = '\0';
  FUNC_2(VAR_12);
  break;
 case 131:
  if (VAR_17)
   VAR_16 = FUNC_5(VAR_8, VAR_9, VAR_10);
  else
   FUNC_10(VAR_8);
  if (VAR_16 == 0)
      FUNC_0(VAR_8, "address set\n");
  break;
 case 128:
  VAR_8->if_mtu = VAR_11->ifr_mtu;
  FUNC_0(VAR_8, "mtu set\n");
  break;
 case 129:
 case 135:
 case 134:
  break;
 case 133:
  if (!VAR_17) {
   VAR_16 = VAR_0;
   break;
  }

  VAR_14 = (struct ifmediareq *)VAR_10;
  VAR_15 = VAR_14->ifm_count;
  VAR_14->ifm_count = 1;
  VAR_14->ifm_status = VAR_3;
  VAR_14->ifm_active = VAR_4;
  if (VAR_12->tun_flags & VAR_6)
   VAR_14->ifm_status |= VAR_2;
  VAR_14->ifm_current = VAR_14->ifm_active;
  if (VAR_15 >= 1) {
   int VAR_18 = VAR_4;
   VAR_16 = FUNC_4(&VAR_18, VAR_14->ifm_ulist, sizeof(int));
  }
  break;
 case 130:
  FUNC_1(VAR_12);
  VAR_8->if_capenable = VAR_11->ifr_reqcap;
  FUNC_9(VAR_8);
  FUNC_2(VAR_12);
  FUNC_3(VAR_8);
  break;
 default:
  if (VAR_17) {
   VAR_16 = FUNC_5(VAR_8, VAR_9, VAR_10);
  } else {
   VAR_16 = VAR_0;
  }
 }
bad:
 FUNC_8(&VAR_7);
 return (VAR_16);
}
