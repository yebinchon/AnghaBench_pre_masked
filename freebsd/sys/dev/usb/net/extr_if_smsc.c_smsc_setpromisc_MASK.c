
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct smsc_softc {int sc_mac_csr; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smsc_softc*,char*,char*) ;
 int FUNC_2 (struct smsc_softc*,int ,int ) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct smsc_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct smsc_softc *VAR_5 = FUNC_4(VAR_4);
 struct ifnet *VAR_6 = FUNC_3(VAR_4);

 FUNC_1(VAR_5, "promiscuous mode %sabled\n",
                 (VAR_6->if_flags & VAR_0) ? "en" : "dis");

 FUNC_0(VAR_5, VAR_1);

 if (VAR_6->if_flags & VAR_0)
  VAR_5->sc_mac_csr |= VAR_3;
 else
  VAR_5->sc_mac_csr &= ~VAR_3;

 FUNC_2(VAR_5, VAR_2, VAR_5->sc_mac_csr);
}
