
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_capenable; } ;
struct axge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axge_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct axge_softc*,int ,int ,int) ;
 struct ifnet* FUNC_2 (struct usb_ether*) ;
 struct axge_softc* FUNC_3 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ether *VAR_12)
{
 struct axge_softc *VAR_13;
 struct ifnet *VAR_14;
 uint8_t VAR_15;

 VAR_13 = FUNC_3(VAR_12);
 FUNC_0(VAR_13, VAR_11);
 VAR_14 = FUNC_2(VAR_12);

 VAR_15 = 0;
 if ((VAR_14->if_capenable & VAR_10) != 0)
  VAR_15 |= VAR_6 | VAR_7 | VAR_8;
 FUNC_1(VAR_13, VAR_0, VAR_2, VAR_15);

 VAR_15 = 0;
 if ((VAR_14->if_capenable & VAR_9) != 0)
  VAR_15 |= VAR_3 | VAR_4 | VAR_5;
 FUNC_1(VAR_13, VAR_0, VAR_1, VAR_15);
}
