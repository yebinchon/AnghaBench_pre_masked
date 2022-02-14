
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; int path; } ;
union ccb {TYPE_4__ ccb_h; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct ccb_pathinq {TYPE_1__ ccb_h; } ;
struct cam_periph {int flags; scalar_t__ softc; } ;
struct cam_path {int dummy; } ;
struct TYPE_6__ {int restart; int request_ccbs; } ;
typedef TYPE_2__ nvme_probe_softc ;
typedef scalar_t__ cam_status ;
typedef int cam_flags ;
struct TYPE_7__ {int tqe; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,char*,int ,int ,int *,int ,union ccb*) ;
 struct cam_periph* FUNC_3 (struct cam_path*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_6 (struct cam_path*) ;
 scalar_t__ FUNC_7 (struct cam_path*) ;
 scalar_t__ FUNC_8 (struct cam_path*) ;
 int FUNC_9 (struct cam_path*) ;
 int FUNC_10 (struct cam_path*,char*) ;

__attribute__((used)) static void
FUNC_11(struct cam_periph *VAR_10, struct cam_path *VAR_11,
      cam_flags VAR_12, union ccb *VAR_13)
{
 struct ccb_pathinq VAR_14;
 cam_status VAR_15;
 struct cam_periph *VAR_16;
 int VAR_17;

 FUNC_0(VAR_11, VAR_0, ("nvme_scan_lun\n"));

 FUNC_5(&VAR_14, VAR_11);

 if (VAR_14.ccb_h.status != VAR_4) {
  if (VAR_13 != ((void*)0)) {
   VAR_13->ccb_h.status = VAR_14.ccb_h.status;
   FUNC_4(VAR_13);
  }
  return;
 }

 if (FUNC_7(VAR_11) == VAR_1) {
  FUNC_0(VAR_11, VAR_0, ("nvme_scan_lun ignoring bus\n"));
  VAR_13->ccb_h.status = VAR_4;
  FUNC_4(VAR_13);
  return;
 }

 VAR_17 = (FUNC_8(VAR_11) == 0);
 if (VAR_17)
  FUNC_6(VAR_11);
 if ((VAR_16 = FUNC_3(VAR_11, "nvme_probe")) != ((void*)0)) {
  if ((VAR_16->flags & VAR_3) == 0) {
   nvme_probe_softc *VAR_18;

   VAR_18 = (nvme_probe_softc *)VAR_16->softc;
   FUNC_1(&VAR_18->request_ccbs,
    &VAR_13->ccb_h, VAR_9.tqe);
   VAR_18->restart = 1;
   FUNC_0(VAR_11, VAR_0,
       ("restarting nvme_probe device\n"));
  } else {
   VAR_13->ccb_h.status = VAR_5;
   FUNC_0(VAR_11, VAR_0,
       ("Failing to restart nvme_probe device\n"));
   FUNC_4(VAR_13);
  }
 } else {
  FUNC_0(VAR_11, VAR_0,
      ("Adding nvme_probe device\n"));
  VAR_15 = FUNC_2(VAR_7, ((void*)0), VAR_6,
       VAR_8, "nvme_probe",
       VAR_2,
       VAR_13->ccb_h.path, ((void*)0), 0,
       VAR_13);

  if (VAR_15 != VAR_4) {
   FUNC_10(VAR_11, "xpt_scan_lun: cam_alloc_periph "
       "returned an error, can't continue probe\n");
   VAR_13->ccb_h.status = VAR_15;
   FUNC_4(VAR_13);
  }
 }
 if (VAR_17)
  FUNC_9(VAR_11);
}
