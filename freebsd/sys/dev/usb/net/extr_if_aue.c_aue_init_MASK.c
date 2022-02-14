
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ether {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct aue_softc {int * sc_xfer; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aue_softc*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct aue_softc*,scalar_t__,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_2 (struct ifnet*) ;
 int VAR_10 ;
 int FUNC_3 (struct aue_softc*,scalar_t__,int) ;
 int FUNC_4 (struct aue_softc*) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_ether*) ;
 struct ifnet* FUNC_8 (struct usb_ether*) ;
 struct aue_softc* FUNC_9 (struct usb_ether*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct usb_ether *VAR_11)
{
 struct aue_softc *VAR_12 = FUNC_9(VAR_11);
 struct ifnet *VAR_13 = FUNC_8(VAR_11);
 int VAR_14;

 FUNC_0(VAR_12, VAR_10);




 FUNC_4(VAR_12);


 for (VAR_14 = 0; VAR_14 != VAR_8; VAR_14++)
  FUNC_3(VAR_12, VAR_7 + VAR_14, FUNC_2(VAR_13)[VAR_14]);


 FUNC_6(VAR_11);


 FUNC_5(VAR_11);


 FUNC_3(VAR_12, VAR_1, VAR_2 | VAR_3);
 FUNC_1(VAR_12, VAR_1, VAR_4);
 FUNC_1(VAR_12, VAR_5, VAR_6);

 FUNC_10(VAR_12->sc_xfer[VAR_0]);

 VAR_13->if_drv_flags |= VAR_9;
 FUNC_7(VAR_11);
}
