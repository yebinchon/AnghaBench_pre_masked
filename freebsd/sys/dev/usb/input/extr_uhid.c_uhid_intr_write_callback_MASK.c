
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct uhid_softc {TYPE_1__ sc_fifo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (int ,struct usb_page_cache*,int ,int ,int*,int ) ;
 int FUNC_2 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_3 (struct usb_xfer*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct uhid_softc* FUNC_7 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uhid_softc *VAR_4 = FUNC_7(VAR_2);
 struct usb_page_cache *VAR_5;
 int VAR_6;

 switch (FUNC_0(VAR_2)) {
 case 128:
 case 129:
tr_setup:
  VAR_5 = FUNC_3(VAR_2, 0);
  if (FUNC_1(VAR_4->sc_fifo.fp[VAR_1], VAR_5,
      0, FUNC_4(VAR_2), &VAR_6, 0)) {
   FUNC_5(VAR_2, 0, VAR_6);
   FUNC_2(VAR_2);
  }
  return;

 default:
  if (VAR_3 != VAR_0) {

   FUNC_6(VAR_2);
   goto tr_setup;
  }
  return;
 }
}
