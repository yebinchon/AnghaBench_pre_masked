
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
 int VAR_4 ;
 int FUNC_0 (struct mos_softc*,int ) ;
 int FUNC_1 (struct ifnet*,int ,int **) ;
 int VAR_5 ;
 int FUNC_2 (struct mos_softc*,int ) ;
 int FUNC_3 (struct mos_softc*,int ,int ) ;
 int FUNC_4 (struct mos_softc*,void*) ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 struct mos_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_6)
{
 struct mos_softc *VAR_7 = FUNC_6(VAR_6);
 struct ifnet *VAR_8 = FUNC_5(VAR_6);
 uint8_t VAR_9;
 uint8_t VAR_10[8] = {0, 0, 0, 0, 0, 0, 0, 0};
 int VAR_11 = 0;

 FUNC_0(VAR_7, VAR_2);

 VAR_9 = FUNC_2(VAR_7, VAR_3);

 if (VAR_8->if_flags & VAR_0 || VAR_8->if_flags & VAR_1)
  VAR_11 = 1;


 FUNC_1(VAR_8, VAR_5, &VAR_10);


 if (VAR_11 == 1) {
  VAR_9 |= VAR_4;
  FUNC_3(VAR_7, VAR_3, VAR_9);
 } else {
  VAR_9 &= ~VAR_4;
  FUNC_4(VAR_7, (void *)&VAR_10);
  FUNC_3(VAR_7, VAR_3, VAR_9);
 }
}
