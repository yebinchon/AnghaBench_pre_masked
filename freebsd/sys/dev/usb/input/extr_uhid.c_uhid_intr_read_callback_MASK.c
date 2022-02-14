
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int * fp; } ;
struct uhid_softc {int sc_isize; TYPE_1__ sc_fifo; int sc_iid; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct usb_page_cache*,int ,int,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*,int ,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct uhid_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uhid_softc *VAR_4 = FUNC_8(VAR_2);
 struct usb_page_cache *VAR_5;
 int VAR_6;

 FUNC_9(VAR_2, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_2)) {
 case 128:
  FUNC_0("transferred!\n");

  VAR_5 = FUNC_5(VAR_2, 0);





  if ((VAR_6 >= (int)VAR_4->sc_isize) ||
      ((VAR_6 > 0) && (VAR_4->sc_iid != 0))) {

   if (VAR_6 > (int)VAR_4->sc_isize)
    VAR_6 = VAR_4->sc_isize;
   FUNC_3(VAR_4->sc_fifo.fp[VAR_1], VAR_5,
       0, VAR_6, 1);
  } else {

   FUNC_0("ignored transfer, %d bytes\n", VAR_6);
  }

 case 129:
re_submit:
  if (FUNC_2(
      VAR_4->sc_fifo.fp[VAR_1]) != 0) {
   FUNC_6(VAR_2, 0, VAR_4->sc_isize);
   FUNC_4(VAR_2);
  }
  return;

 default:
  if (VAR_3 != VAR_0) {

   FUNC_7(VAR_2);
   goto re_submit;
  }
  return;
 }
}
