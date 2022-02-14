
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_fifo {int dummy; } ;
struct ulpt_softc {int sc_zlps; struct usb_fifo** sc_fifo_open; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_fifo*) ;
 int FUNC_3 (struct usb_fifo*,struct usb_page_cache*,int ,int,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*,int) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct ulpt_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct ulpt_softc *VAR_4 = FUNC_10(VAR_2);
 struct usb_fifo *VAR_5 = VAR_4->sc_fifo_open[VAR_1];
 struct usb_page_cache *VAR_6;
 int VAR_7;

 FUNC_11(VAR_2, &VAR_7, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_5 == ((void*)0)) {

  FUNC_0("no FIFO\n");
  return;
 }
 FUNC_0("state=0x%x\n", FUNC_1(VAR_2));

 switch (FUNC_1(VAR_2)) {
 case 128:

  if (VAR_7 == 0) {

   if (VAR_4->sc_zlps == 4) {

    FUNC_8(VAR_2, 500);
   } else {
    VAR_4->sc_zlps++;
   }
  } else {


   FUNC_8(VAR_2, 0);
   VAR_4->sc_zlps = 0;
  }

  VAR_6 = FUNC_5(VAR_2, 0);
  FUNC_3(VAR_5, VAR_6, 0, VAR_7, 1);

 case 129:
tr_setup:
  if (FUNC_2(VAR_5) != 0) {
   FUNC_7(VAR_2, 0, FUNC_6(VAR_2));
   FUNC_4(VAR_2);
  }
  break;

 default:

  FUNC_8(VAR_2, 0);
  VAR_4->sc_zlps = 0;

  if (VAR_3 != VAR_0) {

   FUNC_9(VAR_2);
   goto tr_setup;
  }
  break;
 }
}
