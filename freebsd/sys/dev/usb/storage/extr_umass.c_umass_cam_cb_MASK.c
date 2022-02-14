
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int status; int path; int timeout; int func_code; } ;
struct TYPE_9__ {int error_code; } ;
struct TYPE_6__ {int * cdb_bytes; } ;
struct ccb_scsiio {int sense_len; TYPE_4__ sense_data; scalar_t__ data_ptr; TYPE_1__ cdb_io; int resid; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_scsiio csio; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int* cmd_data; } ;
struct TYPE_7__ {int opcode; int length; } ;
struct umass_softc {int sc_quirks; TYPE_3__ sc_transfer; TYPE_2__ cam_scsi_sense; int sc_udev; } ;
struct scsi_vpd_supported_page_list {size_t length; int * list; } ;
struct scsi_read_capacity_data {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct umass_softc*,int ,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_15 ;
 int FUNC_3 (struct umass_softc*,int ,int *,int ,int ,int *,union ccb*) ;
 int FUNC_4 (struct umass_softc*,union ccb*,int *,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct umass_softc *VAR_16, union ccb *VAR_17, uint32_t VAR_18,
    uint8_t VAR_19)
{
 VAR_17->csio.resid = VAR_18;

 switch (VAR_19) {
 case 129:
  VAR_17->ccb_h.status = VAR_1;
  if ((VAR_16->sc_quirks & VAR_7) &&
      (VAR_17->ccb_h.func_code == VAR_14) &&
      (VAR_17->csio.cdb_io.cdb_bytes[0] == VAR_6)) {
   struct scsi_read_capacity_data *VAR_20;
   uint32_t VAR_21;

   VAR_20 = (void *)(VAR_17->csio.data_ptr);
   VAR_21 = FUNC_1(VAR_20->addr) - 1;
   FUNC_2(VAR_21, VAR_20->addr);
  }






  if (VAR_17->ccb_h.func_code == VAR_14 &&
      VAR_16->sc_transfer.cmd_data[0] == VAR_5 &&
      (VAR_16->sc_transfer.cmd_data[1] & VAR_9) &&
      VAR_16->sc_transfer.cmd_data[2] == VAR_11 &&
      (FUNC_5(VAR_16->sc_udev)[0] != '\0')) {
   struct ccb_scsiio *VAR_22;
   struct scsi_vpd_supported_page_list *VAR_23;

   VAR_22 = &VAR_17->csio;
   VAR_23 = (struct scsi_vpd_supported_page_list *)VAR_22->data_ptr;
   if (VAR_23->length + 1 < VAR_10) {
    VAR_23->list[VAR_23->length] = VAR_12;
    VAR_23->length++;
   }
  }
  FUNC_6(VAR_17);
  break;

 case 128:
 case 130:




  VAR_16->cam_scsi_sense.length = VAR_17->csio.sense_len;

  FUNC_0(VAR_16, VAR_13, "Fetching %d bytes of "
      "sense data\n", VAR_17->csio.sense_len);

  if (FUNC_4(VAR_16, VAR_17, &VAR_16->cam_scsi_sense.opcode,
      sizeof(VAR_16->cam_scsi_sense))) {

   if ((VAR_16->sc_quirks & VAR_4) &&
       (VAR_16->sc_transfer.cmd_data[0] == VAR_5)) {
    VAR_17->csio.sense_len = VAR_8;
   }
   FUNC_3(VAR_16, VAR_3, &VAR_17->csio.sense_data.error_code,
       VAR_17->csio.sense_len, VAR_17->ccb_h.timeout,
       &VAR_15, VAR_17);
  }
  break;

 default:





  FUNC_7(VAR_17->ccb_h.path, 1);
  VAR_17->ccb_h.status = VAR_2 | VAR_0;
  FUNC_6(VAR_17);
  break;
 }
}
