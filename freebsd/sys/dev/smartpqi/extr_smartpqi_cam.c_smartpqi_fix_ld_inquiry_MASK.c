
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_inquiry_data {int revision; int product; int vendor; } ;
struct TYPE_9__ {int flags; size_t target_id; size_t target_lun; } ;
struct TYPE_8__ {int* cdb_bytes; scalar_t__ cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; TYPE_2__ ccb_h; scalar_t__ data_ptr; TYPE_1__ cdb_io; } ;
struct TYPE_10__ {TYPE_4__*** device_list; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_11__ {scalar_t__ devtype; scalar_t__ volume_offline; int raid_level; } ;
typedef TYPE_4__ pqi_scsi_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(pqisrc_softstate_t *VAR_10, struct ccb_scsiio *VAR_11)
{
 struct scsi_inquiry_data *VAR_12 = ((void*)0);
 uint8_t *VAR_13 = ((void*)0);
 pqi_scsi_dev_t *VAR_14 = ((void*)0);

 FUNC_0("IN\n");

  VAR_13 = (VAR_11->ccb_h.flags & VAR_0) ?
  (uint8_t *)VAR_11->cdb_io.cdb_ptr : VAR_11->cdb_io.cdb_bytes;
 if(VAR_13[0] == VAR_4 &&
  (VAR_13[1] & VAR_9) == 0 &&
  (VAR_11->ccb_h.flags & VAR_2) == VAR_1 &&
  VAR_11->dxfer_len >= VAR_5) {

  VAR_12 = (struct scsi_inquiry_data *)VAR_11->data_ptr;

  VAR_14 = VAR_10->device_list[VAR_11->ccb_h.target_id][VAR_11->ccb_h.target_lun];



  if( !VAR_14 || !FUNC_2(VAR_14) ||
    (VAR_14->devtype != VAR_3) ||
    FUNC_1(VAR_14)) {
     return;
  }

  FUNC_4(VAR_12->vendor, "MSCC",
          VAR_8);
  FUNC_4(VAR_12->product,
   FUNC_3(VAR_14->raid_level),
          VAR_6);
  FUNC_4(VAR_12->revision, VAR_14->volume_offline?"OFF":"OK",
          VAR_7);
     }

 FUNC_0("OUT\n");
}
