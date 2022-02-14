
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ether {struct udav_softc* ue_sc; } ;
struct udav_softc {int sc_ue; } ;
struct ifnet {int if_flags; } ;
typedef int hashtbl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct udav_softc*,int ,int) ;
 int FUNC_1 (struct udav_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct udav_softc*,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,int*) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (struct udav_softc*,int ,int*,int) ;
 int VAR_7 ;
 struct ifnet* FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct usb_ether *VAR_8)
{
 struct udav_softc *VAR_9 = VAR_8->ue_sc;
 struct ifnet *VAR_10 = FUNC_6(&VAR_9->sc_ue);
 uint8_t VAR_11[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

 FUNC_1(VAR_9, VAR_2);

 if (VAR_10->if_flags & VAR_0 || VAR_10->if_flags & VAR_1) {
  FUNC_2(VAR_9, VAR_4, VAR_5|VAR_6);
  return;
 }


 FUNC_4(VAR_11, 0x00, sizeof(VAR_11));
 VAR_11[7] |= 0x80;
 FUNC_5(VAR_9, VAR_3, VAR_11, sizeof(VAR_11));


 FUNC_3(VAR_10, VAR_7, VAR_11);


 FUNC_0(VAR_9, VAR_4, VAR_5);


 FUNC_5(VAR_9, VAR_3, VAR_11, sizeof(VAR_11));
}
