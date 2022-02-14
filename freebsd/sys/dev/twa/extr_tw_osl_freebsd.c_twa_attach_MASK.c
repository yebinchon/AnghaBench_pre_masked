
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct twa_softc* osl_ctlr_ctxt; } ;
struct twa_softc {TYPE_1__ ctlr_handle; int * watchdog_callout; scalar_t__ watchdog_index; TYPE_2__* ctrl_dev; int bus_dev; int dma_mem_phys; int dma_mem; int non_dma_mem; int device_id; int flags; scalar_t__ irq_res_id; int * irq_res; int * reg_res; int bus_handle; int bus_tag; scalar_t__ reg_res_id; int * sysctl_tree; int sysctl_ctxt; int * sim_lock; int sim_lock_handle; int * q_lock; int q_lock_handle; int * io_lock; int io_lock_handle; } ;
typedef int device_t ;
struct TYPE_5__ {struct twa_softc* si_drv1; } ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (int *,int ,int ,int ,int ,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_4 (int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 struct twa_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_22 ;
 TYPE_2__* FUNC_10 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_11 (int *,char*,int *,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_19 (struct twa_softc*) ;
 scalar_t__ FUNC_20 (struct twa_softc*) ;
 int FUNC_21 (int,struct twa_softc*,char*) ;
 int FUNC_22 (struct twa_softc*) ;
 int FUNC_23 (struct twa_softc*,char*,int ,int ,int,char*,scalar_t__) ;
 int VAR_23 ;
 scalar_t__ FUNC_24 (struct twa_softc*) ;
 int VAR_24 ;

__attribute__((used)) static TW_INT32
FUNC_25(device_t VAR_25)
{
 struct twa_softc *VAR_26 = FUNC_8(VAR_25);
 TW_INT32 VAR_27;
 TW_INT32 VAR_28;
 TW_INT32 VAR_29;
 TW_INT32 VAR_30;

 FUNC_21(3, VAR_26, "entered");

 VAR_26->ctlr_handle.osl_ctlr_ctxt = VAR_26;


 VAR_26->bus_dev = VAR_25;
 VAR_26->device_id = FUNC_13(VAR_25);


 VAR_26->io_lock = &(VAR_26->io_lock_handle);
 FUNC_11(VAR_26->io_lock, "tw_osl_io_lock", ((void*)0), VAR_5);
 VAR_26->q_lock = &(VAR_26->q_lock_handle);
 FUNC_11(VAR_26->q_lock, "tw_osl_q_lock", ((void*)0), VAR_5);
 VAR_26->sim_lock = &(VAR_26->sim_lock_handle);
 FUNC_11(VAR_26->sim_lock, "tw_osl_sim_lock", ((void*)0), VAR_3 | VAR_4);

 FUNC_16(&VAR_26->sysctl_ctxt);
 VAR_26->sysctl_tree = FUNC_0(&VAR_26->sysctl_ctxt,
  FUNC_3(VAR_21), VAR_6,
  FUNC_7(VAR_25), VAR_0, 0, "");
 if (VAR_26->sysctl_tree == ((void*)0)) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2000,
   "Cannot add sysctl tree node",
   VAR_1);
  return(VAR_1);
 }
 FUNC_1(&VAR_26->sysctl_ctxt, FUNC_2(VAR_26->sysctl_tree),
  VAR_6, "driver_version", VAR_0,
  VAR_19, 0, "TWA driver version");


 FUNC_12(VAR_25);


 if ((VAR_30 = FUNC_17(VAR_26->device_id, VAR_14,
  &VAR_27, &VAR_28, &VAR_29))) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x201F,
   "Can't get PCI BAR info",
   VAR_30);
  FUNC_22(VAR_26);
  return(VAR_30);
 }
 VAR_26->reg_res_id = VAR_7 + VAR_28;
 if ((VAR_26->reg_res = FUNC_4(VAR_25, VAR_11,
    &(VAR_26->reg_res_id), VAR_8))
    == ((void*)0)) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2002,
   "Can't allocate register window",
   VAR_1);
  FUNC_22(VAR_26);
  return(VAR_1);
 }
 VAR_26->bus_tag = FUNC_15(VAR_26->reg_res);
 VAR_26->bus_handle = FUNC_14(VAR_26->reg_res);


 VAR_26->irq_res_id = 0;
 if ((VAR_26->irq_res = FUNC_4(VAR_26->bus_dev, VAR_10,
    &(VAR_26->irq_res_id),
    VAR_9 | VAR_8)) == ((void*)0)) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2003,
   "Can't allocate interrupt",
   VAR_1);
  FUNC_22(VAR_26);
  return(VAR_1);
 }
 if ((VAR_30 = FUNC_24(VAR_26))) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2004,
   "Can't set up interrupt",
   VAR_30);
  FUNC_22(VAR_26);
  return(VAR_30);
 }

 if ((VAR_30 = FUNC_19(VAR_26))) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2005,
   "Memory allocation failure",
   VAR_30);
  FUNC_22(VAR_26);
  return(VAR_30);
 }


 if ((VAR_30 = FUNC_18(&VAR_26->ctlr_handle, VAR_26->flags, VAR_26->device_id,
   VAR_18, VAR_17,
   VAR_26->non_dma_mem, VAR_26->dma_mem,
   VAR_26->dma_mem_phys
   ))) {
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2006,
   "Failed to initialize Common Layer/controller",
   VAR_30);
  FUNC_22(VAR_26);
  return(VAR_30);
 }


 VAR_26->ctrl_dev = FUNC_10(&VAR_23, FUNC_9(VAR_26->bus_dev),
   VAR_20, VAR_2, VAR_12 | VAR_13,
   "twa%d", FUNC_9(VAR_26->bus_dev));
 VAR_26->ctrl_dev->si_drv1 = VAR_26;

 if ((VAR_30 = FUNC_20(VAR_26))) {
  FUNC_22(VAR_26);
  FUNC_23(VAR_26, "error = %d",
   VAR_16,
   VAR_15,
   0x2007,
   "Failed to initialize CAM",
   VAR_30);
  return(VAR_30);
 }

 VAR_26->watchdog_index = 0;
 FUNC_5(&(VAR_26->watchdog_callout[0]), 1);
 FUNC_5(&(VAR_26->watchdog_callout[1]), 1);
 FUNC_6(&(VAR_26->watchdog_callout[0]), 5*VAR_22, VAR_24, &VAR_26->ctlr_handle);

 return(0);
}
