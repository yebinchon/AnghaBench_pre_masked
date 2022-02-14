
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef void* u_int32_t ;
struct hpt_iop_request_set_config {int max_host_request_size; int vbus_id; void* iop_id; } ;
struct hpt_iop_request_get_config {int max_sg_count; int request_size; int max_devices; scalar_t__ max_requests; int interface_version; int firmware_version; } ;
struct hpt_iop_hba {int max_sg_count; int initialized; TYPE_1__* ops; scalar_t__ parent_dmat; scalar_t__ io_dmat; scalar_t__ srb_dmat; int srb_dmamap; scalar_t__ uncached_ptr; scalar_t__ sim; int path; int * irq_res; int irq_handle; int ioctl_dev; int pcidev; scalar_t__ max_requests; int lock; int max_request_size; int max_devices; int interface_version; int firmware_version; void* pciunit; } ;
struct TYPE_4__ {int func_code; } ;
struct ccb_setasync {int event_enable; scalar_t__ callback_arg; int callback; TYPE_2__ ccb_h; } ;
struct cam_devq {int dummy; } ;
typedef int set_config ;
typedef int device_t ;
struct TYPE_3__ {scalar_t__ family; int (* release_pci_res ) (struct hpt_iop_hba*) ;int (* internal_memfree ) (struct hpt_iop_hba*) ;int (* enable_intr ) (struct hpt_iop_hba*) ;scalar_t__ (* set_config ) (struct hpt_iop_hba*,struct hpt_iop_request_set_config*) ;scalar_t__ (* reset_comm ) (struct hpt_iop_hba*) ;scalar_t__ (* internal_memalloc ) (struct hpt_iop_hba*) ;scalar_t__ (* get_config ) (struct hpt_iop_hba*,struct hpt_iop_request_get_config*) ;scalar_t__ (* iop_wait_ready ) (struct hpt_iop_hba*,int) ;scalar_t__ (* alloc_pci_res ) (struct hpt_iop_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int * FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int,scalar_t__,scalar_t__,scalar_t__,int *,int *,int,int,int,int ,int *,int *,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__,int,int ,struct hpt_iop_hba*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,void**,int,int *) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int,int *,int ,struct hpt_iop_hba*,int *) ;
 int FUNC_11 (int ,int *,int ) ;
 int * VAR_33 ;
 int FUNC_12 (struct hpt_iop_request_set_config*,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ,struct hpt_iop_hba*,void*,int *,scalar_t__,int,struct cam_devq*) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 struct cam_devq* FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct cam_devq*) ;
 scalar_t__ FUNC_18 (int ) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,...) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_21 (struct hpt_iop_hba*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_22 (struct hpt_iop_hba*,int ,int) ;
 int FUNC_23 (struct hpt_iop_hba*) ;
 int FUNC_24 (int *,void*,int ,int ,int,char*,int ,void*) ;
 int FUNC_25 (int *,char*,int *,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (struct hpt_iop_hba*) ;
 int FUNC_31 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_32 (struct hpt_iop_hba*,int) ;
 scalar_t__ FUNC_33 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_34 (struct hpt_iop_hba*,struct hpt_iop_request_get_config*) ;
 scalar_t__ FUNC_35 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_36 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_37 (struct hpt_iop_hba*,struct hpt_iop_request_set_config*) ;
 int FUNC_38 (struct hpt_iop_hba*) ;
 int FUNC_39 (struct hpt_iop_hba*) ;
 int FUNC_40 (union ccb*) ;
 int FUNC_41 (int ) ;
 scalar_t__ FUNC_42 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_43 (int *,int *,int ,int ,int ) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_46(device_t VAR_42)
{
 struct hpt_iop_hba *VAR_43 = (struct hpt_iop_hba *)FUNC_18(VAR_42);
 struct hpt_iop_request_get_config VAR_44;
 struct hpt_iop_request_set_config VAR_45;
 int VAR_46 = 0;
 struct cam_devq *VAR_47;
 struct ccb_setasync VAR_48;
 u_int32_t VAR_49 = FUNC_19(VAR_42);

 FUNC_20(VAR_42, "%d RocketRAID 3xxx/4xxx controller driver %s\n",
   VAR_49, VAR_35);

 FUNC_0(("hptiop: attach(%d, %d/%d/%d) ops=%p\n", VAR_49,
  FUNC_27(VAR_42), FUNC_29(VAR_42),
  FUNC_28(VAR_42), VAR_43->ops));

 FUNC_26(VAR_42);
 VAR_43->pcidev = VAR_42;
 VAR_43->pciunit = VAR_49;

 if (VAR_43->ops->alloc_pci_res(VAR_43))
  return VAR_13;

 if (VAR_43->ops->iop_wait_ready(VAR_43, 2000)) {
  FUNC_20(VAR_42, "adapter is not ready\n");
  goto release_pci_res;
 }

 FUNC_25(&VAR_43->lock, "hptioplock", ((void*)0), VAR_21);

 if (FUNC_2(FUNC_8(VAR_42),
   1,
   0,
   VAR_5,
   VAR_5,
   ((void*)0), ((void*)0),
   VAR_7,
   VAR_8,
   VAR_7,
   0,
   ((void*)0),
   ((void*)0),
   &VAR_43->parent_dmat ))
 {
  FUNC_20(VAR_42, "alloc parent_dmat failed\n");
  goto release_pci_res;
 }

 if (VAR_43->ops->family == VAR_23) {
  if (VAR_43->ops->internal_memalloc(VAR_43)) {
   FUNC_20(VAR_42, "alloc srb_dmat failed\n");
   goto destroy_parent_tag;
  }
 }

 if (VAR_43->ops->get_config(VAR_43, &VAR_44)) {
  FUNC_20(VAR_42, "get iop config failed.\n");
  goto get_config_failed;
 }

 VAR_43->firmware_version = VAR_44.firmware_version;
 VAR_43->interface_version = VAR_44.interface_version;
 VAR_43->max_requests = VAR_44.max_requests;
 VAR_43->max_devices = VAR_44.max_devices;
 VAR_43->max_request_size = VAR_44.request_size;
 VAR_43->max_sg_count = VAR_44.max_sg_count;

 if (VAR_43->ops->family == VAR_22) {
  if (VAR_43->ops->internal_memalloc(VAR_43)) {
   FUNC_20(VAR_42, "alloc srb_dmat failed\n");
   goto destroy_parent_tag;
  }
  if (VAR_43->ops->reset_comm(VAR_43)) {
   FUNC_20(VAR_42, "reset comm failed\n");
   goto get_config_failed;
  }
 }

 if (FUNC_2(VAR_43->parent_dmat,
   4,
   VAR_6+1,
   VAR_5,
   VAR_5,
   ((void*)0), ((void*)0),
   VAR_24 * (VAR_43->max_sg_count-1),
   VAR_43->max_sg_count,
   0x20000,
   VAR_2,
   VAR_33,
   &VAR_43->lock,
   &VAR_43->io_dmat ))
 {
  FUNC_20(VAR_42, "alloc io_dmat failed\n");
  goto get_config_failed;
 }

 if (FUNC_2(VAR_43->parent_dmat,
   1,
   0,
   VAR_6,
   VAR_5,
   ((void*)0), ((void*)0),
   VAR_17 * VAR_15 + 0x20,
   1,
   VAR_7,
   0,
   ((void*)0),
   ((void*)0),
   &VAR_43->srb_dmat ))
 {
  FUNC_20(VAR_42, "alloc srb_dmat failed\n");
  goto destroy_io_dmat;
 }

 if (FUNC_6(VAR_43->srb_dmat, (void **)&VAR_43->uncached_ptr,
   VAR_4 | VAR_3,
   &VAR_43->srb_dmamap) != 0)
 {
  FUNC_20(VAR_42, "srb bus_dmamem_alloc failed!\n");
  goto destroy_srb_dmat;
 }

 if (FUNC_4(VAR_43->srb_dmat,
   VAR_43->srb_dmamap, VAR_43->uncached_ptr,
   (VAR_17 * VAR_15) + 0x20,
   VAR_39, VAR_43, 0))
 {
  FUNC_20(VAR_42, "bus_dmamap_load failed!\n");
  goto srb_dmamem_free;
 }

 if ((VAR_47 = FUNC_16(VAR_43->max_requests - 1 )) == ((void*)0)) {
  FUNC_20(VAR_42, "cam_simq_alloc failed\n");
  goto srb_dmamap_unload;
 }

 VAR_43->sim = FUNC_13(VAR_36, VAR_41, VAR_34,
   VAR_43, VAR_49, &VAR_43->lock, VAR_43->max_requests - 1, 1, VAR_47);
 if (!VAR_43->sim) {
  FUNC_20(VAR_42, "cam_sim_alloc failed\n");
  FUNC_17(VAR_47);
  goto srb_dmamap_unload;
 }
 FUNC_21(VAR_43);
 if (FUNC_42(VAR_43->sim, VAR_42, 0) != VAR_11)
 {
  FUNC_20(VAR_42, "xpt_bus_register failed\n");
  goto free_cam_sim;
 }

 if (FUNC_43(&VAR_43->path, ((void*)0),
   FUNC_15(VAR_43->sim), VAR_12,
   VAR_9) != VAR_10) {
  FUNC_20(VAR_42, "xpt_create_path failed\n");
  goto deregister_xpt_bus;
 }
 FUNC_23(VAR_43);

 FUNC_12(&VAR_45, sizeof(VAR_45));
 VAR_45.iop_id = VAR_49;
 VAR_45.vbus_id = FUNC_15(VAR_43->sim);
 VAR_45.max_host_request_size = VAR_16;

 if (VAR_43->ops->set_config(VAR_43, &VAR_45)) {
  FUNC_20(VAR_42, "set iop config failed.\n");
  goto free_hba_path;
 }

 FUNC_45(&VAR_48.ccb_h, VAR_43->path, 5);
 VAR_48.ccb_h.func_code = VAR_32;
 VAR_48.event_enable = (VAR_0 | VAR_1);
 VAR_48.callback = VAR_37;
 VAR_48.callback_arg = VAR_43->sim;
 FUNC_40((union ccb *)&VAR_48);

 VAR_46 = 0;
 if ((VAR_43->irq_res = FUNC_1(VAR_43->pcidev, VAR_27,
   &VAR_46, VAR_26 | VAR_25)) == ((void*)0)) {
  FUNC_20(VAR_42, "allocate irq failed!\n");
  goto free_hba_path;
 }

 if (FUNC_10(VAR_43->pcidev, VAR_43->irq_res, VAR_19 | VAR_18,
    ((void*)0), VAR_40, VAR_43, &VAR_43->irq_handle))
 {
  FUNC_20(VAR_42, "allocate intr function failed!\n");
  goto free_irq_resource;
 }

 if (FUNC_22(VAR_43,
   VAR_20, 5000)) {
  FUNC_20(VAR_42, "fail to start background task\n");
  goto teartown_irq_resource;
 }

 VAR_43->ops->enable_intr(VAR_43);
 VAR_43->initialized = 1;

 VAR_43->ioctl_dev = FUNC_24(&VAR_38, VAR_49,
    VAR_31, VAR_14 ,
    VAR_28 | VAR_29, "%s%d", VAR_34, VAR_49);


 return 0;


teartown_irq_resource:
 FUNC_11(VAR_42, VAR_43->irq_res, VAR_43->irq_handle);

free_irq_resource:
 FUNC_9(VAR_42, VAR_27, 0, VAR_43->irq_res);

 FUNC_21(VAR_43);
free_hba_path:
 FUNC_44(VAR_43->path);

deregister_xpt_bus:
 FUNC_41(FUNC_15(VAR_43->sim));

free_cam_sim:
 FUNC_14(VAR_43->sim, VAR_30);
 FUNC_23(VAR_43);

srb_dmamap_unload:
 if (VAR_43->uncached_ptr)
  FUNC_5(VAR_43->srb_dmat, VAR_43->srb_dmamap);

srb_dmamem_free:
 if (VAR_43->uncached_ptr)
  FUNC_7(VAR_43->srb_dmat,
   VAR_43->uncached_ptr, VAR_43->srb_dmamap);

destroy_srb_dmat:
 if (VAR_43->srb_dmat)
  FUNC_3(VAR_43->srb_dmat);

destroy_io_dmat:
 if (VAR_43->io_dmat)
  FUNC_3(VAR_43->io_dmat);

get_config_failed:
 VAR_43->ops->internal_memfree(VAR_43);

destroy_parent_tag:
 if (VAR_43->parent_dmat)
  FUNC_3(VAR_43->parent_dmat);

release_pci_res:
 if (VAR_43->ops->release_pci_res)
  VAR_43->ops->release_pci_res(VAR_43);

 return VAR_13;
}
