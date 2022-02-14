
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef union ccb {int dummy; } ccb ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int* wLength; int * wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_2__ {int cmd_len; int data_len; int (* callback ) (struct umass_softc*,union ccb*,int ,int ) ;union ccb* ccb; struct usb_device_request* cmd_data; int dir; } ;
struct umass_softc {int sc_last_xfer_index; TYPE_1__ sc_transfer; int sc_iface_no; } ;
typedef int req ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int ) ;
 int VAR_9 ;
 int FUNC_3 (struct umass_softc*,union ccb*,int ,int ) ;
 int FUNC_4 (struct umass_softc*,union ccb*,int ,int ) ;
 int FUNC_5 (struct umass_softc*,struct usb_device_request*,int) ;
 int FUNC_6 (struct umass_softc*) ;
 int FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct umass_softc*,int ) ;
 int FUNC_9 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_11 (struct usb_xfer*,int) ;
 int FUNC_12 (struct usb_xfer*,int,int) ;
 int FUNC_13 (struct usb_xfer*,int) ;
 struct umass_softc* FUNC_14 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_15(struct usb_xfer *VAR_10, usb_error_t VAR_11)
{
 struct umass_softc *VAR_12 = FUNC_14(VAR_10);
 union ccb *VAR_13 = VAR_12->sc_transfer.ccb;
 struct usb_device_request VAR_14;
 struct usb_page_cache *VAR_15;

 switch (FUNC_1(VAR_10)) {
 case 128:

  if (VAR_12->sc_transfer.dir == VAR_1) {
   FUNC_6(VAR_12);
  } else {
   FUNC_8
       (VAR_12, (VAR_12->sc_transfer.dir == VAR_0) ?
       VAR_5 : VAR_6);
  }
  break;

 case 129:

  if (VAR_13) {
   VAR_14.bmRequestType = VAR_9;
   VAR_14.bRequest = VAR_7;
   FUNC_2(VAR_14.wValue, 0);
   VAR_14.wIndex[0] = VAR_12->sc_iface_no;
   VAR_14.wIndex[1] = 0;
   VAR_14.wLength[0] = VAR_12->sc_transfer.cmd_len;
   VAR_14.wLength[1] = 0;

   VAR_15 = FUNC_11(VAR_10, 0);
   FUNC_9(VAR_15, 0, &VAR_14, sizeof(VAR_14));
   VAR_15 = FUNC_11(VAR_10, 1);
   FUNC_9(VAR_15, 0, VAR_12->sc_transfer.cmd_data,
       VAR_12->sc_transfer.cmd_len);

   FUNC_12(VAR_10, 0, sizeof(VAR_14));
   FUNC_12(VAR_10, 1, VAR_12->sc_transfer.cmd_len);
   FUNC_13(VAR_10,
       VAR_12->sc_transfer.cmd_len ? 2 : 1);

   FUNC_0(VAR_3,
       FUNC_5(VAR_12,
       VAR_12->sc_transfer.cmd_data,
       VAR_12->sc_transfer.cmd_len));

   FUNC_10(VAR_10);
  }
  break;

 default:






  if ((VAR_11 == VAR_8) ||
      (VAR_12->sc_transfer.callback == &FUNC_4)) {
   VAR_12->sc_transfer.ccb = ((void*)0);
   (VAR_12->sc_transfer.callback)
       (VAR_12, VAR_13, VAR_12->sc_transfer.data_len,
       VAR_2);
  } else {
   FUNC_7(VAR_10, VAR_11);

   VAR_12->sc_last_xfer_index = VAR_4;
  }
  break;
 }
}
