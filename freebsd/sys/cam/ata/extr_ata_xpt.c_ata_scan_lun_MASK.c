
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ status; int path; int func_code; int flags; int cbfcnp; } ;
struct TYPE_14__ {int flags; } ;
union ccb {TYPE_7__ ccb_h; TYPE_5__ crcn; } ;
struct TYPE_10__ {scalar_t__ status; } ;
struct ccb_pathinq {TYPE_1__ ccb_h; } ;
struct cam_periph {int flags; scalar_t__ softc; } ;
struct cam_path {TYPE_4__* device; TYPE_3__* target; TYPE_2__* bus; } ;
struct TYPE_15__ {int restart; int request_ccbs; } ;
typedef TYPE_6__ probe_softc ;
typedef scalar_t__ cam_status ;
typedef int cam_flags ;
struct TYPE_17__ {int tqe; } ;
struct TYPE_13__ {int lun_id; } ;
struct TYPE_12__ {int target_id; } ;
struct TYPE_11__ {int path_id; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_7__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,char*,int ,int ,int *,int ,union ccb*) ;
 struct cam_periph* FUNC_3 (struct cam_path*,char*) ;
 TYPE_8__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 union ccb* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_9 (struct cam_path*) ;
 scalar_t__ FUNC_10 (struct cam_path*) ;
 int FUNC_11 (struct cam_path*) ;
 int FUNC_12 (struct cam_path*,char*) ;
 int FUNC_13 (TYPE_7__*,struct cam_path*,int ) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_14(struct cam_periph *VAR_13, struct cam_path *VAR_14,
      cam_flags VAR_15, union ccb *VAR_16)
{
 struct ccb_pathinq VAR_17;
 cam_status VAR_18;
 struct cam_path *VAR_19;
 struct cam_periph *VAR_20;
 int VAR_21;

 FUNC_0(VAR_14, VAR_0, ("xpt_scan_lun\n"));

 FUNC_8(&VAR_17, VAR_14);
 if (VAR_17.ccb_h.status != VAR_4) {
  if (VAR_16 != ((void*)0)) {
   VAR_16->ccb_h.status = VAR_17.ccb_h.status;
   FUNC_6(VAR_16);
  }
  return;
 }

 if (VAR_16 == ((void*)0)) {
  VAR_16 = FUNC_4();
  if (VAR_16 == ((void*)0)) {
   FUNC_12(VAR_14, "xpt_scan_lun: can't allocate CCB, "
       "can't continue\n");
   return;
  }
  VAR_18 = FUNC_5(&VAR_19, ((void*)0),
       VAR_14->bus->path_id,
       VAR_14->target->target_id,
       VAR_14->device->lun_id);
  if (VAR_18 != VAR_4) {
   FUNC_12(VAR_14, "xpt_scan_lun: can't create path, "
       "can't continue\n");
   FUNC_7(VAR_16);
   return;
  }
  FUNC_13(&VAR_16->ccb_h, VAR_19, VAR_3);
  VAR_16->ccb_h.cbfcnp = VAR_12;
  VAR_16->ccb_h.flags |= VAR_6;
  VAR_16->ccb_h.func_code = VAR_7;
  VAR_16->crcn.flags = VAR_15;
 }

 VAR_21 = (FUNC_10(VAR_14) == 0);
 if (VAR_21)
  FUNC_9(VAR_14);
 if ((VAR_20 = FUNC_3(VAR_14, "aprobe")) != ((void*)0)) {
  if ((VAR_20->flags & VAR_2) == 0) {
   probe_softc *VAR_22;

   VAR_22 = (probe_softc *)VAR_20->softc;
   FUNC_1(&VAR_22->request_ccbs,
    &VAR_16->ccb_h, VAR_8.tqe);
   VAR_22->restart = 1;
  } else {
   VAR_16->ccb_h.status = VAR_5;
   FUNC_6(VAR_16);
  }
 } else {
  VAR_18 = FUNC_2(VAR_10, ((void*)0), VAR_9,
       VAR_11, "aprobe",
       VAR_1,
       VAR_16->ccb_h.path, ((void*)0), 0,
       VAR_16);

  if (VAR_18 != VAR_4) {
   FUNC_12(VAR_14, "xpt_scan_lun: cam_alloc_periph "
       "returned an error, can't continue probe\n");
   VAR_16->ccb_h.status = VAR_18;
   FUNC_6(VAR_16);
  }
 }
 if (VAR_21)
  FUNC_11(VAR_14);
}
