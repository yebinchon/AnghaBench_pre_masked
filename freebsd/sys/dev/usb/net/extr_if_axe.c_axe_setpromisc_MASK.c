
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_flags; } ;
struct axe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct axe_softc*,int ,int ,int ,int *) ;
 int FUNC_1 (struct usb_ether*) ;
 int FUNC_2 (int ) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct axe_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct axe_softc *VAR_5 = FUNC_4(VAR_4);
 struct ifnet *VAR_6 = FUNC_3(VAR_4);
 uint16_t VAR_7;

 FUNC_0(VAR_5, VAR_0, 0, 0, &VAR_7);

 VAR_7 = FUNC_2(VAR_7);

 if (VAR_6->if_flags & VAR_3) {
  VAR_7 |= VAR_2;
 } else {
  VAR_7 &= ~VAR_2;
 }

 FUNC_0(VAR_5, VAR_1, 0, VAR_7, ((void*)0));

 FUNC_1(VAR_4);
}
