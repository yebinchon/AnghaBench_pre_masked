
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usie_softc {int sc_if_status_task; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_cdc_notification {int bNotification; } ;
typedef int cdc ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (struct usb_page_cache*,int ,struct usb_cdc_notification*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int ,int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct usie_softc* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct usie_softc *VAR_5 = FUNC_11(VAR_3);
 struct usb_page_cache *VAR_6;
 struct usb_cdc_notification VAR_7;
 uint32_t VAR_8;

 FUNC_12(VAR_3, &VAR_8, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_3)) {
 case 128:
  FUNC_1(4, "info received, actlen=%d\n", VAR_8);


  if (VAR_8 < (sizeof(VAR_7) - 16)) {
   FUNC_0("data too short %d\n", VAR_8);
   goto tr_setup;
  }
  VAR_6 = FUNC_7(VAR_3, 0);
  FUNC_4(VAR_6, 0, &VAR_7, (sizeof(VAR_7) - 16));

  FUNC_1(4, "bNotification=%x\n", VAR_7.bNotification);

  if (VAR_7.bNotification & VAR_0) {
   FUNC_3(VAR_2,
       &VAR_5->sc_if_status_task);
  }

 case 129:
tr_setup:
  FUNC_9(VAR_3, 0, FUNC_8(VAR_3));
  FUNC_6(VAR_3);
  break;

 default:
  FUNC_0("USB transfer error, %s\n",
      FUNC_5(VAR_4));

  if (VAR_4 != VAR_1) {
   FUNC_10(VAR_3);
   goto tr_setup;
  }
  break;
 }
}
