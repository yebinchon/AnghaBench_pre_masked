
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int dummy; } ;
struct mos_softc {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mos_softc*,int ) ;
 int FUNC_1 (struct mos_softc*,int ) ;
 int FUNC_2 (struct mos_softc*,int ,int ) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct mos_softc* FUNC_4 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_5(struct usb_ether *VAR_4)
{
 struct mos_softc *VAR_5 = FUNC_4(VAR_4);
 struct ifnet *VAR_6 = FUNC_3(VAR_4);

 uint8_t VAR_7;

 FUNC_0(VAR_5, VAR_1);

 VAR_7 = FUNC_1(VAR_5, VAR_2);


 if (VAR_6->if_flags & VAR_0) {
  VAR_7 |= VAR_3;
 } else {
  VAR_7 &= ~VAR_3;
 }

 FUNC_2(VAR_5, VAR_2, VAR_7);
}
