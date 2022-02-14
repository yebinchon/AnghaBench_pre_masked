
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; int if_flags; } ;
struct axe_softc {int* sc_ipgs; int sc_flags; int * sc_xfer; int sc_lenmask; } ;
struct TYPE_2__ {int threshold; int byte_cnt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct axe_softc*) ;
 int FUNC_1 (struct axe_softc*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * FUNC_2 (struct ifnet*) ;
 int VAR_27 ;
 TYPE_1__* VAR_28 ;
 int FUNC_3 (struct axe_softc*,int ,int,int,int *) ;
 int FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct axe_softc*) ;
 int FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (struct usb_ether*) ;
 struct ifnet* FUNC_9 (struct usb_ether*) ;
 struct axe_softc* FUNC_10 (struct usb_ether*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct usb_ether *VAR_29)
{
 struct axe_softc *VAR_30 = FUNC_10(VAR_29);
 struct ifnet *VAR_31 = FUNC_9(VAR_29);
 uint16_t VAR_32;

 FUNC_1(VAR_30, VAR_27);

 if ((VAR_31->if_drv_flags & VAR_25) != 0)
  return;


 FUNC_8(VAR_29);

 FUNC_6(VAR_30);


 if (FUNC_0(VAR_30)) {
  FUNC_3(VAR_30, VAR_7, 0, 0, FUNC_2(VAR_31));
  FUNC_3(VAR_30, VAR_6, VAR_30->sc_ipgs[2],
      (VAR_30->sc_ipgs[1] << 8) | (VAR_30->sc_ipgs[0]), ((void*)0));
 } else {
  FUNC_3(VAR_30, VAR_4, 0, 0, FUNC_2(VAR_31));
  FUNC_3(VAR_30, VAR_1, 0, VAR_30->sc_ipgs[0], ((void*)0));
  FUNC_3(VAR_30, VAR_2, 0, VAR_30->sc_ipgs[1], ((void*)0));
  FUNC_3(VAR_30, VAR_3, 0, VAR_30->sc_ipgs[2], ((void*)0));
 }

 if (FUNC_0(VAR_30)) {
  VAR_30->sc_flags &= ~(VAR_17 | VAR_16);
  if ((VAR_30->sc_flags & VAR_15) != 0 &&
      (VAR_31->if_capenable & VAR_23) != 0) {
   VAR_30->sc_lenmask = VAR_14;
   VAR_30->sc_flags |= VAR_16;
  } else {
   VAR_30->sc_lenmask = VAR_18;
   VAR_30->sc_flags |= VAR_17;
  }
 }


 FUNC_4(VAR_29);

 if (VAR_30->sc_flags & VAR_15) {

  FUNC_3(VAR_30, VAR_9,
      VAR_28[VAR_0].threshold,
      VAR_28[VAR_0].byte_cnt, ((void*)0));
 }


 VAR_32 = (VAR_21 | VAR_20);
 if (FUNC_0(VAR_30)) {
  if (VAR_30->sc_flags & VAR_15) {
   VAR_32 |= VAR_10;
   if ((VAR_31->if_capenable & VAR_23) != 0)
    VAR_32 |= VAR_11;
  } else {




   VAR_32 |= VAR_8;
  }
 } else {
  VAR_32 |= VAR_5;
 }


 if (VAR_31->if_flags & VAR_26)
  VAR_32 |= VAR_22;

 if (VAR_31->if_flags & VAR_24)
  VAR_32 |= VAR_19;

 FUNC_3(VAR_30, VAR_13, 0, VAR_32, ((void*)0));


 FUNC_7(VAR_29);

 FUNC_11(VAR_30->sc_xfer[VAR_12]);

 VAR_31->if_drv_flags |= VAR_25;

 FUNC_5(VAR_31);
}
