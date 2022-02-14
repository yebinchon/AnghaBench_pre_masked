
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ status; int path; int flags; int func_code; int cbfcnp; } ;
struct TYPE_12__ {int flags; } ;
union ccb {TYPE_6__ ccb_h; TYPE_4__ crcn; } ;
struct ccb_pathinq {int hba_misc; TYPE_6__ ccb_h; } ;
struct cam_periph {int flags; scalar_t__ softc; } ;
struct cam_path {TYPE_3__* device; TYPE_2__* target; TYPE_1__* bus; } ;
struct TYPE_13__ {int request_ccbs; } ;
typedef TYPE_5__ probe_softc ;
typedef scalar_t__ cam_status ;
typedef int cam_flags ;
struct TYPE_15__ {int tqe; } ;
struct TYPE_11__ {int lun_id; } ;
struct TYPE_10__ {int target_id; } ;
struct TYPE_9__ {int path_id; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,TYPE_6__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,char*,int ,int ,int *,int ,union ccb*) ;
 struct cam_periph* FUNC_3 (struct cam_path*,char*) ;
 TYPE_7__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (union ccb*) ;
 union ccb* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (struct cam_path*) ;
 scalar_t__ FUNC_10 (struct cam_path*) ;
 int FUNC_11 (struct cam_path*) ;
 int FUNC_12 (struct cam_path*,char*) ;
 int FUNC_13 (TYPE_6__*,struct cam_path*,int ) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_14(struct cam_periph *VAR_16, struct cam_path *VAR_17,
      cam_flags VAR_18, union ccb *VAR_19)
{
 struct ccb_pathinq VAR_20;
 cam_status VAR_21;
 struct cam_path *VAR_22;
 struct cam_periph *VAR_23;
 int VAR_24;

 FUNC_0(VAR_17, VAR_0, ("scsi_scan_lun\n"));

 FUNC_13(&VAR_20.ccb_h, VAR_17, VAR_3);
 VAR_20.ccb_h.func_code = VAR_9;
 FUNC_4((union ccb *)&VAR_20);

 if (VAR_20.ccb_h.status != VAR_5) {
  if (VAR_19 != ((void*)0)) {
   VAR_19->ccb_h.status = VAR_20.ccb_h.status;
   FUNC_7(VAR_19);
  }
  return;
 }

 if ((VAR_20.hba_misc & VAR_8) != 0) {




  if (VAR_19 != ((void*)0)) {
   VAR_19->ccb_h.status = VAR_5;
   FUNC_7(VAR_19);
  }
  return;
 }

 if (VAR_19 == ((void*)0)) {
  VAR_19 = FUNC_5();
  if (VAR_19 == ((void*)0)) {
   FUNC_12(VAR_17, "scsi_scan_lun: can't allocate CCB, "
       "can't continue\n");
   return;
  }
  VAR_21 = FUNC_6(&VAR_22, ((void*)0),
       VAR_17->bus->path_id,
       VAR_17->target->target_id,
       VAR_17->device->lun_id);
  if (VAR_21 != VAR_5) {
   FUNC_12(VAR_17, "scsi_scan_lun: can't create path, "
       "can't continue\n");
   FUNC_8(VAR_19);
   return;
  }
  FUNC_13(&VAR_19->ccb_h, VAR_22, VAR_4);
  VAR_19->ccb_h.cbfcnp = VAR_15;
  VAR_19->ccb_h.func_code = VAR_10;
  VAR_19->ccb_h.flags |= VAR_7;
  VAR_19->crcn.flags = VAR_18;
 }

 VAR_24 = (FUNC_10(VAR_17) == 0);
 if (VAR_24)
  FUNC_9(VAR_17);
 if ((VAR_23 = FUNC_3(VAR_17, "probe")) != ((void*)0)) {
  if ((VAR_23->flags & VAR_2) == 0) {
   probe_softc *VAR_25;

   VAR_25 = (probe_softc *)VAR_23->softc;
   FUNC_1(&VAR_25->request_ccbs,
       &VAR_19->ccb_h, VAR_11.tqe);
  } else {
   VAR_19->ccb_h.status = VAR_6;
   FUNC_7(VAR_19);
  }
 } else {
  VAR_21 = FUNC_2(VAR_13, ((void*)0), VAR_12,
       VAR_14, "probe",
       VAR_1,
       VAR_19->ccb_h.path, ((void*)0), 0,
       VAR_19);

  if (VAR_21 != VAR_5) {
   FUNC_12(VAR_17, "scsi_scan_lun: cam_alloc_periph "
       "returned an error, can't continue probe\n");
   VAR_19->ccb_h.status = VAR_21;
   FUNC_7(VAR_19);
  }
 }
 if (VAR_24)
  FUNC_11(VAR_17);
}
