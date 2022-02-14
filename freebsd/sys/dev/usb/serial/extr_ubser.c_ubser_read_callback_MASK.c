
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubser_softc {scalar_t__ sc_ucom; scalar_t__ sc_numser; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (scalar_t__,struct usb_page_cache*,int,int) ;
 int FUNC_3 (struct usb_page_cache*,int ,scalar_t__*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct ubser_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubser_softc *VAR_3 = FUNC_9(VAR_1);
 struct usb_page_cache *VAR_4;
 uint8_t VAR_5[1];
 int VAR_6;

 FUNC_10(VAR_1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_1)) {
 case 128:
  if (VAR_6 < 1) {
   FUNC_0("invalid actlen=0!\n");
   goto tr_setup;
  }
  VAR_4 = FUNC_5(VAR_1, 0);
  FUNC_3(VAR_4, 0, VAR_5, 1);

  if (VAR_5[0] >= VAR_3->sc_numser) {
   FUNC_0("invalid serial number!\n");
   goto tr_setup;
  }
  FUNC_2(VAR_3->sc_ucom + VAR_5[0], VAR_4, 1, VAR_6 - 1);

 case 129:
tr_setup:
  FUNC_7(VAR_1, 0, FUNC_6(VAR_1));
  FUNC_4(VAR_1);
  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_8(VAR_1);
   goto tr_setup;
  }
  return;

 }
}
