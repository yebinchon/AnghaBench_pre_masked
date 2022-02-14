
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct umcs7840_softc {struct ucom_softc* sc_ucom; } ;
struct ucom_softc {int sc_portno; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ucom_softc*,struct usb_page_cache*,int ,int) ;
 int FUNC_3 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct umcs7840_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_1, usb_error_t VAR_2, uint8_t VAR_3)
{
 struct umcs7840_softc *VAR_4 = FUNC_8(VAR_1);
 struct ucom_softc *VAR_5 = &VAR_4->sc_ucom[VAR_3];
 struct usb_page_cache *VAR_6;
 int VAR_7;

 FUNC_9(VAR_1, &VAR_7, ((void*)0), ((void*)0), ((void*)0));

 FUNC_0("Port %d read, state = %d, data length = %d\n", VAR_5->sc_portno, FUNC_1(VAR_1), VAR_7);

 switch (FUNC_1(VAR_1)) {
 case 128:
  VAR_6 = FUNC_4(VAR_1, 0);
  FUNC_2(VAR_5, VAR_6, 0, VAR_7);

 case 129:
tr_setup:
  FUNC_6(VAR_1, 0, FUNC_5(VAR_1));
  FUNC_3(VAR_1);
  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_7(VAR_1);
   goto tr_setup;
  }
  return;
 }
}
