
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scb {TYPE_4__* io_ctx; int dmamap; int flags; struct hardware_scb* hscb; } ;
struct TYPE_5__ {int cdb; } ;
struct hardware_scb {int cdb_len; TYPE_1__ shared_data; int cdb32; } ;
struct TYPE_6__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_hdr {scalar_t__ func_code; int flags; } ;
struct ccb_scsiio {int cdb_len; TYPE_2__ cdb_io; scalar_t__ sense_resid; scalar_t__ resid; struct ccb_hdr ccb_h; } ;
struct cam_sim {int dummy; } ;
struct ahc_softc {int buffer_dmat; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_8__ {TYPE_3__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ahc_softc*,struct scb*) ;
 int FUNC_1 (struct scb*,int ) ;
 int FUNC_2 (int ,int ,union ccb*,int ,struct scb*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_6(struct ahc_softc *VAR_8, struct cam_sim *VAR_9,
        struct ccb_scsiio *VAR_10, struct scb *VAR_11)
{
 struct hardware_scb *VAR_12;
 struct ccb_hdr *VAR_13;
 int VAR_14;

 VAR_12 = VAR_11->hscb;
 VAR_13 = &VAR_10->ccb_h;

 VAR_10->resid = 0;
 VAR_10->sense_resid = 0;
 if (VAR_13->func_code == VAR_6) {
  VAR_12->cdb_len = VAR_10->cdb_len;
  if ((VAR_13->flags & VAR_1) != 0) {

   if (VAR_12->cdb_len > sizeof(VAR_12->cdb32)
    || (VAR_13->flags & VAR_0) != 0) {
    FUNC_1(VAR_11,
          VAR_3);
    FUNC_0(VAR_8, VAR_11);
    FUNC_4((union ccb *)VAR_10);
    return;
   }
   if (VAR_12->cdb_len > 12) {
    FUNC_3(VAR_12->cdb32,
           VAR_10->cdb_io.cdb_ptr,
           VAR_12->cdb_len);
    VAR_11->flags |= VAR_5;
   } else {
    FUNC_3(VAR_12->shared_data.cdb,
           VAR_10->cdb_io.cdb_ptr,
           VAR_12->cdb_len);
   }
  } else {
   if (VAR_12->cdb_len > 12) {
    FUNC_3(VAR_12->cdb32, VAR_10->cdb_io.cdb_bytes,
           VAR_12->cdb_len);
    VAR_11->flags |= VAR_5;
   } else {
    FUNC_3(VAR_12->shared_data.cdb,
           VAR_10->cdb_io.cdb_bytes,
           VAR_12->cdb_len);
   }
  }
 }

 VAR_14 = FUNC_2(VAR_8->buffer_dmat,
        VAR_11->dmamap,
        (union ccb *)VAR_10,
        VAR_7,
        VAR_11,
        0);
 if (VAR_14 == VAR_4) {






  FUNC_5(VAR_9, 1);
  VAR_11->io_ctx->ccb_h.status |= VAR_2;
 }
}
