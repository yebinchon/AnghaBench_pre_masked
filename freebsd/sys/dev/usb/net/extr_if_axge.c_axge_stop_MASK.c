
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct axge_softc {int * sc_xfer; int sc_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct axge_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct axge_softc*,int ,int,int ) ;
 int FUNC_2 (struct axge_softc*,int ,int,int ,int ) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 struct axge_softc* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_9)
{
 struct axge_softc *VAR_10;
 struct ifnet *VAR_11;
 uint16_t VAR_12;

 VAR_10 = FUNC_4(VAR_9);
 VAR_11 = FUNC_3(VAR_9);

 FUNC_0(VAR_10, VAR_7);

 VAR_12 = FUNC_1(VAR_10, VAR_0, 2, VAR_4);
 VAR_12 &= ~VAR_8;
 FUNC_2(VAR_10, VAR_0, 2, VAR_4, VAR_12);

 if (VAR_11 != ((void*)0))
  VAR_11->if_drv_flags &= ~(VAR_6 | VAR_5);
 VAR_10->sc_flags &= ~VAR_3;




 FUNC_5(VAR_10->sc_xfer[VAR_2]);
 FUNC_5(VAR_10->sc_xfer[VAR_1]);
}
