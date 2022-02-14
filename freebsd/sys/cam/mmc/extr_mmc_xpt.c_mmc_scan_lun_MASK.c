
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct ccb_pathinq {TYPE_1__ ccb_h; } ;
struct cam_periph {int flags; } ;
struct cam_path {int dummy; } ;
typedef scalar_t__ cam_status ;
typedef int cam_flags ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,char*,int ,struct cam_path*,int *,int ,union ccb*) ;
 struct cam_periph* FUNC_2 (struct cam_path*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_5 (struct cam_path*) ;
 scalar_t__ FUNC_6 (struct cam_path*) ;
 scalar_t__ FUNC_7 (struct cam_path*) ;
 int FUNC_8 (struct cam_path*) ;
 int FUNC_9 (struct cam_path*,char*) ;

__attribute__((used)) static void
FUNC_10(struct cam_periph *VAR_10, struct cam_path *VAR_11,
      cam_flags VAR_12, union ccb *VAR_13)
{
 struct ccb_pathinq VAR_14;
 cam_status VAR_15;
 struct cam_periph *VAR_16;
 int VAR_17;

 FUNC_0(VAR_11, VAR_1, ("mmc_scan_lun\n"));

 FUNC_4(&VAR_14, VAR_11);

 if (VAR_14.ccb_h.status != VAR_5) {
  if (VAR_13 != ((void*)0)) {
   VAR_13->ccb_h.status = VAR_14.ccb_h.status;
   FUNC_3(VAR_13);
  }
  return;
 }

 if (FUNC_6(VAR_11) == VAR_2) {
  FUNC_0(VAR_11, VAR_1, ("mmd_scan_lun ignoring bus\n"));
  VAR_13->ccb_h.status = VAR_5;
  FUNC_3(VAR_13);
  return;
 }

 VAR_17 = (FUNC_7(VAR_11) == 0);
 if (VAR_17)
  FUNC_5(VAR_11);

 if ((VAR_16 = FUNC_2(VAR_11, "mmcprobe")) != ((void*)0)) {
  if ((VAR_16->flags & VAR_4) == 0) {






                        FUNC_0(VAR_11, VAR_0,
                                  ("Got scan request, but mmcprobe already exists\n"));
   VAR_13->ccb_h.status = VAR_6;
                        FUNC_3(VAR_13);
  } else {
   VAR_13->ccb_h.status = VAR_6;
   FUNC_3(VAR_13);
  }
 } else {
  FUNC_9(VAR_11, " Set up the mmcprobe device...\n");

                VAR_15 = FUNC_1(VAR_8, ((void*)0),
       VAR_7,
       VAR_9,
       "mmcprobe",
       VAR_3,
       VAR_11, ((void*)0), 0,
       VAR_13);
                if (VAR_15 != VAR_5) {
   FUNC_9(VAR_11, "xpt_scan_lun: cam_alloc_periph "
                                  "returned an error, can't continue probe\n");
  }
  VAR_13->ccb_h.status = VAR_15;
  FUNC_3(VAR_13);
 }

 if (VAR_17)
  FUNC_8(VAR_11);
}
