
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_flags; } ;
struct axge_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct axge_softc*,int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct axge_softc*,int ,int,int ,int) ;
 int FUNC_2 (struct axge_softc*,int ,int,int ,void*,int) ;
 int FUNC_3 (struct ifnet*,int ,int **) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 struct axge_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_14)
{
 struct axge_softc *VAR_15;
 struct ifnet *VAR_16;
 uint16_t VAR_17;
 uint8_t VAR_18[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

 VAR_15 = FUNC_5(VAR_14);
 VAR_16 = FUNC_4(VAR_14);
 FUNC_0(VAR_15, VAR_6);
 VAR_17 = VAR_10 | VAR_12;
 if (VAR_16->if_flags & VAR_4)
  VAR_17 |= VAR_8;
 if (VAR_16->if_flags & (VAR_3 | VAR_5)) {
  if (VAR_16->if_flags & VAR_5)
   VAR_17 |= VAR_11;
  VAR_17 |= VAR_7;
  FUNC_1(VAR_15, VAR_0, 2, VAR_2, VAR_17);
  return;
 }

 VAR_17 |= VAR_9;
 FUNC_3(VAR_16, VAR_13, &VAR_18);

 FUNC_2(VAR_15, VAR_0, 8, VAR_1, (void *)&VAR_18, 8);
 FUNC_1(VAR_15, VAR_0, 2, VAR_2, VAR_17);
}
