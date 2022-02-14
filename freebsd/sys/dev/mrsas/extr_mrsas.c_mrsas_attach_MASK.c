
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct mrsas_softc* ich_arg; int ich_func; } ;
struct mrsas_softc {int device_id; int mrsas_gen3_ctrl; int is_ventura; int is_aero; int msix_enable; int * reg_res; void* reg_res_id; int mrsas_dev; int stream_lock; int raidmap_lock; int mfi_cmd_pool_lock; int mpt_cmd_pool_lock; int ioctl_lock; int io_lock; int pci_lock; int aen_lock; int sim_lock; int ocr_chan; scalar_t__ ocr_thread_active; TYPE_1__ mrsas_ich; int ocr_thread; scalar_t__ UnevenSpanSupport; int adprecovery; scalar_t__ io_cmds_highwater; int sge_holes; int prp_count; int target_reset_outstanding; int fw_outstanding; int mrsas_mfi_cmd_list_head; int mrsas_mpt_cmd_list_head; int bus_handle; int bus_tag; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,void**,int ) ;
 int FUNC_3 (int ,int ,void*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 struct mrsas_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct mrsas_softc*,int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct mrsas_softc*) ;
 int FUNC_11 (struct mrsas_softc*) ;
 int FUNC_12 (struct mrsas_softc*) ;
 int FUNC_13 (struct mrsas_softc*) ;
 int VAR_10 ;
 int FUNC_14 (struct mrsas_softc*) ;
 int FUNC_15 (int ,struct mrsas_softc*,int *,int ,int ,char*,int ) ;
 int VAR_11 ;
 int FUNC_16 (struct mrsas_softc*) ;
 int FUNC_17 (struct mrsas_softc*) ;
 int FUNC_18 (struct mrsas_softc*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int *,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_12)
{
 struct mrsas_softc *VAR_13 = FUNC_5(VAR_12);
 uint32_t VAR_14, VAR_15;

 FUNC_8(VAR_13, 0, sizeof(struct mrsas_softc));


 VAR_13->mrsas_dev = VAR_12;
 VAR_13->device_id = FUNC_21(VAR_12);

 switch (VAR_13->device_id) {
 case 131:
 case 135:
 case 133:
 case 132:
 case 137:
 case 136:
  VAR_13->mrsas_gen3_ctrl = 1;
  break;
 case 129:
 case 139:
 case 134:
 case 130:
 case 128:
 case 138:
  VAR_13->is_ventura = 1;
  break;
 case 146:
 case 142:
  FUNC_7(VAR_12, "Adapter is in configurable secure mode\n");
 case 145:
 case 141:
  VAR_13->is_aero = 1;
  break;
 case 147:
 case 144:
 case 143:
 case 140:
  FUNC_7(VAR_12, "Adapter is in non-secure mode\n");
  return VAR_8;

 }

 FUNC_13(VAR_13);




 VAR_14 = FUNC_22(VAR_12, VAR_6, 2);
 if ((VAR_14 & VAR_5) == 0) {
  return (VAR_0);
 }

 VAR_14 |= VAR_4;
 FUNC_24(VAR_12, VAR_6, VAR_14, 2);


 if (VAR_13->is_ventura || VAR_13->is_aero)
  VAR_13->reg_res_id = FUNC_0(0);
 else
  VAR_13->reg_res_id = FUNC_0(1);

 if ((VAR_13->reg_res = FUNC_2(VAR_12, VAR_9,
     &(VAR_13->reg_res_id), VAR_7))
     == ((void*)0)) {
  FUNC_7(VAR_12, "Cannot allocate PCI registers\n");
  goto attach_fail;
 }
 VAR_13->bus_tag = FUNC_26(VAR_13->reg_res);
 VAR_13->bus_handle = FUNC_25(VAR_13->reg_res);


 FUNC_20(&VAR_13->sim_lock, "mrsas_sim_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->pci_lock, "mrsas_pci_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->io_lock, "mrsas_io_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->aen_lock, "mrsas_aen_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->ioctl_lock, "mrsas_ioctl_lock", ((void*)0), VAR_3);
 FUNC_20(&VAR_13->mpt_cmd_pool_lock, "mrsas_mpt_cmd_pool_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->mfi_cmd_pool_lock, "mrsas_mfi_cmd_pool_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->raidmap_lock, "mrsas_raidmap_lock", ((void*)0), VAR_2);
 FUNC_20(&VAR_13->stream_lock, "mrsas_stream_lock", ((void*)0), VAR_2);


 FUNC_1(&VAR_13->mrsas_mpt_cmd_list_head);
 FUNC_1(&VAR_13->mrsas_mfi_cmd_list_head);

 FUNC_9(&VAR_13->fw_outstanding, 0);
 FUNC_9(&VAR_13->target_reset_outstanding, 0);
 FUNC_9(&VAR_13->prp_count, 0);
 FUNC_9(&VAR_13->sge_holes, 0);

 VAR_13->io_cmds_highwater = 0;

 VAR_13->adprecovery = VAR_1;
 VAR_13->UnevenSpanSupport = 0;

 VAR_13->msix_enable = 0;


 if (FUNC_14(VAR_13) != VAR_8) {
  goto attach_fail_fw;
 }

 if ((FUNC_10(VAR_13) != VAR_8)) {
  goto attach_fail_cam;
 }

 if (FUNC_16(VAR_13) != VAR_8) {
  goto attach_fail_irq;
 }
 VAR_15 = FUNC_15(VAR_11, VAR_13,
     &VAR_13->ocr_thread, 0, 0, "mrsas_ocr%d",
     FUNC_6(VAR_13->mrsas_dev));
 if (VAR_15) {
  FUNC_7(VAR_13->mrsas_dev, "Error %d starting OCR thread\n", VAR_15);
  goto attach_fail_ocr_thread;
 }




 VAR_13->mrsas_ich.ich_func = VAR_10;
 VAR_13->mrsas_ich.ich_arg = VAR_13;
 if (FUNC_4(&VAR_13->mrsas_ich) != 0) {
  FUNC_7(VAR_13->mrsas_dev, "Config hook is already established\n");
 }
 FUNC_17(VAR_13);
 return VAR_8;

attach_fail_ocr_thread:
 if (VAR_13->ocr_thread_active)
  FUNC_27(&VAR_13->ocr_chan);
attach_fail_irq:
 FUNC_18(VAR_13);
attach_fail_cam:
 FUNC_11(VAR_13);
attach_fail_fw:

 if (VAR_13->msix_enable == 1)
  FUNC_23(VAR_13->mrsas_dev);
 FUNC_12(VAR_13);
 FUNC_19(&VAR_13->sim_lock);
 FUNC_19(&VAR_13->aen_lock);
 FUNC_19(&VAR_13->pci_lock);
 FUNC_19(&VAR_13->io_lock);
 FUNC_19(&VAR_13->ioctl_lock);
 FUNC_19(&VAR_13->mpt_cmd_pool_lock);
 FUNC_19(&VAR_13->mfi_cmd_pool_lock);
 FUNC_19(&VAR_13->raidmap_lock);
 FUNC_19(&VAR_13->stream_lock);
attach_fail:
 if (VAR_13->reg_res) {
  FUNC_3(VAR_13->mrsas_dev, VAR_9,
      VAR_13->reg_res_id, VAR_13->reg_res);
 }
 return (VAR_0);
}
