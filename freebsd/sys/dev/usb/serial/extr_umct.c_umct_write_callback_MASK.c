
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct umct_softc {int sc_obufsize; int sc_ucom; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (int *,struct usb_page_cache*,int ,int ,int *) ;
 int FUNC_2 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*,int ,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct umct_softc* FUNC_6 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct umct_softc *VAR_3 = FUNC_6(VAR_1);
 struct usb_page_cache *VAR_4;
 uint32_t VAR_5;

 switch (FUNC_0(VAR_1)) {
 case 129:
 case 128:
tr_setup:
  VAR_4 = FUNC_3(VAR_1, 0);
  if (FUNC_1(&VAR_3->sc_ucom, VAR_4, 0,
      VAR_3->sc_obufsize, &VAR_5)) {

   FUNC_4(VAR_1, 0, VAR_5);
   FUNC_2(VAR_1);
  }
  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_5(VAR_1);
   goto tr_setup;
  }
  return;
 }
}
