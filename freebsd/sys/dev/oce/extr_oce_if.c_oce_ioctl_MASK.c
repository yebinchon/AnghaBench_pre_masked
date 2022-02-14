
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; int if_mtu; TYPE_2__* if_softc; } ;
struct ifi2creq {int len; size_t offset; int * data; int dev_addr; } ;
typedef int i2c ;
typedef scalar_t__ caddr_t ;
struct TYPE_11__ {int enable_hwlro; int dev; int promisc; int dev_lock; TYPE_1__* ifp; int media; } ;
struct TYPE_10__ {int if_drv_flags; } ;
typedef TYPE_2__* POCE_SOFTC ;


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
 int FUNC_0 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ifi2creq*,int) ;
 int FUNC_3 (struct ifi2creq*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*,char*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct ifreq*) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct ifnet*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (TYPE_2__*) ;
 int * VAR_23 ;

__attribute__((used)) static int
FUNC_18(struct ifnet *VAR_24, u_long VAR_25, caddr_t VAR_26)
{
 struct ifreq *VAR_27 = (struct ifreq *)VAR_26;
 POCE_SOFTC VAR_28 = VAR_24->if_softc;
 struct ifi2creq VAR_29;
 uint8_t VAR_30 = 0;
 int VAR_31 = 0;
 uint32_t VAR_32;

 switch (VAR_25) {

 case 132:
  VAR_31 = FUNC_7(VAR_24, VAR_27, &VAR_28->media, VAR_25);
  break;

 case 128:
  if (VAR_27->ifr_mtu > VAR_18)
   VAR_31 = VAR_5;
  else
   VAR_24->if_mtu = VAR_27->ifr_mtu;
  break;

 case 129:
  if (VAR_24->if_flags & VAR_17) {
   if (!(VAR_24->if_drv_flags & VAR_15)) {
    VAR_28->ifp->if_drv_flags |= VAR_15;
    FUNC_13(VAR_28);
   }
   FUNC_4(VAR_28->dev, "Interface Up\n");
  } else {
   FUNC_0(&VAR_28->dev_lock);

   VAR_28->ifp->if_drv_flags &=
       ~(VAR_15 | VAR_14);
   FUNC_12(VAR_28);

   FUNC_1(&VAR_28->dev_lock);

   FUNC_4(VAR_28->dev, "Interface Down\n");
  }

  if ((VAR_24->if_flags & VAR_16) && !VAR_28->promisc) {
   if (!FUNC_16(VAR_28, (1 | (1 << 1))))
    VAR_28->promisc = VAR_22;
  } else if (!(VAR_24->if_flags & VAR_16) && VAR_28->promisc) {
   if (!FUNC_16(VAR_28, 0))
    VAR_28->promisc = VAR_6;
  }

  break;

 case 135:
 case 134:
  VAR_31 = FUNC_11(VAR_28);
  if (VAR_31)
   FUNC_4(VAR_28->dev,
    "Update multicast address failed\n");
  break;

 case 130:
  VAR_32 = VAR_27->ifr_reqcap ^ VAR_24->if_capenable;

  if (VAR_32 & VAR_11) {
   VAR_24->if_capenable ^= VAR_11;
   VAR_24->if_hwassist ^= (VAR_1 | VAR_3 | VAR_0);

   if (VAR_9 & VAR_24->if_capenable &&
       !(VAR_11 & VAR_24->if_capenable)) {
    VAR_24->if_capenable &= ~VAR_9;
    VAR_24->if_hwassist &= ~VAR_2;
    FUNC_6(VAR_24,
      "TSO disabled due to -txcsum.\n");
   }
  }

  if (VAR_32 & VAR_8)
   VAR_24->if_capenable ^= VAR_8;

  if (VAR_32 & VAR_10) {
   VAR_24->if_capenable ^= VAR_10;

   if (VAR_9 & VAR_24->if_capenable) {
    if (VAR_11 & VAR_24->if_capenable)
     VAR_24->if_hwassist |= VAR_2;
    else {
     VAR_24->if_capenable &= ~VAR_9;
     VAR_24->if_hwassist &= ~VAR_2;
     FUNC_6(VAR_24,
         "Enable txcsum first.\n");
     VAR_31 = VAR_4;
    }
   } else
    VAR_24->if_hwassist &= ~VAR_2;
  }

  if (VAR_32 & VAR_13)
   VAR_24->if_capenable ^= VAR_13;

  if (VAR_32 & VAR_12) {
   VAR_24->if_capenable ^= VAR_12;
   FUNC_17(VAR_28);
  }
  break;

 case 133:
  VAR_31 = FUNC_2(FUNC_8(VAR_27), &VAR_29, sizeof(VAR_29));
  if (VAR_31)
   break;

  if (VAR_29.dev_addr != VAR_19 &&
      VAR_29.dev_addr != VAR_20) {
   VAR_31 = VAR_5;
   break;
  }

  if (VAR_29.len > sizeof(VAR_29.data)) {
   VAR_31 = VAR_5;
   break;
  }

  VAR_31 = FUNC_15(VAR_28, VAR_29.dev_addr);
  if(VAR_31) {
   VAR_31 = -VAR_31;
   break;
  }

  if (VAR_29.dev_addr == VAR_19)
   VAR_30 = VAR_29.offset;
  else
   VAR_30 = VAR_21 + VAR_29.offset;

  FUNC_9(&VAR_29.data[0], &VAR_23[VAR_30], VAR_29.len);

  VAR_31 = FUNC_3(&VAR_29, FUNC_8(VAR_27), sizeof(VAR_29));
  break;

 case 131:
  VAR_31 = FUNC_10(VAR_24, VAR_26);
  break;
 default:
  VAR_31 = FUNC_5(VAR_24, VAR_25, VAR_26);
  break;
 }

 return VAR_31;
}
