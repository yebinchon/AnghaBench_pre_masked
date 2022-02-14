
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; scalar_t__ if_softc; } ;
struct TYPE_2__ {struct firewire_comm* fc; } ;
struct fwip_softc {TYPE_1__ fd; int fw_softc; } ;
struct fwip_eth_softc {struct fwip_softc* fwip; } ;
struct firewire_comm {int (* set_intr ) (struct firewire_comm*,int) ;} ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct fwip_softc*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct firewire_comm*,int) ;
 int FUNC_8 (struct firewire_comm*,int) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct fwip_softc *VAR_7 = ((struct fwip_eth_softc *)VAR_4->if_softc)->fwip;
 int VAR_8, VAR_9;

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_5();
  if (VAR_4->if_flags & VAR_2) {
   if (!(VAR_4->if_drv_flags & VAR_1))
    FUNC_3(&VAR_7->fw_softc);
  } else {
   if (VAR_4->if_drv_flags & VAR_1)
    FUNC_4(VAR_7);
  }
  FUNC_6(VAR_8);
  break;
 case 131:
 case 130:
  break;
 case 129:
  break;
 default:
  VAR_8 = FUNC_5();
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6);
  FUNC_6(VAR_8);
  return (VAR_9);
 }

 return (0);
}
