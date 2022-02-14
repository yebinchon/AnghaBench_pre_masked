
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uhso_tty {size_t ht_muxport; int ht_open; } ;
struct uhso_softc {int * sc_ucom; int * sc_xfer; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct usb_device_request*,int ,int) ;
 int FUNC_4 (int *,struct usb_page_cache*,int ,int) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int) ;
 struct uhso_tty* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int,int) ;
 int FUNC_13 (struct usb_xfer*,int) ;
 int FUNC_14 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_17(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct uhso_softc *VAR_6 = FUNC_15(VAR_4);
 struct usb_page_cache *VAR_7;
 struct usb_device_request VAR_8;
 struct uhso_tty *VAR_9;
 int VAR_10, VAR_11;

 FUNC_16(VAR_4, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 FUNC_0(3, "status %d\n", FUNC_1(VAR_4));

 VAR_9 = FUNC_11(VAR_4);
 FUNC_0(3, "ht=%p open=%d\n", VAR_9, VAR_9->ht_open);

 switch (FUNC_1(VAR_4)) {
 case 128:

  VAR_7 = FUNC_10(VAR_4, 1);
  VAR_11 = FUNC_9(VAR_4, 1);

  FUNC_0(3, "got %d bytes on mux port %d\n", VAR_11,
      VAR_9->ht_muxport);
  if (VAR_11 <= 0) {
   FUNC_7(VAR_6->sc_xfer[VAR_1]);
   break;
  }


  if (VAR_9->ht_open)
   FUNC_4(&VAR_6->sc_ucom[VAR_9->ht_muxport], VAR_7, 0, VAR_11);

 case 129:
tr_setup:
  FUNC_3(&VAR_8, 0, sizeof(struct usb_device_request));
  VAR_8.bmRequestType = VAR_3;
  VAR_8.bRequest = VAR_0;
  FUNC_2(VAR_8.wValue, 0);
  FUNC_2(VAR_8.wIndex, VAR_9->ht_muxport);
  FUNC_2(VAR_8.wLength, 1024);

  VAR_7 = FUNC_10(VAR_4, 0);
  FUNC_5(VAR_7, 0, &VAR_8, sizeof(VAR_8));

  FUNC_12(VAR_4, 0, sizeof(VAR_8));
  FUNC_12(VAR_4, 1, 1024);
  FUNC_13(VAR_4, 2);
  FUNC_8(VAR_4);
  break;
 default:
  FUNC_0(0, "error: %s\n", FUNC_6(VAR_5));
  if (VAR_5 == VAR_2)
   break;
  FUNC_14(VAR_4);
  goto tr_setup;
 }
}
