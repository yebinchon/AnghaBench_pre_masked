
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_ether {int ue_tq; } ;
struct axge_softc {int sc_mtx; int sc_xfer; struct usb_ether sc_ue; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct axge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct axge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct axge_softc*,int ,int,int ) ;
 int FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct axge_softc*,int ,int ,int ) ;
 int FUNC_5 (struct axge_softc*,int ,int,int ,int) ;
 struct axge_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usb_ether*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_7)
{
 struct axge_softc *VAR_8;
 struct usb_ether *VAR_9;
 uint16_t VAR_10;

 VAR_8 = FUNC_6(VAR_7);
 VAR_9 = &VAR_8->sc_ue;
 if (FUNC_7(VAR_7)) {


  FUNC_10(&VAR_9->ue_tq);

  FUNC_0(VAR_8);




  FUNC_3(VAR_9);

  VAR_10 = FUNC_2(VAR_8, VAR_0, 2, VAR_2);
  VAR_10 |= VAR_5 | VAR_6;
  FUNC_5(VAR_8, VAR_0, 2, VAR_2, VAR_10);

  FUNC_4(VAR_8, VAR_0, VAR_1, 0);

  FUNC_5(VAR_8, VAR_0, 2, VAR_4, 0);
  FUNC_1(VAR_8);
 }
 FUNC_11(VAR_8->sc_xfer, VAR_3);
 FUNC_9(VAR_9);
 FUNC_8(&VAR_8->sc_mtx);

 return (0);
}
