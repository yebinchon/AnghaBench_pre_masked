
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uchcom_softc {int sc_ucom; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (int *,struct usb_page_cache*,int ,int) ;
 int FUNC_2 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct uchcom_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct uchcom_softc *VAR_3 = FUNC_7(VAR_1);
 struct usb_page_cache *VAR_4;
 int VAR_5;

 FUNC_8(VAR_1, &VAR_5, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_1)) {
 case 128:

  if (VAR_5 > 0) {
   VAR_4 = FUNC_3(VAR_1, 0);
   FUNC_1(&VAR_3->sc_ucom, VAR_4, 0, VAR_5);
  }

 case 129:
tr_setup:
  FUNC_5(VAR_1, 0, FUNC_4(VAR_1));
  FUNC_2(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_6(VAR_1);
   goto tr_setup;
  }
  break;
 }
}
