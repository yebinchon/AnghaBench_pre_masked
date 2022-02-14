
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


typedef union ccb {int dummy; } ccb ;
struct scb {TYPE_6__* io_ctx; int dmamap; struct hardware_scb* hscb; } ;
struct TYPE_7__ {int cdblen; int cdbptr; } ;
struct TYPE_8__ {int cdb; TYPE_1__ cdb_from_host; } ;
struct TYPE_9__ {TYPE_2__ idata; } ;
struct hardware_scb {int cdb_len; TYPE_3__ shared_data; } ;
struct TYPE_10__ {scalar_t__ cdb_bytes; scalar_t__ cdb_ptr; } ;
struct ccb_hdr {scalar_t__ func_code; int flags; } ;
struct ccb_scsiio {TYPE_4__ cdb_io; int cdb_len; scalar_t__ sense_resid; scalar_t__ resid; struct ccb_hdr ccb_h; } ;
struct cam_sim {int dummy; } ;
struct ahd_softc {int buffer_dmat; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_12__ {TYPE_5__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (struct scb*,int ) ;
 int FUNC_3 (int ,int ,union ccb*,int ,struct scb*,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_7(struct ahd_softc *VAR_9, struct cam_sim *VAR_10,
        struct ccb_scsiio *VAR_11, struct scb *VAR_12)
{
 struct hardware_scb *VAR_13;
 struct ccb_hdr *VAR_14;
 int VAR_15;

 VAR_13 = VAR_12->hscb;
 VAR_14 = &VAR_11->ccb_h;

 VAR_11->resid = 0;
 VAR_11->sense_resid = 0;
 if (VAR_14->func_code == VAR_7) {
  VAR_13->cdb_len = VAR_11->cdb_len;
  if ((VAR_14->flags & VAR_1) != 0) {

   if (VAR_13->cdb_len > VAR_5
    && (VAR_14->flags & VAR_0) == 0) {






    FUNC_2(VAR_12,
          VAR_3);
    FUNC_0(VAR_9, VAR_12);
    FUNC_5((union ccb *)VAR_11);
    return;
   }
   if ((VAR_14->flags & VAR_0) != 0) {
    VAR_13->shared_data.idata.cdb_from_host.cdbptr =
       FUNC_1((uintptr_t)VAR_11->cdb_io.cdb_ptr);
    VAR_13->shared_data.idata.cdb_from_host.cdblen =
       VAR_11->cdb_len;
    VAR_13->cdb_len |= VAR_6;
   } else {
    FUNC_4(VAR_13->shared_data.idata.cdb,
           VAR_11->cdb_io.cdb_ptr,
           VAR_13->cdb_len);
   }
  } else {
   if (VAR_13->cdb_len > VAR_5) {

    FUNC_2(VAR_12,
          VAR_3);
    FUNC_0(VAR_9, VAR_12);
    FUNC_5((union ccb *)VAR_11);
    return;
   }
   FUNC_4(VAR_13->shared_data.idata.cdb,
          VAR_11->cdb_io.cdb_bytes, VAR_13->cdb_len);
  }
 }

 VAR_15 = FUNC_3(VAR_9->buffer_dmat,
        VAR_12->dmamap,
        (union ccb *)VAR_11,
        VAR_8,
        VAR_12, 0);
 if (VAR_15 == VAR_4) {




  FUNC_6(VAR_10, 1);
  VAR_12->io_ctx->ccb_h.status |= VAR_2;
 }
}
