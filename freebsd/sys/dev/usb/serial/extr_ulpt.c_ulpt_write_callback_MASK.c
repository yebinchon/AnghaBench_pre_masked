
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_fifo {int dummy; } ;
struct ulpt_softc {struct usb_fifo** sc_fifo_open; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_fifo*,struct usb_page_cache*,int ,int,int*,int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct ulpt_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct ulpt_softc *VAR_4 = FUNC_8(VAR_2);
 struct usb_fifo *VAR_5 = VAR_4->sc_fifo_open[VAR_1];
 struct usb_page_cache *VAR_6;
 int VAR_7, VAR_8;

 FUNC_9(VAR_2, &VAR_7, ((void*)0), ((void*)0), ((void*)0));

 if (VAR_5 == ((void*)0)) {

  FUNC_0("no FIFO\n");
  return;
 }
 FUNC_0("state=0x%x actlen=%d\n", FUNC_1(VAR_2), VAR_7);

 switch (FUNC_1(VAR_2)) {
 case 128:
 case 129:
tr_setup:
  VAR_6 = FUNC_4(VAR_2, 0);
  VAR_8 = FUNC_5(VAR_2);
  if (FUNC_2(VAR_5, VAR_6, 0, VAR_8, &VAR_7, 0)) {
   FUNC_6(VAR_2, 0, VAR_7);
   FUNC_3(VAR_2);
  }
  break;

 default:
  if (VAR_3 != VAR_0) {

   FUNC_7(VAR_2);
   goto tr_setup;
  }
  break;
 }
}
