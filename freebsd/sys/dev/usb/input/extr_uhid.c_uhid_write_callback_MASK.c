
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct uhid_softc {int sc_osize; TYPE_1__ sc_fifo; int sc_iface_no; int sc_oid; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_device_request*,int ,int ,int ,int) ;
 int FUNC_2 (int ,struct usb_page_cache*,int ,int,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_5 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int) ;
 int FUNC_8 (struct usb_xfer*,int,int) ;
 int FUNC_9 (struct usb_xfer*,int) ;
 struct uhid_softc* FUNC_10 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct uhid_softc *VAR_5 = FUNC_10(VAR_3);
 struct usb_device_request VAR_6;
 struct usb_page_cache *VAR_7;
 uint32_t VAR_8 = VAR_5->sc_osize;
 uint32_t VAR_9;
 uint8_t VAR_10;

 switch (FUNC_0(VAR_3)) {
 case 128:
 case 129:

  if (VAR_5->sc_oid) {
   VAR_7 = FUNC_7(VAR_3, 0);
   if (FUNC_2(VAR_5->sc_fifo.fp[VAR_2], VAR_7,
       0, 1, &VAR_9, 0)) {
    if (VAR_9 != 1) {
     goto tr_error;
    }
    FUNC_5(VAR_7, 0, &VAR_10, 1);

   } else {
    return;
   }
   if (VAR_8) {
    VAR_8--;
   }
  } else {
   VAR_10 = 0;
  }

  VAR_7 = FUNC_7(VAR_3, 1);
  if (FUNC_2(VAR_5->sc_fifo.fp[VAR_2], VAR_7,
      0, VAR_0, &VAR_9, 1)) {
   if (VAR_9 != VAR_8) {
    goto tr_error;
   }
   FUNC_1
       (&VAR_6, VAR_5->sc_iface_no,
       VAR_1, VAR_10, VAR_8);

   VAR_7 = FUNC_7(VAR_3, 0);
   FUNC_4(VAR_7, 0, &VAR_6, sizeof(VAR_6));

   FUNC_8(VAR_3, 0, sizeof(VAR_6));
   FUNC_8(VAR_3, 1, VAR_8);
   FUNC_9(VAR_3, VAR_8 ? 2 : 1);
   FUNC_6(VAR_3);
  }
  return;

 default:
tr_error:

  FUNC_3(VAR_5->sc_fifo.fp[VAR_2]);
  return;
 }
}
