
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct umoscom_softc {int sc_ucom; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int *,struct usb_page_cache*,int ,int ,int *) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct umoscom_softc* FUNC_8 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct umoscom_softc *VAR_4 = FUNC_8(VAR_2);
 struct usb_page_cache *VAR_5;
 uint32_t VAR_6;

 switch (FUNC_2(VAR_2)) {
 case 129:
 case 128:
tr_setup:
  FUNC_0("\n");

  VAR_5 = FUNC_5(VAR_2, 0);
  if (FUNC_3(&VAR_4->sc_ucom, VAR_5, 0,
      VAR_0, &VAR_6)) {

   FUNC_6(VAR_2, 0, VAR_6);
   FUNC_4(VAR_2);
  }
  return;

 default:
  if (VAR_3 != VAR_1) {
   FUNC_1(0, "transfer failed\n");

   FUNC_7(VAR_2);
   goto tr_setup;
  }
  return;
 }
}
