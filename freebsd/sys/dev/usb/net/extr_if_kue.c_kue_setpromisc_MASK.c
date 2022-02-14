
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct kue_softc {int sc_rxfilt; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kue_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kue_softc*,int ,int ) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct kue_softc* FUNC_3 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_4)
{
 struct kue_softc *VAR_5 = FUNC_3(VAR_4);
 struct ifnet *VAR_6 = FUNC_2(VAR_4);

 FUNC_0(VAR_5, VAR_3);

 if (VAR_6->if_flags & VAR_0)
  VAR_5->sc_rxfilt |= VAR_2;
 else
  VAR_5->sc_rxfilt &= ~VAR_2;

 FUNC_1(VAR_5, VAR_1, VAR_5->sc_rxfilt);
}
