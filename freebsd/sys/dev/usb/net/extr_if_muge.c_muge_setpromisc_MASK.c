
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct muge_softc {int sc_rfe_ctl; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (struct muge_softc*,int ,int) ;
 int FUNC_2 (struct muge_softc*,char*,char*) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct muge_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_5)
{
 struct muge_softc *VAR_6 = FUNC_4(VAR_5);
 struct ifnet *VAR_7 = FUNC_3(VAR_5);

 FUNC_2(VAR_6, "promiscuous mode %sabled\n",
     (VAR_7->if_flags & VAR_3) ? "en" : "dis");

 FUNC_0(VAR_6, VAR_4);

 if (VAR_7->if_flags & VAR_3)
  VAR_6->sc_rfe_ctl |= VAR_1 | VAR_2;
 else
  VAR_6->sc_rfe_ctl &= ~(VAR_1);

 FUNC_1(VAR_6, VAR_0, VAR_6->sc_rfe_ctl);
}
