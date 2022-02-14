
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct usb_ether {int dummy; } ;
struct ifnet {int if_flags; } ;
struct aue_softc {int dummy; } ;


 int FUNC_0 (struct aue_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aue_softc*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct aue_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct aue_softc*,scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct ifnet*,int ,int *) ;
 struct ifnet* FUNC_5 (struct usb_ether*) ;
 struct aue_softc* FUNC_6 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_7)
{
 struct aue_softc *VAR_8 = FUNC_6(VAR_7);
 struct ifnet *VAR_9 = FUNC_5(VAR_7);
 uint32_t VAR_10;
 uint8_t VAR_11[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

 FUNC_1(VAR_8, VAR_5);

 if (VAR_9->if_flags & VAR_3 || VAR_9->if_flags & VAR_4) {
  FUNC_2(VAR_8, VAR_0, VAR_1);
  return;
 }

 FUNC_0(VAR_8, VAR_0, VAR_1);


 FUNC_4(VAR_9, VAR_6, VAR_11);


 for (VAR_10 = 0; VAR_10 != 8; VAR_10++)
  FUNC_3(VAR_8, VAR_2 + VAR_10, VAR_11[VAR_10]);
}
