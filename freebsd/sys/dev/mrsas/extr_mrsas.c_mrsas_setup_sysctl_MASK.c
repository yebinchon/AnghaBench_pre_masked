
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmpstr2 ;
typedef int tmpstr ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_6__ {int val_rdonly; } ;
struct TYPE_5__ {int val_rdonly; } ;
struct TYPE_4__ {int val_rdonly; } ;
struct mrsas_softc {TYPE_3__ sge_holes; TYPE_2__ prp_count; int drv_stream_detection; int block_sync_cache; int reset_in_progress; int mrsas_fw_fault_check_delay; int mrsas_io_timeout; int mrsas_debug; int io_cmds_highwater; TYPE_1__ fw_outstanding; int reset_count; int disableOnlineCtrlReset; struct sysctl_oid* sysctl_tree; struct sysctl_ctx_list sysctl_ctx; int mrsas_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sysctl_ctx_list*) ;

__attribute__((used)) static void
FUNC_12(struct mrsas_softc *VAR_5)
{
 struct sysctl_ctx_list *VAR_6 = ((void*)0);
 struct sysctl_oid *VAR_7 = ((void*)0);
 char VAR_8[80], VAR_9[80];





 FUNC_9(VAR_8, sizeof(VAR_8), "MRSAS controller %d",
     FUNC_8(VAR_5->mrsas_dev));
 FUNC_9(VAR_9, sizeof(VAR_9), "%d", FUNC_8(VAR_5->mrsas_dev));

 VAR_6 = FUNC_6(VAR_5->mrsas_dev);
 if (VAR_6 != ((void*)0))
  VAR_7 = FUNC_7(VAR_5->mrsas_dev);

 if (VAR_7 == ((void*)0)) {
  FUNC_11(&VAR_5->sysctl_ctx);
  VAR_5->sysctl_tree = FUNC_1(&VAR_5->sysctl_ctx,
      FUNC_5(VAR_4), VAR_3, VAR_9,
      VAR_0, 0, VAR_8);
  if (VAR_5->sysctl_tree == ((void*)0))
   return;
  VAR_6 = &VAR_5->sysctl_ctx;
  VAR_7 = VAR_5->sysctl_tree;
 }
 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "disable_ocr", VAR_1, &VAR_5->disableOnlineCtrlReset, 0,
     "Disable the use of OCR");

 FUNC_2(VAR_6, FUNC_4(VAR_7),
     VAR_3, "driver_version", VAR_0, VAR_2,
     FUNC_10(VAR_2), "driver version");

 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "reset_count", VAR_0,
     &VAR_5->reset_count, 0, "number of ocr from start of the day");

 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "fw_outstanding", VAR_0,
     &VAR_5->fw_outstanding.val_rdonly, 0, "FW outstanding commands");

 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "io_cmds_highwater", VAR_0,
     &VAR_5->io_cmds_highwater, 0, "Max FW outstanding commands");

 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "mrsas_debug", VAR_1, &VAR_5->mrsas_debug, 0,
     "Driver debug level");

 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "mrsas_io_timeout", VAR_1, &VAR_5->mrsas_io_timeout,
     0, "Driver IO timeout value in mili-second.");

 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "mrsas_fw_fault_check_delay", VAR_1,
     &VAR_5->mrsas_fw_fault_check_delay,
     0, "FW fault check thread delay in seconds. <default is 1 sec>");

 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "reset_in_progress", VAR_0,
     &VAR_5->reset_in_progress, 0, "ocr in progress status");

 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "block_sync_cache", VAR_1,
     &VAR_5->block_sync_cache, 0,
     "Block SYNC CACHE at driver. <default: 0, send it to FW>");
 FUNC_3(VAR_6, FUNC_4(VAR_7),
     VAR_3, "stream detection", VAR_1,
  &VAR_5->drv_stream_detection, 0,
  "Disable/Enable Stream detection. <default: 1, Enable Stream Detection>");
 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "prp_count", VAR_0,
     &VAR_5->prp_count.val_rdonly, 0, "Number of IOs for which PRPs are built");
 FUNC_0(VAR_6, FUNC_4(VAR_7),
     VAR_3, "SGE holes", VAR_0,
     &VAR_5->sge_holes.val_rdonly, 0, "Number of IOs with holes in SGEs");
}
