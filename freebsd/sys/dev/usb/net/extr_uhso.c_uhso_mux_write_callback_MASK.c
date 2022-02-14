
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_search {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct uhso_tty {size_t ht_muxport; } ;
struct uhso_softc {int * sc_ucom; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_device_request*,int ,int) ;
 int FUNC_4 (int *,struct usb_page_cache*,int ,int,int*) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_9 (struct usb_xfer*,int) ;
 struct uhso_tty* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int,int) ;
 int FUNC_12 (struct usb_xfer*,int) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct uhso_softc *VAR_5 = FUNC_14(VAR_3);
 struct uhso_tty *VAR_6;
 struct usb_page_cache *VAR_7;
 struct usb_device_request VAR_8;
 int VAR_9;
 struct usb_page_search VAR_10;

 FUNC_15(VAR_3, &VAR_9, ((void*)0), ((void*)0), ((void*)0));

 VAR_6 = FUNC_10(VAR_3);
 FUNC_0(3, "status=%d, using mux port %d\n",
     FUNC_1(VAR_3), VAR_6->ht_muxport);

 switch (FUNC_1(VAR_3)) {
 case 128:
  FUNC_0(3, "wrote %zd data bytes to muxport %d\n",
      VAR_9 - sizeof(struct usb_device_request) ,
      VAR_6->ht_muxport);

 case 129:
tr_setup:
  VAR_7 = FUNC_9(VAR_3, 1);
  if (FUNC_4(&VAR_5->sc_ucom[VAR_6->ht_muxport], VAR_7,
      0, 32, &VAR_9)) {

   FUNC_7(VAR_7, 0, &VAR_10);

   FUNC_3(&VAR_8, 0, sizeof(struct usb_device_request));
   VAR_8.bmRequestType = VAR_2;
   VAR_8.bRequest = VAR_0;
   FUNC_2(VAR_8.wValue, 0);
   FUNC_2(VAR_8.wIndex, VAR_6->ht_muxport);
   FUNC_2(VAR_8.wLength, VAR_9);

   VAR_7 = FUNC_9(VAR_3, 0);
   FUNC_5(VAR_7, 0, &VAR_8, sizeof(VAR_8));

   FUNC_11(VAR_3, 0, sizeof(VAR_8));
   FUNC_11(VAR_3, 1, VAR_9);
   FUNC_12(VAR_3, 2);

   FUNC_0(3, "Prepared %d bytes for transmit "
       "on muxport %d\n", VAR_9, VAR_6->ht_muxport);

   FUNC_8(VAR_3);
  }
  break;
 default:
  FUNC_0(0, "error: %s\n", FUNC_6(VAR_4));
  if (VAR_4 == VAR_1)
   break;
  FUNC_13(VAR_3);
  goto tr_setup;
 }
}
