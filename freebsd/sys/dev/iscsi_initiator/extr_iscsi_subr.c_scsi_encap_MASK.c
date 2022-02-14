
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct ccb_hdr {int flags; int status; int target_lun; TYPE_6__* spriv_ptr0; } ;
struct TYPE_19__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {int tag_action; int cdb_len; int dxfer_len; TYPE_3__ cdb_io; } ;
union ccb {struct ccb_hdr ccb_h; struct ccb_scsiio csio; } ;
typedef int u_char ;
struct cam_sim {int dummy; } ;
struct TYPE_20__ {int F; int W; int R; int edtlen; int cdb; int lun; void* attr; int opcode; } ;
typedef TYPE_4__ scsi_req_t ;
struct TYPE_17__ {TYPE_4__ scsi_req; } ;
struct TYPE_18__ {TYPE_1__ ipdu; } ;
struct TYPE_21__ {union ccb* ccb; TYPE_2__ pdu; } ;
typedef TYPE_5__ pduq_t ;
struct TYPE_22__ {TYPE_7__* isc; } ;
typedef TYPE_6__ isc_session_t ;
struct TYPE_23__ {int npdu_alloc; int npdu_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 TYPE_6__* FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int,char*,TYPE_6__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (char*,int) ;
 TYPE_5__* FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (TYPE_7__*,int ,char*,int) ;
 int FUNC_12 (char*,int,long) ;

int
FUNC_13(struct cam_sim *VAR_13, union ccb *VAR_14)
{
     isc_session_t *VAR_15 = FUNC_0(VAR_13);
     struct ccb_scsiio *VAR_16 = &VAR_14->csio;
     struct ccb_hdr *VAR_17 = &VAR_14->ccb_h;
     pduq_t *VAR_18;
     scsi_req_t *VAR_19;

     FUNC_2(8);

     FUNC_1(4, "ccb->sp=%p", VAR_17->spriv_ptr0);
     VAR_15 = VAR_17->spriv_ptr0;

     if((VAR_18 = FUNC_8(VAR_15->isc, VAR_7)) == ((void*)0)) {
   FUNC_1(2, "ccb->sp=%p", VAR_17->spriv_ptr0);
   FUNC_10(1, "pdu_alloc failed sc->npdu_max=%d npdu_alloc=%d",
   VAR_15->isc->npdu_max, VAR_15->isc->npdu_alloc);
   while((VAR_18 = FUNC_8(VAR_15->isc, VAR_7)) == ((void*)0)) {
        FUNC_10(2, "waiting...");



        FUNC_11(VAR_15->isc, 0, "isc_encap", 5*VAR_8);

   }
     }
     VAR_19 = &VAR_18->pdu.ipdu.scsi_req;
     VAR_19->opcode = VAR_6;
     VAR_19->F = 1;
     VAR_19->attr = VAR_12;


     FUNC_3(VAR_15, VAR_17->target_lun, (u_char *)&VAR_19->lun);

     if((VAR_17->flags & VAR_1) != 0) {
   if((VAR_17->flags & VAR_0) == 0) {
        if(VAR_16->cdb_len > 16) {
      FUNC_10(3, "oversize cdb %d > 16", VAR_16->cdb_len);
      goto invalid;
        }
   }
   else {
        FUNC_10(3, "not phys");
        goto invalid;
   }
     }

     if(VAR_16->cdb_len > sizeof(VAR_19->cdb))
   FUNC_12("guevalt! %d > %ld", VAR_16->cdb_len, (long)sizeof(VAR_19->cdb));

     FUNC_6(VAR_19->cdb,
     VAR_17->flags & VAR_1? VAR_16->cdb_io.cdb_ptr: VAR_16->cdb_io.cdb_bytes,
     VAR_16->cdb_len);

     VAR_19->W = (VAR_14->ccb_h.flags & VAR_3) == VAR_4;
     VAR_19->R = (VAR_14->ccb_h.flags & VAR_3) == VAR_2;
     VAR_19->edtlen = FUNC_4(VAR_16->dxfer_len);

     VAR_18->ccb = VAR_14;



     if(FUNC_5(VAR_15, VAR_18) == 0)
   return 1;
 invalid:
     VAR_14->ccb_h.status = VAR_5;
     FUNC_9(VAR_15->isc, VAR_18);

     return 0;
}
