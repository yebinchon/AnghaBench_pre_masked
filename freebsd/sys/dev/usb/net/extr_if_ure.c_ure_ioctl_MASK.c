
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct usb_ether {int dummy; } ;
struct ure_softc {int dummy; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capenable; int if_drv_flags; struct usb_ether* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ure_softc*) ;
 int FUNC_1 (struct ure_softc*) ;
 struct ure_softc* FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct ifnet*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct usb_ether *VAR_5 = VAR_2->if_softc;
 struct ure_softc *VAR_6;
 struct ifreq *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = (struct ifreq *)VAR_4;
 VAR_8 = 0;
 VAR_10 = 0;
 if (VAR_3 == VAR_1) {
  FUNC_0(VAR_6);
  VAR_9 = VAR_7->ifr_reqcap ^ VAR_2->if_capenable;
  if (VAR_10 > 0 && VAR_2->if_drv_flags & VAR_0)
   VAR_2->if_drv_flags &= ~VAR_0;
  else
   VAR_10 = 0;
  FUNC_1(VAR_6);
  if (VAR_10 > 0)
   FUNC_3(VAR_5);
 } else
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4);

 return (VAR_8);
}
