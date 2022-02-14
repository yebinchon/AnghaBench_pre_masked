
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sensitivity; int inertia; int uplateau; int reach; int draghys; int mindrag; int upthresh; int threshold; int jenks; int ztime; int pts; int skipback; int * sysctl_tree; int sysctl_ctx; } ;
struct psm_softc {TYPE_1__ tpinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,struct psm_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int *) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_5(struct psm_softc *VAR_19)
{

 if (VAR_19->tpinfo.sysctl_tree != ((void*)0))
  return;


 FUNC_4(&VAR_19->tpinfo.sysctl_ctx);
 VAR_19->tpinfo.sysctl_tree = FUNC_0(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_3(VAR_17), VAR_4, "trackpoint", VAR_1,
     0, "IBM/Lenovo TrackPoint");


 VAR_19->tpinfo.sensitivity = 0x80;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "sensitivity", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_11,
     VAR_18, "I",
     "Sensitivity");


 VAR_19->tpinfo.inertia = 0x06;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "negative_inertia", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_9,
     VAR_18, "I",
     "Negative inertia factor");


 VAR_19->tpinfo.uplateau = 0x61;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "upper_plateau", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_14,
     VAR_18, "I",
     "Transfer function upper plateau speed");


 VAR_19->tpinfo.reach = 0x0a;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "backup_range", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_5,
     VAR_18, "I",
     "Backup range");


 VAR_19->tpinfo.draghys = 0xff;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "drag_hysteresis", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_6,
     VAR_18, "I",
     "Drag hysteresis");


 VAR_19->tpinfo.mindrag = 0x14;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "minimum_drag", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_8,
     VAR_18, "I",
     "Minimum drag");


 VAR_19->tpinfo.upthresh = 0xff;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "up_threshold", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_15,
     VAR_18, "I",
     "Up threshold for release");


 VAR_19->tpinfo.threshold = 0x08;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "threshold", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_13,
     VAR_18, "I",
     "Threshold");


 VAR_19->tpinfo.jenks = 0x87;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "jenks_curvature", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_7,
     VAR_18, "I",
     "Jenks curvature");


 VAR_19->tpinfo.ztime = 0x26;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "z_time", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_16,
     VAR_18, "I",
     "Z time constant");


 VAR_19->tpinfo.pts = 0x00;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "press_to_select", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_10,
     VAR_18, "I",
     "Press to Select");


 VAR_19->tpinfo.skipback = 0x00;
 FUNC_1(&VAR_19->tpinfo.sysctl_ctx,
     FUNC_2(VAR_19->tpinfo.sysctl_tree), VAR_4,
     "skip_backups", VAR_3|VAR_2|VAR_0,
     VAR_19, VAR_12,
     VAR_18, "I",
     "Skip backups from drags");
}
