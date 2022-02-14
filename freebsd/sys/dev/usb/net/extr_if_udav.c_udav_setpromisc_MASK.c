
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {struct udav_softc* ue_sc; } ;
struct udav_softc {int sc_ue; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct udav_softc*,int ) ;
 int FUNC_1 (struct udav_softc*,int ,int) ;
 struct ifnet* FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct usb_ether *VAR_5)
{
 struct udav_softc *VAR_6 = VAR_5->ue_sc;
 struct ifnet *VAR_7 = FUNC_2(&VAR_6->sc_ue);
 uint8_t VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_2);
 VAR_8 &= ~(VAR_3 | VAR_4);

 if (VAR_7->if_flags & VAR_1)
  VAR_8 |= VAR_3 | VAR_4;
 else if (VAR_7->if_flags & VAR_0)
  VAR_8 |= VAR_3;


 FUNC_1(VAR_6, VAR_2, VAR_8);
}
