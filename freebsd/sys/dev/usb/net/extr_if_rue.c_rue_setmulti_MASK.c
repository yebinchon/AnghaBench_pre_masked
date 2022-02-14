
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct usb_ether {int dummy; } ;
struct rue_softc {int dummy; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rue_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ifnet*,int ,int**) ;
 int FUNC_2 (struct rue_softc*,int ) ;
 int FUNC_3 (struct rue_softc*,int ,int) ;
 int FUNC_4 (struct rue_softc*,int ,int) ;
 int VAR_9 ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 struct rue_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_10)
{
 struct rue_softc *VAR_11 = FUNC_6(VAR_10);
 struct ifnet *VAR_12 = FUNC_5(VAR_10);
 uint16_t VAR_13;
 uint32_t VAR_14[2] = { 0, 0 };
 int VAR_15;

 FUNC_0(VAR_11, VAR_2);

 VAR_13 = FUNC_2(VAR_11, VAR_5);

 if (VAR_12->if_flags & VAR_0 || VAR_12->if_flags & VAR_1) {
  VAR_13 |= (VAR_6 | VAR_7);
  VAR_13 &= ~VAR_8;
  FUNC_3(VAR_11, VAR_5, VAR_13);
  FUNC_4(VAR_11, VAR_3, 0xFFFFFFFF);
  FUNC_4(VAR_11, VAR_4, 0xFFFFFFFF);
  return;
 }


 FUNC_4(VAR_11, VAR_3, 0);
 FUNC_4(VAR_11, VAR_4, 0);


 VAR_15 = FUNC_1(VAR_12, VAR_9, &VAR_14);

 if (VAR_15)
  VAR_13 |= VAR_8;
 else
  VAR_13 &= ~VAR_8;

 VAR_13 &= ~(VAR_6 | VAR_7);

 FUNC_3(VAR_11, VAR_5, VAR_13);
 FUNC_4(VAR_11, VAR_3, VAR_14[0]);
 FUNC_4(VAR_11, VAR_4, VAR_14[1]);
}
