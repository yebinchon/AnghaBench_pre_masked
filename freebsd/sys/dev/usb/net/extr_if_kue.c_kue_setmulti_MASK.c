
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct kue_softc {int sc_rxfilt; int sc_mcfilters; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kue_softc*,int ) ;
 int FUNC_1 (struct kue_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ifnet*,int ,struct kue_softc*) ;
 int VAR_9 ;
 int FUNC_3 (struct kue_softc*,int ,int ,int,int ,int) ;
 int FUNC_4 (struct kue_softc*,int ,int ) ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 struct kue_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_10)
{
 struct kue_softc *VAR_11 = FUNC_6(VAR_10);
 struct ifnet *VAR_12 = FUNC_5(VAR_10);
 int VAR_13;

 FUNC_0(VAR_11, VAR_8);

 if (VAR_12->if_flags & VAR_1 || VAR_12->if_flags & VAR_2) {
  VAR_11->sc_rxfilt |= VAR_6;
  VAR_11->sc_rxfilt &= ~VAR_7;
  FUNC_4(VAR_11, VAR_4, VAR_11->sc_rxfilt);
  return;
 }

 VAR_11->sc_rxfilt &= ~VAR_6;

 VAR_13 = FUNC_2(VAR_12, VAR_9, VAR_11);

 if (VAR_13 >= FUNC_1(VAR_11))
  VAR_11->sc_rxfilt |= VAR_6;
 else {
  VAR_11->sc_rxfilt |= VAR_7;
  FUNC_3(VAR_11, VAR_5, VAR_3,
      VAR_13, VAR_11->sc_mcfilters, VAR_13 * VAR_0);
 }

 FUNC_4(VAR_11, VAR_4, VAR_11->sc_rxfilt);
}
