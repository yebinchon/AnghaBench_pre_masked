
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct usb_ether {int dummy; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capenable; int if_capabilities; int if_drv_flags; int if_hwassist; struct usb_ether* if_softc; } ;
struct axe_softc {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct axe_softc* FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct ifnet*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_5, u_long VAR_6, caddr_t VAR_7)
{
 struct usb_ether *VAR_8 = VAR_5->if_softc;
 struct axe_softc *VAR_9;
 struct ifreq *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = (struct ifreq *)VAR_7;
 VAR_11 = 0;
 VAR_13 = 0;
 if (VAR_6 == VAR_4) {
  FUNC_0(VAR_9);
  VAR_12 = VAR_10->ifr_reqcap ^ VAR_5->if_capenable;
  if ((VAR_12 & VAR_2) != 0 &&
      (VAR_5->if_capabilities & VAR_2) != 0) {
   VAR_5->if_capenable ^= VAR_2;
   if ((VAR_5->if_capenable & VAR_2) != 0)
    VAR_5->if_hwassist |= VAR_0;
   else
    VAR_5->if_hwassist &= ~VAR_0;
   VAR_13++;
  }
  if ((VAR_12 & VAR_1) != 0 &&
      (VAR_5->if_capabilities & VAR_1) != 0) {
   VAR_5->if_capenable ^= VAR_1;
   VAR_13++;
  }
  if (VAR_13 > 0 && VAR_5->if_drv_flags & VAR_3)
   VAR_5->if_drv_flags &= ~VAR_3;
  else
   VAR_13 = 0;
  FUNC_1(VAR_9);
  if (VAR_13 > 0)
   FUNC_3(VAR_8);
 } else
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7);

 return (VAR_11);
}
