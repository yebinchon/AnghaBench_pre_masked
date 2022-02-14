
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_10__ {int cdb_len; int cdb; int tag_type; void* tag_num; } ;
struct TYPE_8__ {int targ_lun; int targ_port; int initid; } ;
struct TYPE_9__ {TYPE_2__ nexus; int io_type; TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_4__ scsiio; TYPE_3__ io_hdr; } ;
typedef void* uint32_t ;
struct usb_xfer {int dummy; } ;
struct cfumass_softc {int sc_current_stalled; int sc_queued; TYPE_5__* sc_cbw; int sc_ctl_initid; void* sc_current_transfer_length; void* sc_current_residue; int sc_current_flags; void* sc_current_tag; int sc_current_status; int * sc_ctl_io; } ;
struct TYPE_12__ {int targ_port; int ctl_pool_ref; } ;
struct TYPE_11__ {int bCDBLength; int CBWCB; int dCBWTag; int bCBWLUN; int bCBWFlags; int dCBWDataTransferLength; int dCBWSignature; } ;
struct TYPE_7__ {struct cfumass_softc* ptr; } ;


 void* VAR_0 ;
 int FUNC_0 (struct cfumass_softc*,char*,...) ;
 int FUNC_1 (struct cfumass_softc*) ;
 int FUNC_2 (struct cfumass_softc*) ;
 int FUNC_3 (struct cfumass_softc*,char*,int,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (struct usb_xfer*) ;


 TYPE_6__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct cfumass_softc*,int ,int) ;
 union ctl_io* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (union ctl_io*) ;
 int FUNC_11 (union ctl_io*) ;
 int FUNC_12 (union ctl_io*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct usb_xfer*) ;
 int FUNC_18 (struct usb_xfer*,int ,int) ;
 int FUNC_19 (struct usb_xfer*) ;
 struct cfumass_softc* FUNC_20 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_21(struct usb_xfer *VAR_8, usb_error_t VAR_9)
{
 struct cfumass_softc *VAR_10;
 uint32_t VAR_11;
 union ctl_io *VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_20(VAR_8);

 FUNC_4(VAR_10->sc_ctl_io == ((void*)0),
     ("sc_ctl_io is %p, should be NULL", VAR_10->sc_ctl_io));

 switch (FUNC_6(VAR_8)) {
 case 128:
  FUNC_0(VAR_10, "USB_ST_TRANSFERRED");

  VAR_11 = FUNC_5(VAR_10->sc_cbw->dCBWSignature);
  if (VAR_11 != VAR_0) {
   FUNC_3(VAR_10, "wrong dCBWSignature 0x%08x, "
       "should be 0x%08x", VAR_11, VAR_0);
   break;
  }

  if (VAR_10->sc_cbw->bCDBLength <= 0 ||
      VAR_10->sc_cbw->bCDBLength > sizeof(VAR_10->sc_cbw->CBWCB)) {
   FUNC_3(VAR_10, "invalid bCDBLength %d, should be <= %zd",
       VAR_10->sc_cbw->bCDBLength, sizeof(VAR_10->sc_cbw->CBWCB));
   break;
  }

  VAR_10->sc_current_stalled = 0;
  VAR_10->sc_current_status = 0;
  VAR_10->sc_current_tag = FUNC_5(VAR_10->sc_cbw->dCBWTag);
  VAR_10->sc_current_transfer_length =
      FUNC_5(VAR_10->sc_cbw->dCBWDataTransferLength);
  VAR_10->sc_current_flags = VAR_10->sc_cbw->bCBWFlags;





  VAR_10->sc_current_residue = VAR_10->sc_current_transfer_length;

  if (FUNC_7(VAR_10,
      VAR_10->sc_cbw->CBWCB, VAR_10->sc_cbw->bCDBLength) != 0)
   break;

  if (!VAR_7) {
   FUNC_0(VAR_10, "cfumass port is offline; stalling");
   FUNC_19(VAR_8);
   break;
  }




  FUNC_2(VAR_10);
  VAR_12 = FUNC_8(VAR_6.ctl_pool_ref);
  FUNC_12(VAR_12);
  VAR_12->io_hdr.ctl_private[VAR_2].ptr = VAR_10;
  VAR_12->io_hdr.io_type = VAR_1;
  VAR_12->io_hdr.nexus.initid = VAR_10->sc_ctl_initid;
  VAR_12->io_hdr.nexus.targ_port = VAR_6.targ_port;
  VAR_12->io_hdr.nexus.targ_lun = FUNC_9(VAR_10->sc_cbw->bCBWLUN);
  VAR_12->scsiio.tag_num = FUNC_5(VAR_10->sc_cbw->dCBWTag);
  VAR_12->scsiio.tag_type = VAR_4;
  VAR_12->scsiio.cdb_len = VAR_10->sc_cbw->bCDBLength;
  FUNC_13(VAR_12->scsiio.cdb, VAR_10->sc_cbw->CBWCB, VAR_10->sc_cbw->bCDBLength);
  FUNC_14(&VAR_10->sc_queued);
  VAR_13 = FUNC_11(VAR_12);
  if (VAR_13 != VAR_3) {
   FUNC_3(VAR_10,
       "ctl_queue() failed; error %d; stalling", VAR_13);
   FUNC_10(VAR_12);
   FUNC_15(&VAR_10->sc_queued);
   FUNC_1(VAR_10);
   FUNC_19(VAR_8);
   break;
  }

  FUNC_1(VAR_10);
  break;

 case 129:
tr_setup:
  FUNC_0(VAR_10, "USB_ST_SETUP");

  FUNC_18(VAR_8, 0, sizeof(*VAR_10->sc_cbw));
  FUNC_17(VAR_8);
  break;

 default:
  if (VAR_9 == VAR_5) {
   FUNC_0(VAR_10, "USB_ERR_CANCELLED");
   break;
  }

  FUNC_0(VAR_10, "USB_ST_ERROR: %s", FUNC_16(VAR_9));

  goto tr_setup;
 }
}
