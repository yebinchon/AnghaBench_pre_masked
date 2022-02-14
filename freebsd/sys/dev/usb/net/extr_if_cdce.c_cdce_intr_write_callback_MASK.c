
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int data; int wLength; int wValue; int * wIndex; int bNotification; void* bmRequestType; } ;
struct TYPE_2__ {int ue_udev; } ;
struct cdce_softc {int sc_notify_state; TYPE_1__ sc_ue; int * sc_ifaces_index; } ;
typedef int req ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_xfer*) ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_8 (struct usb_xfer*,int ) ;
 int FUNC_9 (struct usb_xfer*,int ,int) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct cdce_softc* FUNC_12 (struct usb_xfer*) ;
 int FUNC_13 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_14(struct usb_xfer *VAR_7, usb_error_t VAR_8)
{
 struct cdce_softc *VAR_9 = FUNC_12(VAR_7);
 struct usb_cdc_notification VAR_10;
 struct usb_page_cache *VAR_11;
 uint32_t VAR_12;
 int VAR_13;

 FUNC_13(VAR_7, &VAR_13, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_7)) {
 case 128:

  FUNC_0("Transferred %d bytes\n", VAR_13);

  switch (VAR_9->sc_notify_state) {
  case 131:
   VAR_9->sc_notify_state = 130;
   break;
  case 130:
   VAR_9->sc_notify_state = VAR_0;
   break;
  default:
   break;
  }


 case 129:
tr_setup:





  if (VAR_9->sc_notify_state == 131) {
   VAR_10.bmRequestType = VAR_1;
   VAR_10.bNotification = VAR_3;
   VAR_10.wIndex[0] = VAR_9->sc_ifaces_index[1];
   VAR_10.wIndex[1] = 0;
   FUNC_3(VAR_10.wValue, 1);
   FUNC_3(VAR_10.wLength, 0);

   VAR_11 = FUNC_8(VAR_7, 0);
   FUNC_4(VAR_11, 0, &VAR_10, sizeof(VAR_10));
   FUNC_9(VAR_7, 0, sizeof(VAR_10));
   FUNC_10(VAR_7, 1);
   FUNC_7(VAR_7);

  } else if (VAR_9->sc_notify_state == 130) {
   VAR_10.bmRequestType = VAR_1;
   VAR_10.bNotification = VAR_2;
   VAR_10.wIndex[0] = VAR_9->sc_ifaces_index[1];
   VAR_10.wIndex[1] = 0;
   FUNC_3(VAR_10.wValue, 0);
   FUNC_3(VAR_10.wLength, 8);


   if (FUNC_6(VAR_9->sc_ue.ue_udev) != VAR_6)
    VAR_12 = (13 * 512 * 8 * 1000 * 8);
   else
    VAR_12 = (19 * 64 * 1 * 1000 * 8);

   FUNC_2(VAR_10.data + 0, VAR_12);
   FUNC_2(VAR_10.data + 4, VAR_12);

   VAR_11 = FUNC_8(VAR_7, 0);
   FUNC_4(VAR_11, 0, &VAR_10, sizeof(VAR_10));
   FUNC_9(VAR_7, 0, sizeof(VAR_10));
   FUNC_10(VAR_7, 1);
   FUNC_7(VAR_7);
  }
  break;

 default:
  if (VAR_8 != VAR_4) {
   if (FUNC_5(VAR_9->sc_ue.ue_udev) == VAR_5) {

    FUNC_11(VAR_7);
   }
   goto tr_setup;
  }
  break;
 }
}
