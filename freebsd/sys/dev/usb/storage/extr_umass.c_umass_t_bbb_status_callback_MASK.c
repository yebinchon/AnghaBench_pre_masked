
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int usb_error_t ;
typedef union ccb {int dummy; } ccb ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_7__ {int data_len; int actlen; int (* callback ) (struct umass_softc*,union ccb*,int,int ) ;union ccb* ccb; } ;
struct TYPE_8__ {int bCSWStatus; int dCSWTag; int dCSWSignature; int dCSWDataResidue; } ;
struct TYPE_6__ {int dCBWTag; } ;
struct umass_softc {int sc_status_try; int sc_quirks; TYPE_2__ sc_transfer; void* sc_last_xfer_index; TYPE_3__ csw; TYPE_1__ cbw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct umass_softc*,int ,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct usb_xfer*) ;


 int FUNC_4 (int ,int) ;
 int VAR_12 ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (struct umass_softc*,union ccb*,int,int ) ;
 int FUNC_7 (struct umass_softc*,union ccb*,int,int ) ;
 int FUNC_8 (struct umass_softc*,TYPE_3__*) ;
 int FUNC_9 (struct usb_xfer*,int ) ;
 int FUNC_10 (struct umass_softc*,int ) ;
 int FUNC_11 (struct usb_page_cache*,int ,TYPE_3__*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_14 (struct usb_xfer*,int ) ;
 int FUNC_15 (struct usb_xfer*) ;
 int FUNC_16 (struct usb_xfer*,int ,int ) ;
 struct umass_softc* FUNC_17 (struct usb_xfer*) ;
 int FUNC_18 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_19(struct usb_xfer *VAR_13, usb_error_t VAR_14)
{
 struct umass_softc *VAR_15 = FUNC_17(VAR_13);
 union ccb *VAR_16 = VAR_15->sc_transfer.ccb;
 struct usb_page_cache *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 FUNC_18(VAR_13, &VAR_19, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_3(VAR_13)) {
 case 128:




  VAR_15->sc_status_try = 1;



  if (VAR_19 < (int)sizeof(VAR_15->csw))
   FUNC_5(&VAR_15->csw, 0, sizeof(VAR_15->csw));

  VAR_17 = FUNC_14(VAR_13, 0);
  FUNC_11(VAR_17, 0, &VAR_15->csw, VAR_19);

  FUNC_0(VAR_8, FUNC_8(VAR_15, &VAR_15->csw));

  VAR_18 = FUNC_2(VAR_15->csw.dCSWDataResidue);

  if ((!VAR_18) || (VAR_15->sc_quirks & VAR_5)) {
   VAR_18 = (VAR_15->sc_transfer.data_len -
       VAR_15->sc_transfer.actlen);
  }
  if (VAR_18 > VAR_15->sc_transfer.data_len) {
   FUNC_1(VAR_15, VAR_8, "truncating residue from %d "
       "to %d bytes\n", VAR_18, VAR_15->sc_transfer.data_len);
   VAR_18 = VAR_15->sc_transfer.data_len;
  }

  if (VAR_15->sc_quirks & VAR_12) {

   uint32_t VAR_20 = FUNC_2(VAR_15->csw.dCSWSignature);

   if ((VAR_20 == VAR_2) ||
       (VAR_20 == VAR_1)) {
    FUNC_4(VAR_15->csw.dCSWSignature, VAR_0);
   }
  }

  if (FUNC_2(VAR_15->csw.dCSWSignature) != VAR_0) {
   FUNC_1(VAR_15, VAR_8, "bad CSW signature 0x%08x != 0x%08x\n",
       FUNC_2(VAR_15->csw.dCSWSignature), VAR_0);





   goto tr_error;
  } else if (FUNC_2(VAR_15->csw.dCSWTag) != FUNC_2(VAR_15->cbw.dCBWTag)) {
   FUNC_1(VAR_15, VAR_8, "Invalid CSW: tag 0x%08x should be "
       "0x%08x\n", FUNC_2(VAR_15->csw.dCSWTag),
       FUNC_2(VAR_15->cbw.dCBWTag));
   goto tr_error;
  } else if (VAR_15->csw.bCSWStatus > VAR_4) {
   FUNC_1(VAR_15, VAR_8, "Invalid CSW: status %d > %d\n",
       VAR_15->csw.bCSWStatus, VAR_4);
   goto tr_error;
  } else if (VAR_15->csw.bCSWStatus == VAR_4) {
   FUNC_1(VAR_15, VAR_8, "Phase error, residue = "
       "%d\n", VAR_18);
   goto tr_error;
  } else if (VAR_15->sc_transfer.actlen > VAR_15->sc_transfer.data_len) {
   FUNC_1(VAR_15, VAR_8, "Buffer overrun %d > %d\n",
       VAR_15->sc_transfer.actlen, VAR_15->sc_transfer.data_len);
   goto tr_error;
  } else if (VAR_15->csw.bCSWStatus == VAR_3) {
   FUNC_1(VAR_15, VAR_8, "Command failed, residue = "
       "%d\n", VAR_18);

   VAR_15->sc_transfer.ccb = ((void*)0);

   VAR_15->sc_last_xfer_index = VAR_9;

   (VAR_15->sc_transfer.callback)
       (VAR_15, VAR_16, VAR_18, VAR_6);
  } else {
   VAR_15->sc_transfer.ccb = ((void*)0);

   VAR_15->sc_last_xfer_index = VAR_9;

   (VAR_15->sc_transfer.callback)
       (VAR_15, VAR_16, VAR_18, VAR_7);
  }
  return;

 case 129:
  FUNC_16(VAR_13, 0, FUNC_15(VAR_13));
  FUNC_13(VAR_13);
  return;

 default:
tr_error:
  FUNC_1(VAR_15, VAR_8, "Failed to read CSW: %s, try %d\n",
      FUNC_12(VAR_14), VAR_15->sc_status_try);

  if ((VAR_14 == VAR_11) ||
      (VAR_15->sc_status_try)) {
   FUNC_9(VAR_13, VAR_14);
  } else {
   VAR_15->sc_status_try = 1;
   FUNC_10(VAR_15, VAR_10);
  }
  return;
 }
}
