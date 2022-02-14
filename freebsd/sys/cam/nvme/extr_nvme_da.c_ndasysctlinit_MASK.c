
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr2 ;
typedef int tmpstr ;
struct nda_softc {int * sysctl_tree; int sysctl_ctx; int cam_iosched; int invalidations; int * sysctl_stats_tree; int sysctl_stats_ctx; int errors; int timeouts; int trim_lbas; int trim_ranges; int trim_count; int deletes; int unmappedio; int flags; } ;
struct cam_periph {int flags; int unit_number; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int,char*) ;
 int * FUNC_1 (int *,int ,int ,char*,int ,int ,char*) ;
 int * FUNC_2 (int *,int ,int ,char*,int ,int ,char*,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,struct cam_periph*,int ,int ,char*,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int ,int *,char*) ;
 int FUNC_5 (int *,int ,int ,char*,int ,int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *,int *) ;
 int VAR_8 ;
 int FUNC_9 (struct cam_periph*) ;
 int VAR_9 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_10, int VAR_11)
{
 struct cam_periph *VAR_12;
 struct nda_softc *VAR_13;
 char VAR_14[32], VAR_15[16];

 VAR_12 = (struct cam_periph *)VAR_10;


 if ((VAR_12->flags & VAR_0) != 0) {
  FUNC_9(VAR_12);
  return;
 }

 VAR_13 = (struct nda_softc *)VAR_12->softc;
 FUNC_11(VAR_14, sizeof(VAR_14), "CAM NDA unit %d", VAR_12->unit_number);
 FUNC_11(VAR_15, sizeof(VAR_15), "%d", VAR_12->unit_number);

 FUNC_12(&VAR_13->sysctl_ctx);
 VAR_13->flags |= VAR_5;
 VAR_13->sysctl_tree = FUNC_2(&VAR_13->sysctl_ctx,
  FUNC_7(VAR_7), VAR_6, VAR_15,
  VAR_2, 0, VAR_14, "device_index");
 if (VAR_13->sysctl_tree == ((void*)0)) {
  FUNC_10("ndasysctlinit: unable to allocate sysctl tree\n");
  FUNC_9(VAR_12);
  return;
 }

 FUNC_0(&VAR_13->sysctl_ctx, FUNC_6(VAR_13->sysctl_tree),
     VAR_6, "unmapped_io", VAR_2,
     &VAR_13->unmappedio, 0, "Unmapped I/O leaf");

 FUNC_4(&VAR_13->sysctl_ctx, FUNC_6(VAR_13->sysctl_tree),
     VAR_6, "deletes", VAR_2,
     &VAR_13->deletes, "Number of BIO_DELETE requests");

 FUNC_5(&VAR_13->sysctl_ctx,
  FUNC_6(VAR_13->sysctl_tree), VAR_6,
  "trim_count", VAR_2, &VAR_13->trim_count,
  "Total number of unmap/dsm commands sent");
 FUNC_5(&VAR_13->sysctl_ctx,
  FUNC_6(VAR_13->sysctl_tree), VAR_6,
  "trim_ranges", VAR_2, &VAR_13->trim_ranges,
  "Total number of ranges in unmap/dsm commands");
 FUNC_5(&VAR_13->sysctl_ctx,
  FUNC_6(VAR_13->sysctl_tree), VAR_6,
  "trim_lbas", VAR_2, &VAR_13->trim_lbas,
  "Total lbas in the unmap/dsm commands sent");

 FUNC_0(&VAR_13->sysctl_ctx, FUNC_6(VAR_13->sysctl_tree),
     VAR_6, "rotating", VAR_2, &VAR_9, 1,
     "Rotating media");
 FUNC_8(VAR_13->cam_iosched, &VAR_13->sysctl_ctx,
     VAR_13->sysctl_tree);

 FUNC_9(VAR_12);
}
