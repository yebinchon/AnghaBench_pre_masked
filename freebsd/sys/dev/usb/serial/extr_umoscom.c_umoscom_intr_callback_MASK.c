
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct umoscom_softc {int sc_ucom; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct umoscom_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct umoscom_softc *VAR_3 = FUNC_8(VAR_1);
 int VAR_4;

 FUNC_9(VAR_1, &VAR_4, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_1)) {
 case 128:
  if (VAR_4 < 2) {
   FUNC_0("too short message\n");
   goto tr_setup;
  }
  FUNC_3(&VAR_3->sc_ucom);

 case 129:
tr_setup:
  FUNC_6(VAR_1, 0, FUNC_5(VAR_1));
  FUNC_4(VAR_1);
  return;

 default:
  if (VAR_2 != VAR_0) {
   FUNC_1(0, "transfer failed\n");

   FUNC_7(VAR_1);
   goto tr_setup;
  }
  return;
 }
}
