
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_fifo {int dummy; } ;
struct TYPE_2__ {struct usb_fifo** fp; } ;
struct urio_softc {int sc_flags; int * sc_xfer; TYPE_1__ sc_fifo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_fifo*) ;
 int FUNC_2 (struct usb_fifo*,struct usb_page_cache*,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 struct urio_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct urio_softc *VAR_6 = FUNC_8(VAR_4);
 struct usb_fifo *VAR_7 = VAR_6->sc_fifo.fp[VAR_3];
 struct usb_page_cache *VAR_8;
 int VAR_9;

 FUNC_9(VAR_4, &VAR_9, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_4)) {
 case 128:
  VAR_8 = FUNC_5(VAR_4, 0);
  FUNC_2(VAR_7, VAR_8, 0, VAR_9, 1);

 case 129:
  if (VAR_6->sc_flags & VAR_0) {
   FUNC_3(VAR_6->sc_xfer[VAR_1]);
   return;
  }
  if (FUNC_1(VAR_7) != 0) {
   FUNC_7(VAR_4, 0, FUNC_6(VAR_4));
   FUNC_4(VAR_4);
  }
  return;

 default:
  if (VAR_5 != VAR_2) {

   VAR_6->sc_flags |= VAR_0;
   FUNC_3(VAR_6->sc_xfer[VAR_1]);
  }
  return;
 }
}
