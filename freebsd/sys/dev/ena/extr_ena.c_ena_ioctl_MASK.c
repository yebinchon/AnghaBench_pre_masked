
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ena_adapter {int ioctl_sx; int media; int pdev; } ;
typedef TYPE_1__* if_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_7__ {int if_flags; int if_capenable; int if_mtu; struct ena_adapter* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,struct ifreq*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(if_t VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct ena_adapter *VAR_7;
 struct ifreq *VAR_8;
 int VAR_9;

 VAR_7 = VAR_4->if_softc;
 VAR_8 = (struct ifreq *)VAR_6;




 VAR_9 = 0;
 switch (VAR_5) {
 case 128:
  if (VAR_4->if_mtu == VAR_8->ifr_mtu)
   break;
  FUNC_8(&VAR_7->ioctl_sx);
  FUNC_2(VAR_7);

  FUNC_1(VAR_4, VAR_8->ifr_mtu);

  VAR_9 = FUNC_3(VAR_7);
  FUNC_7(&VAR_7->ioctl_sx);
  break;

 case 130:
  if ((VAR_4->if_flags & VAR_3) != 0) {
   if ((FUNC_5(VAR_4) & VAR_1) != 0) {
    if ((VAR_4->if_flags & (VAR_2 |
        VAR_0)) != 0) {
     FUNC_0(VAR_7->pdev,
         "ioctl promisc/allmulti\n");
    }
   } else {
    FUNC_8(&VAR_7->ioctl_sx);
    VAR_9 = FUNC_3(VAR_7);
    FUNC_7(&VAR_7->ioctl_sx);
   }
  } else {
   if ((FUNC_5(VAR_4) & VAR_1) != 0) {
    FUNC_8(&VAR_7->ioctl_sx);
    FUNC_2(VAR_7);
    FUNC_7(&VAR_7->ioctl_sx);
   }
  }
  break;

 case 134:
 case 133:
  break;

 case 129:
 case 132:
  VAR_9 = FUNC_6(VAR_4, VAR_8, &VAR_7->media, VAR_5);
  break;

 case 131:
  {
   int VAR_10 = 0;

   if (VAR_8->ifr_reqcap != VAR_4->if_capenable) {
    VAR_4->if_capenable = VAR_8->ifr_reqcap;
    VAR_10 = 1;
   }

   if ((VAR_10 != 0) &&
       ((FUNC_5(VAR_4) & VAR_1) != 0)) {
    FUNC_8(&VAR_7->ioctl_sx);
    FUNC_2(VAR_7);
    VAR_9 = FUNC_3(VAR_7);
    FUNC_7(&VAR_7->ioctl_sx);
   }
  }

  break;
 default:
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6);
  break;
 }

 return (VAR_9);
}
