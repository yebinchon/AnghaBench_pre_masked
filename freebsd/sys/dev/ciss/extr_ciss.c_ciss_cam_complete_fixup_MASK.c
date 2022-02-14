
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_inquiry_data {int device; int revision; int product; int vendor; } ;
struct ciss_softc {struct ciss_ldrive** ciss_logical; TYPE_3__* ciss_id; } ;
struct ciss_ldrive {TYPE_5__* cl_lstatus; TYPE_4__* cl_ldrive; } ;
struct TYPE_7__ {int flags; int target_id; int path; } ;
struct TYPE_6__ {int* cdb_bytes; scalar_t__ cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; TYPE_2__ ccb_h; scalar_t__ data_ptr; TYPE_1__ cdb_io; } ;
struct TYPE_10__ {int status; } ;
struct TYPE_9__ {int fault_tolerance; } ;
struct TYPE_8__ {int PowerUPNvramFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct scsi_inquiry_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct ciss_softc *VAR_12, struct ccb_scsiio *VAR_13)
{
    struct scsi_inquiry_data *VAR_14;
    struct ciss_ldrive *VAR_15;
    uint8_t *VAR_16;
    int VAR_17, VAR_18;

    VAR_16 = (VAR_13->ccb_h.flags & VAR_0) ?
  (uint8_t *)VAR_13->cdb_io.cdb_ptr : VAR_13->cdb_io.cdb_bytes;
    if (VAR_16[0] == VAR_3 &&
 (VAR_16[1] & VAR_9) == 0 &&
 (VAR_13->ccb_h.flags & VAR_2) == VAR_1 &&
 VAR_13->dxfer_len >= VAR_5) {

 VAR_14 = (struct scsi_inquiry_data *)VAR_13->data_ptr;
 VAR_18 = VAR_13->ccb_h.target_id;
 VAR_17 = FUNC_2(FUNC_6(VAR_13->ccb_h.path));







 if( !(VAR_12->ciss_id->PowerUPNvramFlags & VAR_4)){
  if (FUNC_0(VAR_17)) {
       if (FUNC_1(VAR_14) == VAR_10)
    VAR_14->device = (VAR_14->device & 0xe0) | VAR_11;
       return;
  }
  VAR_15 = &VAR_12->ciss_logical[VAR_17][VAR_18];

  FUNC_5(VAR_14->vendor, "HP",
          VAR_8);
  FUNC_5(VAR_14->product,
          FUNC_3(VAR_15->cl_ldrive->fault_tolerance),
          VAR_6);
  FUNC_5(VAR_14->revision,
          FUNC_4(VAR_15->cl_lstatus->status),
          VAR_7);
 }
    }
}
