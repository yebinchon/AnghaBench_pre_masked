
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_ether {int dummy; } ;
struct smsc_softc {int sc_mac_csr; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smsc_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ifnet*,int ,int**) ;
 int FUNC_2 (struct smsc_softc*,char*) ;
 int VAR_9 ;
 int FUNC_3 (struct smsc_softc*,int ,int) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 struct smsc_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_10)
{
 struct smsc_softc *VAR_11 = FUNC_5(VAR_10);
 struct ifnet *VAR_12 = FUNC_4(VAR_10);
 uint32_t VAR_13[2] = { 0, 0 };

 FUNC_0(VAR_11, VAR_2);

 if (VAR_12->if_flags & (VAR_0 | VAR_1)) {
  FUNC_2(VAR_11, "receive all multicast enabled\n");
  VAR_11->sc_mac_csr |= VAR_7;
  VAR_11->sc_mac_csr &= ~VAR_6;

 } else {
  if (FUNC_1(VAR_12, VAR_9, &VAR_13) > 0) {




   VAR_11->sc_mac_csr |= VAR_6;
   VAR_11->sc_mac_csr &= ~(VAR_8 | VAR_7);
  } else {



   VAR_11->sc_mac_csr &= ~(VAR_7 | VAR_6);
  }


  if (VAR_11->sc_mac_csr & VAR_6)
   FUNC_2(VAR_11, "receive select group of macs\n");
  else
   FUNC_2(VAR_11, "receive own packets only\n");
 }


 FUNC_3(VAR_11, VAR_3, VAR_13[1]);
 FUNC_3(VAR_11, VAR_4, VAR_13[0]);
 FUNC_3(VAR_11, VAR_5, VAR_11->sc_mac_csr);
}
