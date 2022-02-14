
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifstat {int ascii; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; scalar_t__ if_softc; } ;
struct TYPE_2__ {struct firewire_comm* fc; } ;
struct fwe_softc {int stream_ch; int dma_ch; TYPE_1__ fd; int eth_softc; } ;
struct fwe_eth_softc {struct fwe_softc* fwe; } ;
struct firewire_comm {int (* set_intr ) (struct firewire_comm*,int) ;} ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ,struct ifnet*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct fwe_softc*) ;
 int FUNC_5 (int ,int,char*,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct firewire_comm*,int) ;
 int FUNC_9 (struct firewire_comm*,int) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 struct fwe_softc *VAR_8 = ((struct fwe_eth_softc *)VAR_5->if_softc)->fwe;
 struct ifstat *VAR_9 = ((void*)0);
 int VAR_10, VAR_11;

 switch (VAR_6) {
  case 128:
   VAR_10 = FUNC_6();
   if (VAR_5->if_flags & VAR_3) {
    if (!(VAR_5->if_drv_flags & VAR_1))
     FUNC_3(&VAR_8->eth_softc);
   } else {
    if (VAR_5->if_drv_flags & VAR_1)
     FUNC_4(VAR_8);
   }

   VAR_5->if_flags |= VAR_2;
   FUNC_7(VAR_10);
   break;
  case 132:
  case 131:
   break;

  case 130:
   VAR_10 = FUNC_6();
   VAR_9 = (struct ifstat *)VAR_7;
   FUNC_5(VAR_9->ascii, sizeof(VAR_9->ascii),
       "\tch %d dma %d\n", VAR_8->stream_ch, VAR_8->dma_ch);
   FUNC_7(VAR_10);
   break;
  case 129:
   break;
  default:
   VAR_10 = FUNC_6();
   VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7);
   FUNC_7(VAR_10);
   return (VAR_11);
 }

 return (0);
}
