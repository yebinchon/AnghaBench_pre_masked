
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capenable; int if_flags; int if_drv_flags; struct cpswp_softc* if_softc; } ;
struct cpswp_softc {int if_flags; TYPE_1__* mii; int swsc; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int mii_media; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cpswp_softc*) ;
 int FUNC_2 (struct cpswp_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_3 (struct cpswp_softc*,int) ;
 int FUNC_4 (struct cpswp_softc*,int) ;
 int FUNC_5 (struct cpswp_softc*,int) ;
 int FUNC_6 (struct cpswp_softc*) ;
 int FUNC_7 (struct cpswp_softc*) ;
 int FUNC_8 (struct ifnet*,int,scalar_t__) ;
 int FUNC_9 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 struct cpswp_softc *VAR_8;
 struct ifreq *VAR_9;
 int VAR_10;
 uint32_t VAR_11;

 VAR_10 = 0;
 VAR_8 = VAR_5->if_softc;
 VAR_9 = (struct ifreq *)VAR_7;

 switch (VAR_6) {
 case 130:
  VAR_11 = VAR_5->if_capenable ^ VAR_9->ifr_reqcap;
  if (VAR_11 & VAR_0) {
   if ((VAR_9->ifr_reqcap & VAR_11) & VAR_0)
    VAR_5->if_capenable |= VAR_0;
   else
    VAR_5->if_capenable &= ~VAR_0;
  }
  VAR_10 = 0;
  break;
 case 129:
  FUNC_1(VAR_8);
  if (VAR_5->if_flags & VAR_4) {
   if (VAR_5->if_drv_flags & VAR_2) {
    VAR_11 = VAR_5->if_flags ^ VAR_8->if_flags;
    FUNC_0(VAR_8->swsc,
        ("SIOCSIFFLAGS: UP & RUNNING (changed=0x%x)",
        VAR_11));
    if (VAR_11 & VAR_3)
     FUNC_4(VAR_8,
         VAR_5->if_flags & VAR_3);
    if (VAR_11 & VAR_1)
     FUNC_3(VAR_8,
         VAR_5->if_flags & VAR_1);
   } else {
    FUNC_0(VAR_8->swsc,
        ("SIOCSIFFLAGS: starting up"));
    FUNC_6(VAR_8);
   }
  } else if (VAR_5->if_drv_flags & VAR_2) {
   FUNC_0(VAR_8->swsc, ("SIOCSIFFLAGS: shutting down"));
   FUNC_7(VAR_8);
  }

  VAR_8->if_flags = VAR_5->if_flags;
  FUNC_2(VAR_8);
  break;
 case 133:
  FUNC_5(VAR_8, 0);
  break;
 case 132:



  FUNC_5(VAR_8, 1);
  break;
 case 131:
 case 128:
  VAR_10 = FUNC_9(VAR_5, VAR_9, &VAR_8->mii->mii_media, VAR_6);
  break;
 default:
  VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_7);
 }
 return (VAR_10);
}
