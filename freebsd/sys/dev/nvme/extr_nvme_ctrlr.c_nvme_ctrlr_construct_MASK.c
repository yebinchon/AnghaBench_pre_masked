
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_controller {int min_page_size; int ready_timeout_in_ms; int timeout_period; int enable_aborts; int cdev; int is_failed; int fail_req; int fail_req_task; int reset_task; scalar_t__ notification_sent; scalar_t__ is_initialized; scalar_t__ is_resetting; int taskqueue; int max_xfer_size; scalar_t__ dstrd; scalar_t__ domain; int lock; int dev; } ;
struct make_dev_args {int mda_mode; void* mda_si_drv1; int mda_unit; int mda_gid; int mda_uid; int * mda_devsw; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct nvme_controller*) ;
 int FUNC_5 (char*,int*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct make_dev_args*) ;
 int FUNC_9 (struct make_dev_args*,int *,char*,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (struct nvme_controller*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct nvme_controller*,int) ;
 int VAR_15 ;
 int FUNC_15 (char*,int ,int ,int *) ;
 int FUNC_16 (int *,int,int ,char*) ;
 int VAR_16 ;

int
FUNC_17(struct nvme_controller *VAR_17, device_t VAR_18)
{
 struct make_dev_args VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;
 uint8_t VAR_23;
 int VAR_24, VAR_25;

 VAR_17->dev = VAR_18;

 FUNC_12(&VAR_17->lock, "nvme ctrlr lock", ((void*)0), VAR_3);
 if (FUNC_6(VAR_18, &VAR_17->domain) != 0)
  VAR_17->domain = 0;

 VAR_21 = FUNC_14(VAR_17, VAR_21);
 VAR_17->dstrd = FUNC_0(VAR_21) + 2;

 VAR_23 = FUNC_1(VAR_21);
 VAR_17->min_page_size = 1 << (12 + VAR_23);


 VAR_20 = FUNC_14(VAR_17, VAR_20);
 VAR_22 = FUNC_2(VAR_20) + 1;
 VAR_17->ready_timeout_in_ms = VAR_22 * 500;

 VAR_25 = VAR_6;
 FUNC_5("hw.nvme.timeout_period", &VAR_25);
 VAR_25 = FUNC_11(VAR_25, VAR_7);
 VAR_25 = FUNC_10(VAR_25, VAR_9);
 VAR_17->timeout_period = VAR_25;

 VAR_15 = VAR_5;
 FUNC_5("hw.nvme.retry_count", &VAR_15);

 VAR_17->enable_aborts = 0;
 FUNC_5("hw.nvme.enable_aborts", &VAR_17->enable_aborts);

 VAR_17->max_xfer_size = VAR_8;
 if (FUNC_13(VAR_17) != 0)
  return (VAR_0);

 VAR_17->taskqueue = FUNC_15("nvme_taskq", VAR_4,
     VAR_16, &VAR_17->taskqueue);
 FUNC_16(&VAR_17->taskqueue, 1, VAR_10, "nvme taskq");

 VAR_17->is_resetting = 0;
 VAR_17->is_initialized = 0;
 VAR_17->notification_sent = 0;
 FUNC_4(&VAR_17->reset_task, 0, VAR_14, VAR_17);
 FUNC_4(&VAR_17->fail_req_task, 0, VAR_13, VAR_17);
 FUNC_3(&VAR_17->fail_req);
 VAR_17->is_failed = VAR_1;

 FUNC_8(&VAR_19);
 VAR_19.mda_devsw = &VAR_12;
 VAR_19.mda_uid = VAR_11;
 VAR_19.mda_gid = VAR_2;
 VAR_19.mda_mode = 0600;
 VAR_19.mda_unit = FUNC_7(VAR_18);
 VAR_19.mda_si_drv1 = (void *)VAR_17;
 VAR_24 = FUNC_9(&VAR_19, &VAR_17->cdev, "nvme%d",
     FUNC_7(VAR_18));
 if (VAR_24 != 0)
  return (VAR_0);

 return (0);
}
