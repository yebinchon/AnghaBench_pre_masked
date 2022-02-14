
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
typedef union ccb {int dummy; } ccb ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_5__ {int bCDBLength; int CBWCDB; int bCBWLUN; int bCBWFlags; int dCBWDataTransferLength; int dCBWTag; int dCBWSignature; } ;
struct TYPE_4__ {int cmd_len; int cmd_data; int lun; int dir; int data_len; union ccb* ccb; } ;
struct umass_softc {TYPE_2__ cbw; TYPE_1__ sc_transfer; int sc_status_try; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct umass_softc*,int ,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct umass_softc*,TYPE_2__*) ;
 int FUNC_8 (struct usb_xfer*,int ) ;
 int FUNC_9 (struct umass_softc*,int ) ;
 int FUNC_10 (struct usb_page_cache*,int ,TYPE_2__*,int) ;
 int FUNC_11 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_12 (struct usb_xfer*,int ) ;
 int FUNC_13 (struct usb_xfer*,int ,int) ;
 struct umass_softc* FUNC_14 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_15(struct usb_xfer *VAR_9, usb_error_t VAR_10)
{
 struct umass_softc *VAR_11 = FUNC_14(VAR_9);
 union ccb *VAR_12 = VAR_11->sc_transfer.ccb;
 struct usb_page_cache *VAR_13;
 uint32_t VAR_14;

 switch (FUNC_3(VAR_9)) {
 case 128:
  FUNC_9
      (VAR_11, ((VAR_11->sc_transfer.dir == VAR_3) ? VAR_6 :
      (VAR_11->sc_transfer.dir == VAR_4) ? VAR_7 :
      VAR_8));
  return;

 case 129:

  VAR_11->sc_status_try = 0;

  if (VAR_12) {





   VAR_14 = FUNC_2(VAR_11->cbw.dCBWTag) + 1;

   FUNC_4(VAR_11->cbw.dCBWSignature, VAR_2);
   FUNC_4(VAR_11->cbw.dCBWTag, VAR_14);
   FUNC_4(VAR_11->cbw.dCBWDataTransferLength, VAR_11->sc_transfer.data_len);
   VAR_11->cbw.bCBWFlags = ((VAR_11->sc_transfer.dir == VAR_3) ?
       VAR_0 : VAR_1);
   VAR_11->cbw.bCBWLUN = VAR_11->sc_transfer.lun;

   if (VAR_11->sc_transfer.cmd_len > sizeof(VAR_11->cbw.CBWCDB)) {
    VAR_11->sc_transfer.cmd_len = sizeof(VAR_11->cbw.CBWCDB);
    FUNC_1(VAR_11, VAR_5, "Truncating long command!\n");
   }
   VAR_11->cbw.bCDBLength = VAR_11->sc_transfer.cmd_len;


   FUNC_5(VAR_11->cbw.CBWCDB, VAR_11->sc_transfer.cmd_data,
       VAR_11->sc_transfer.cmd_len);


   FUNC_6(VAR_11->cbw.CBWCDB +
       VAR_11->sc_transfer.cmd_len, 0,
       sizeof(VAR_11->cbw.CBWCDB) -
       VAR_11->sc_transfer.cmd_len);

   FUNC_0(VAR_5, FUNC_7(VAR_11, &VAR_11->cbw));

   VAR_13 = FUNC_12(VAR_9, 0);
   FUNC_10(VAR_13, 0, &VAR_11->cbw, sizeof(VAR_11->cbw));
   FUNC_13(VAR_9, 0, sizeof(VAR_11->cbw));

   FUNC_11(VAR_9);
  }
  return;

 default:
  FUNC_8(VAR_9, VAR_10);
  return;
 }
}
