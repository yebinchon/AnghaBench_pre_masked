
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct netfront_info {int xn_if_flags; int xn_reset; int sc_media; int xbdev; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; int if_mtu; struct netfront_info* if_softc; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct netfront_info*) ;
 int FUNC_1 (struct netfront_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ifnet*,struct ifaddr*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int VAR_11 ;
 int FUNC_5 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_6 (struct netfront_info*) ;
 int FUNC_7 (struct netfront_info*,int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct netfront_info*) ;
 int FUNC_11 (struct netfront_info*) ;
 int FUNC_12 (struct netfront_info*) ;
 int FUNC_13 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_14(struct ifnet *VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct netfront_info *VAR_15 = VAR_12->if_softc;
 struct ifreq *VAR_16 = (struct ifreq *) VAR_14;
 device_t VAR_17;



 int VAR_18, VAR_19 = 0, VAR_20;

 VAR_17 = VAR_15->xbdev;

 switch(VAR_13) {
 case 132:
   VAR_19 = FUNC_4(VAR_12, VAR_13, VAR_14);



  break;
 case 128:
  if (VAR_12->if_mtu == VAR_16->ifr_mtu)
   break;

  VAR_12->if_mtu = VAR_16->ifr_mtu;
  VAR_12->if_drv_flags &= ~VAR_6;
  FUNC_10(VAR_15);
  break;
 case 130:
  FUNC_0(VAR_15);
  if (VAR_12->if_flags & VAR_7) {
   FUNC_11(VAR_15);
  } else {
   if (VAR_12->if_drv_flags & VAR_6) {
    FUNC_12(VAR_15);
   }
  }
  VAR_15->xn_if_flags = VAR_12->if_flags;
  FUNC_1(VAR_15);
  break;
 case 131:
  VAR_18 = VAR_16->ifr_reqcap ^ VAR_12->if_capenable;
  VAR_20 = 0;

  if (VAR_18 & VAR_5) {
   VAR_12->if_capenable ^= VAR_5;
   VAR_12->if_hwassist ^= VAR_8;
  }
  if (VAR_18 & VAR_4) {
   VAR_12->if_capenable ^= VAR_4;
   VAR_12->if_hwassist ^= VAR_1;
  }

  if (VAR_18 & (VAR_3 | VAR_2)) {

   VAR_20 = 1;

   if (VAR_18 & VAR_3)
    VAR_12->if_capenable ^= VAR_3;
   if (VAR_18 & VAR_2)
    VAR_12->if_capenable ^= VAR_2;
  }

  if (VAR_20 == 0)
   break;





  FUNC_3(VAR_15->xbdev,
      "performing interface reset due to feature change\n");
  FUNC_0(VAR_15);
  FUNC_6(VAR_15);
  VAR_15->xn_reset = 1;




  FUNC_1(VAR_15);
  FUNC_13(VAR_9, FUNC_8(VAR_17), "feature-gso-tcpv4");
  FUNC_13(VAR_9, FUNC_8(VAR_17), "feature-no-csum-offload");
  FUNC_9(VAR_17, VAR_10);






  VAR_19 = FUNC_7(VAR_15, 0, "xn_rst", 30*VAR_11);
  break;
 case 135:
 case 134:
  break;
 case 129:
 case 133:
  VAR_19 = FUNC_5(VAR_12, VAR_16, &VAR_15->sc_media, VAR_13);
  break;
 default:
  VAR_19 = FUNC_4(VAR_12, VAR_13, VAR_14);
 }

 return (VAR_19);
}
