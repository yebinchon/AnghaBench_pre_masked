
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_2__ {int ext_data_filled; int kern_data_resid; int kern_sg_entries; int kern_data_len; int kern_rel_offset; scalar_t__ kern_data_ptr; int (* be_move_done ) (union ctl_io*) ;} ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct ctl_sg_entry {int len; scalar_t__ addr; } ;
struct cfumass_softc {int sc_current_residue; int sc_current_transfer_length; union ctl_io* sc_ctl_io; } ;


 int FUNC_0 (struct cfumass_softc*,char*,...) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int,int) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int *,int) ;
 struct cfumass_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct cfumass_softc *VAR_3 = FUNC_9(VAR_1);
 union ctl_io *VAR_4 = VAR_3->sc_ctl_io;
 uint32_t VAR_5;
 struct ctl_sg_entry VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 switch (FUNC_2(VAR_1)) {
 case 128:
  FUNC_0(VAR_3, "USB_ST_TRANSFERRED");

  FUNC_10(VAR_1, &VAR_8, &VAR_9, ((void*)0), ((void*)0));
  VAR_3->sc_current_residue -= VAR_8;
  VAR_4->scsiio.ext_data_filled += VAR_8;
  VAR_4->scsiio.kern_data_resid -= VAR_8;
  if (VAR_8 < VAR_9 ||
      VAR_3->sc_current_residue == 0 ||
      VAR_4->scsiio.kern_data_resid == 0) {
   VAR_3->sc_ctl_io = ((void*)0);
   VAR_4->scsiio.be_move_done(VAR_4);
   break;
  }


 case 129:
tr_setup:
  FUNC_0(VAR_3, "USB_ST_SETUP");

  if (VAR_4->scsiio.kern_sg_entries > 0) {
   VAR_7 = (struct ctl_sg_entry *)VAR_4->scsiio.kern_data_ptr;
   VAR_10 = VAR_4->scsiio.kern_sg_entries;
  } else {
   VAR_7 = &VAR_6;
   VAR_7->addr = VAR_4->scsiio.kern_data_ptr;
   VAR_7->len = VAR_4->scsiio.kern_data_len;
   VAR_10 = 1;
  }

  VAR_9 = VAR_4->scsiio.ext_data_filled -
      VAR_4->scsiio.kern_rel_offset;
  while (VAR_9 >= VAR_7->len && VAR_10 > 0) {
   VAR_9 -= VAR_7->len;
   VAR_7++;
   VAR_10--;
  }
  FUNC_1(VAR_10 > 0, ("Run out of S/G list entries"));

  VAR_5 = FUNC_7(VAR_1);
  VAR_8 = FUNC_3(VAR_7->len - VAR_9, VAR_5);
  VAR_8 = FUNC_3(VAR_8, VAR_3->sc_current_transfer_length -
      VAR_4->scsiio.ext_data_filled);
  FUNC_0(VAR_3, "requested %d, done %d, max_bulk %d, "
      "segment %zd => transfer %d",
      VAR_3->sc_current_transfer_length, VAR_4->scsiio.ext_data_filled,
      VAR_5, VAR_7->len - VAR_9, VAR_8);

  FUNC_8(VAR_1, 0,
      (uint8_t *)VAR_7->addr + VAR_9, VAR_8);
  FUNC_6(VAR_1);
  break;

 default:
  if (VAR_2 == VAR_0) {
   FUNC_0(VAR_3, "USB_ERR_CANCELLED");
   break;
  }
  FUNC_0(VAR_3, "USB_ST_ERROR: %s", FUNC_5(VAR_2));
  goto tr_setup;
 }
}
