
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_capenable; } ;
struct axe_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axe_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct axe_softc*,int ,int,int,int *) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct axe_softc* FUNC_3 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_15)
{
 struct axe_softc *VAR_16;
 struct ifnet *VAR_17;
 uint16_t VAR_18, VAR_19;

 VAR_16 = FUNC_3(VAR_15);
 FUNC_0(VAR_16, VAR_14);

 if ((VAR_16->sc_flags & VAR_2) != 0) {
  VAR_17 = FUNC_2(VAR_15);
  VAR_18 = 0;
  VAR_19 = 0;
  if ((VAR_17->if_capenable & VAR_13) != 0)
   VAR_18 |= VAR_9 | VAR_10 |
       VAR_11;
  FUNC_1(VAR_16, VAR_1, VAR_19, VAR_18, ((void*)0));
  VAR_18 = 0;
  VAR_19 = 0;
  if ((VAR_17->if_capenable & VAR_12) != 0)
   VAR_18 |= VAR_5 | VAR_6 |
       VAR_7 | VAR_8 | VAR_3 |
       VAR_4;
  FUNC_1(VAR_16, VAR_0, VAR_19, VAR_18, ((void*)0));
 }
}
