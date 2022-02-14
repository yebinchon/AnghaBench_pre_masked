
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubser_softc {scalar_t__ sc_curr_tx_unit; int sc_tx_size; scalar_t__ sc_ucom; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct ubser_softc*) ;
 int FUNC_2 (scalar_t__,struct usb_page_cache*,int,int ,int *) ;
 int FUNC_3 (struct usb_page_cache*,int ,scalar_t__*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct ubser_softc* FUNC_8 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubser_softc *VAR_3 = FUNC_8(VAR_1);
 struct usb_page_cache *VAR_4;
 uint8_t VAR_5[1];
 uint8_t VAR_6 = VAR_3->sc_curr_tx_unit;
 uint32_t VAR_7;

 switch (FUNC_0(VAR_1)) {
 case 129:
 case 128:
tr_setup:
  VAR_4 = FUNC_5(VAR_1, 0);
  do {
   if (FUNC_2(VAR_3->sc_ucom + VAR_3->sc_curr_tx_unit,
       VAR_4, 1, VAR_3->sc_tx_size - 1,
       &VAR_7)) {

    VAR_5[0] = VAR_3->sc_curr_tx_unit;

    FUNC_3(VAR_4, 0, VAR_5, 1);

    FUNC_6(VAR_1, 0, VAR_7 + 1);
    FUNC_4(VAR_1);

    FUNC_1(VAR_3);

    break;
   }
   FUNC_1(VAR_3);

  } while (VAR_3->sc_curr_tx_unit != VAR_6);

  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_7(VAR_1);
   goto tr_setup;
  }
  return;

 }
}
