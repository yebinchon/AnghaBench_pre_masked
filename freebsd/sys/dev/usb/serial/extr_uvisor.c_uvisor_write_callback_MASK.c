
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct uvisor_softc {int sc_ucom; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct usb_page_cache*,int ,int,int *) ;
 int FUNC_2 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_3 (struct usb_xfer*,int) ;
 int FUNC_4 (struct usb_xfer*,int,int ) ;
 int FUNC_5 (struct usb_xfer*,int,int) ;
 int FUNC_6 (struct usb_xfer*,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct uvisor_softc* FUNC_8 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct uvisor_softc *VAR_5 = FUNC_8(VAR_3);
 struct usb_page_cache *VAR_6;
 uint32_t VAR_7;
 uint8_t VAR_8;

 switch (FUNC_0(VAR_3)) {
 case 129:
 case 128:
tr_setup:
  for (VAR_8 = 0; VAR_8 != VAR_2; VAR_8++) {

   FUNC_5(VAR_3,
       VAR_8 * VAR_1, VAR_8);

   VAR_6 = FUNC_3(VAR_3, VAR_8);
   if (FUNC_1(&VAR_5->sc_ucom, VAR_6, 0,
       VAR_1, &VAR_7)) {
    FUNC_4(VAR_3, VAR_8, VAR_7);
   } else {
    break;
   }
  }

  if (VAR_8 != 0) {
   FUNC_6(VAR_3, VAR_8);
   FUNC_2(VAR_3);
  }
  break;

 default:
  if (VAR_4 != VAR_0) {

   FUNC_7(VAR_3);
   goto tr_setup;
  }
  break;
 }
}
