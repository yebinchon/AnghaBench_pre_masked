
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device_request {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct uhid_softc {int sc_isize; TYPE_1__ sc_fifo; int sc_iid; int sc_iface_no; } ;
typedef int req ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_device_request*,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct usb_page_cache*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_page_cache*,int ,struct usb_device_request*,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*,int,int) ;
 int FUNC_9 (struct usb_xfer*,int) ;
 struct uhid_softc* FUNC_10 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uhid_softc *VAR_4 = FUNC_10(VAR_2);
 struct usb_device_request VAR_5;
 struct usb_page_cache *VAR_6;

 VAR_6 = FUNC_7(VAR_2, 0);

 switch (FUNC_0(VAR_2)) {
 case 128:
  FUNC_3(VAR_4->sc_fifo.fp[VAR_1], VAR_6, sizeof(VAR_5),
      VAR_4->sc_isize, 1);
  return;

 case 129:

  if (FUNC_2(VAR_4->sc_fifo.fp[VAR_1]) > 0) {

   FUNC_1
       (&VAR_5, VAR_4->sc_iface_no, VAR_0,
       VAR_4->sc_iid, VAR_4->sc_isize);

   FUNC_5(VAR_6, 0, &VAR_5, sizeof(VAR_5));

   FUNC_8(VAR_2, 0, sizeof(VAR_5));
   FUNC_8(VAR_2, 1, VAR_4->sc_isize);
   FUNC_9(VAR_2, VAR_4->sc_isize ? 2 : 1);
   FUNC_6(VAR_2);
  }
  return;

 default:

  FUNC_4(VAR_4->sc_fifo.fp[VAR_1]);
  return;
 }
}
