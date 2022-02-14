
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct usb_ether {int dummy; } ;
struct smsc_softc {int dummy; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capenable; int if_capabilities; int if_drv_flags; int (* if_init ) (struct usb_ether*) ;struct usb_ether* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct smsc_softc*) ;
 int FUNC_1 (struct smsc_softc*) ;
 int FUNC_2 (struct usb_ether*) ;
 struct smsc_softc* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct ifnet*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct usb_ether *VAR_6 = VAR_3->if_softc;
 struct smsc_softc *VAR_7;
 struct ifreq *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4 == VAR_2) {

  VAR_7 = FUNC_3(VAR_6);
  VAR_8 = (struct ifreq *)VAR_5;

  FUNC_0(VAR_7);

  VAR_9 = 0;
  VAR_11 = 0;

  VAR_10 = VAR_8->ifr_reqcap ^ VAR_3->if_capenable;


  if ((VAR_10 & VAR_0) != 0 &&
      (VAR_3->if_capabilities & VAR_0) != 0) {
   VAR_3->if_capenable ^= VAR_0;

   if (VAR_3->if_drv_flags & VAR_1) {
    VAR_3->if_drv_flags &= ~VAR_1;
    VAR_11 = 1;
   }
  }

  FUNC_1(VAR_7);
  if (VAR_11)



   VAR_3->if_init(VAR_6);


 } else {
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5);
 }

 return (VAR_9);
}
