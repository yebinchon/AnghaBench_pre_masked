
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_10__ {int ifru_data; } ;
struct ifreq {int ifr_reqcap; TYPE_1__ ifr_ifru; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; int if_capabilities; TYPE_2__* if_softc; } ;
struct ifi2creq {int dummy; } ;
struct TYPE_11__ {int driver_mtx; int dying; int connector; int media; } ;
typedef TYPE_2__ mxge_softc_t ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;







 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,struct ifi2creq*,int) ;
 int FUNC_2 (struct ifi2creq*,int ,int) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (struct ifreq*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,struct ifi2creq*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(struct ifnet *VAR_21, u_long VAR_22, caddr_t VAR_23)
{
 mxge_softc_t *VAR_24 = VAR_21->if_softc;
 struct ifreq *VAR_25 = (struct ifreq *)VAR_23;
 struct ifi2creq VAR_26;
 int VAR_27, VAR_28;

 VAR_27 = 0;
 switch (VAR_22) {
 case 128:
  VAR_27 = FUNC_8(VAR_24, VAR_25->ifr_mtu);
  break;

 case 129:
  FUNC_6(&VAR_24->driver_mtx);
  if (VAR_24->dying) {
   FUNC_7(&VAR_24->driver_mtx);
   return VAR_5;
  }
  if (VAR_21->if_flags & VAR_18) {
   if (!(VAR_21->if_drv_flags & VAR_16)) {
    VAR_27 = FUNC_13(VAR_24);
   } else {


    FUNC_9(VAR_24,
          VAR_21->if_flags & VAR_17);
    FUNC_14(VAR_24);
   }
  } else {
   if (VAR_21->if_drv_flags & VAR_16) {
    FUNC_10(VAR_24, 0);
   }
  }
  FUNC_7(&VAR_24->driver_mtx);
  break;

 case 134:
 case 133:
  FUNC_6(&VAR_24->driver_mtx);
  if (VAR_24->dying) {
   FUNC_7(&VAR_24->driver_mtx);
   return (VAR_5);
  }
  FUNC_14(VAR_24);
  FUNC_7(&VAR_24->driver_mtx);
  break;

 case 130:
  FUNC_6(&VAR_24->driver_mtx);
  VAR_28 = VAR_25->ifr_reqcap ^ VAR_21->if_capenable;
  if (VAR_28 & VAR_12) {
   if (VAR_12 & VAR_21->if_capenable) {
    VAR_21->if_capenable &= ~(VAR_12|VAR_10);
    VAR_21->if_hwassist &= ~(VAR_0 | VAR_3);
   } else {
    VAR_21->if_capenable |= VAR_12;
    VAR_21->if_hwassist |= (VAR_0 | VAR_3);
   }
  } else if (VAR_28 & VAR_8) {
   if (VAR_8 & VAR_21->if_capenable) {
    VAR_21->if_capenable &= ~VAR_8;
   } else {
    VAR_21->if_capenable |= VAR_8;
   }
  }
  if (VAR_28 & VAR_10) {
   if (VAR_10 & VAR_21->if_capenable) {
    VAR_21->if_capenable &= ~VAR_10;
   } else if (VAR_12 & VAR_21->if_capenable) {
    VAR_21->if_capenable |= VAR_10;
    VAR_21->if_hwassist |= VAR_2;
   } else {
    FUNC_15("mxge requires tx checksum offload"
           " be enabled to use TSO\n");
    VAR_27 = VAR_5;
   }
  }
  if (VAR_28 & VAR_7)
   VAR_21->if_capenable ^= VAR_7;
  if (VAR_28 & VAR_14)
   VAR_21->if_capenable ^= VAR_14;
  if (VAR_28 & VAR_15)
   VAR_21->if_capenable ^= VAR_15;

  if (!(VAR_21->if_capabilities & VAR_15) ||
      !(VAR_21->if_capenable & VAR_14))
   VAR_21->if_capenable &= ~VAR_15;

  FUNC_7(&VAR_24->driver_mtx);
  FUNC_0(VAR_21);

  break;

 case 131:
  FUNC_6(&VAR_24->driver_mtx);
  if (VAR_24->dying) {
   FUNC_7(&VAR_24->driver_mtx);
   return (VAR_5);
  }
  FUNC_12(VAR_24);
  FUNC_7(&VAR_24->driver_mtx);
  VAR_27 = FUNC_4(VAR_21, (struct ifreq *)VAR_23,
        &VAR_24->media, VAR_22);
  break;

 case 132:
  if (VAR_24->connector != VAR_20 &&
      VAR_24->connector != VAR_19) {
   VAR_27 = VAR_6;
   break;
  }
  VAR_27 = FUNC_1(FUNC_5(VAR_25), &VAR_26, sizeof(VAR_26));
  if (VAR_27 != 0)
   break;
  FUNC_6(&VAR_24->driver_mtx);
  if (VAR_24->dying) {
   FUNC_7(&VAR_24->driver_mtx);
   return (VAR_5);
  }
  VAR_27 = FUNC_11(VAR_24, &VAR_26);
  FUNC_7(&VAR_24->driver_mtx);
  if (VAR_27 == 0)
   VAR_27 = FUNC_2(&VAR_26, VAR_25->ifr_ifru.ifru_data,
       sizeof(VAR_26));
  break;
 default:
  VAR_27 = FUNC_3(VAR_21, VAR_22, VAR_23);
  break;
 }
 return VAR_27;
}
