
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr2 ;
typedef int tmpstr ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mps_softc {int use_phynum; int spinup_wait_time; int chain_alloc_fail; int enable_ssu; int max_io_pages; int max_chains; int chain_free_lowwater; int chain_free; int io_cmds_highwater; int io_cmds_active; int fw_version; int max_evtframes; int max_replyframes; int max_prireqframes; int max_reqframes; int msi_msgs; int max_msix; int disable_msi; int disable_msix; struct sysctl_oid* sysctl_tree; struct sysctl_ctx_list sysctl_ctx; int mps_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct mps_softc*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sysctl_ctx_list*) ;

__attribute__((used)) static void
FUNC_13(struct mps_softc *VAR_14)
{
 struct sysctl_ctx_list *VAR_15 = ((void*)0);
 struct sysctl_oid *VAR_16 = ((void*)0);
 char VAR_17[80], VAR_18[80];





 FUNC_10(VAR_17, sizeof(VAR_17), "MPS controller %d",
     FUNC_9(VAR_14->mps_dev));
 FUNC_10(VAR_18, sizeof(VAR_18), "%d", FUNC_9(VAR_14->mps_dev));

 VAR_15 = FUNC_7(VAR_14->mps_dev);
 if (VAR_15 != ((void*)0))
  VAR_16 = FUNC_8(VAR_14->mps_dev);

 if (VAR_16 == ((void*)0)) {
  FUNC_12(&VAR_14->sysctl_ctx);
  VAR_14->sysctl_tree = FUNC_1(&VAR_14->sysctl_ctx,
      FUNC_6(VAR_9), VAR_8, VAR_18,
      VAR_1, 0, VAR_17);
  if (VAR_14->sysctl_tree == ((void*)0))
   return;
  VAR_15 = &VAR_14->sysctl_ctx;
  VAR_16 = VAR_14->sysctl_tree;
 }

 FUNC_2(VAR_15, FUNC_5(VAR_16),
     VAR_8, "debug_level", VAR_5 | VAR_2 |VAR_0,
     VAR_14, 0, VAR_10, "A", "mps debug level");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "disable_msix", VAR_1, &VAR_14->disable_msix, 0,
     "Disable the use of MSI-X interrupts");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "disable_msi", VAR_1, &VAR_14->disable_msi, 0,
     "Disable the use of MSI interrupts");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_msix", VAR_1, &VAR_14->max_msix, 0,
     "User-defined maximum number of MSIX queues");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "msix_msgs", VAR_1, &VAR_14->msi_msgs, 0,
     "Negotiated number of MSIX queues");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_reqframes", VAR_1, &VAR_14->max_reqframes, 0,
     "Total number of allocated request frames");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_prireqframes", VAR_1, &VAR_14->max_prireqframes, 0,
     "Total number of allocated high priority request frames");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_replyframes", VAR_1, &VAR_14->max_replyframes, 0,
     "Total number of allocated reply frames");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_evtframes", VAR_1, &VAR_14->max_evtframes, 0,
     "Total number of event frames allocated");

 FUNC_3(VAR_15, FUNC_5(VAR_16),
     VAR_8, "firmware_version", VAR_2, VAR_14->fw_version,
     FUNC_11(VAR_14->fw_version), "firmware version");

 FUNC_3(VAR_15, FUNC_5(VAR_16),
     VAR_8, "driver_version", VAR_2, VAR_7,
     FUNC_11(VAR_7), "driver version");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "io_cmds_active", VAR_1,
     &VAR_14->io_cmds_active, 0, "number of currently active commands");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "io_cmds_highwater", VAR_1,
     &VAR_14->io_cmds_highwater, 0, "maximum active commands seen");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "chain_free", VAR_1,
     &VAR_14->chain_free, 0, "number of free chain elements");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "chain_free_lowwater", VAR_1,
     &VAR_14->chain_free_lowwater, 0,"lowest number of free chain elements");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_chains", VAR_1,
     &VAR_14->max_chains, 0,"maximum chain frames that will be allocated");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "max_io_pages", VAR_1,
     &VAR_14->max_io_pages, 0,"maximum pages to allow per I/O (if <1 use "
     "IOCFacts)");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "enable_ssu", VAR_2, &VAR_14->enable_ssu, 0,
     "enable SSU to SATA SSD/HDD at shutdown");

 FUNC_4(VAR_15, FUNC_5(VAR_16),
     VAR_8, "chain_alloc_fail", VAR_1,
     &VAR_14->chain_alloc_fail, "chain allocation failures");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "spinup_wait_time", VAR_1,
     &VAR_14->spinup_wait_time, VAR_6, "seconds to wait for "
     "spinup after SATA ID error");

 FUNC_2(VAR_15, FUNC_5(VAR_16),
     VAR_8, "mapping_table_dump", VAR_5 | VAR_1, VAR_14, 0,
     VAR_12, "A", "Mapping Table Dump");

 FUNC_2(VAR_15, FUNC_5(VAR_16),
     VAR_8, "encl_table_dump", VAR_5 | VAR_1, VAR_14, 0,
     VAR_13, "A", "Enclosure Table Dump");

 FUNC_2(VAR_15, FUNC_5(VAR_16),
     VAR_8, "dump_reqs", VAR_4 | VAR_1 | VAR_3, VAR_14, 0,
     VAR_11, "I", "Dump Active Requests");

 FUNC_0(VAR_15, FUNC_5(VAR_16),
     VAR_8, "use_phy_num", VAR_1, &VAR_14->use_phynum, 0,
     "Use the phy number for enumeration");
}
