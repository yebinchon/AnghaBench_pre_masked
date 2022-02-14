
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int* data; int bNotification; int bmRequestType; int wIndex; } ;
struct uhso_softc {int * sc_ucom; int sc_msr; int sc_lsr; int sc_iface_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int,...) ;
 int VAR_9 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_10, usb_error_t VAR_11)
{
 struct uhso_softc *VAR_12 = FUNC_7(VAR_10);
 struct usb_page_cache *VAR_13;
 int VAR_14;
 struct usb_cdc_notification VAR_15;

 FUNC_8(VAR_10, &VAR_14, ((void*)0), ((void*)0), ((void*)0));
 FUNC_1(3, "status %d, actlen=%d\n", FUNC_2(VAR_10), VAR_14);

 switch (FUNC_2(VAR_10)) {
 case 128:
  if (VAR_14 < VAR_4) {
   FUNC_1(0, "UCDC notification too short: %d\n", VAR_14);
   goto tr_setup;
  }
  else if (VAR_14 > (int)sizeof(struct usb_cdc_notification)) {
   FUNC_1(0, "UCDC notification too large: %d\n", VAR_14);
   VAR_14 = sizeof(struct usb_cdc_notification);
  }

  VAR_13 = FUNC_5(VAR_10, 0);
  FUNC_4(VAR_13, 0, &VAR_15, VAR_14);

  if (FUNC_0(VAR_15.wIndex) != VAR_12->sc_iface_no) {
   FUNC_1(0, "Interface mismatch, got %d expected %d\n",
       FUNC_0(VAR_15.wIndex), VAR_12->sc_iface_no);
   goto tr_setup;
  }

  if (VAR_15.bmRequestType == VAR_3 &&
      VAR_15.bNotification == VAR_8) {
   FUNC_1(2, "notify = 0x%02x\n", VAR_15.data[0]);

   VAR_12->sc_msr = 0;
   VAR_12->sc_lsr = 0;
   if (VAR_15.data[0] & VAR_7)
    VAR_12->sc_msr |= VAR_2;
   if (VAR_15.data[0] & VAR_6)
    VAR_12->sc_msr |= VAR_1;
   if (VAR_15.data[0] & VAR_5)
    VAR_12->sc_msr |= VAR_0;

   FUNC_3(&VAR_12->sc_ucom[0]);
  }
 case 129:
tr_setup:
 default:
  if (VAR_11 == VAR_9)
   break;
  FUNC_6(VAR_10);
  goto tr_setup;
 }
}
