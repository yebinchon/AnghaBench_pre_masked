
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct hpt_iop_srb {int timeout; scalar_t__ dma_map; } ;
struct hpt_iop_hba {int lock; scalar_t__ bar2_res; int bar2_rid; int pcidev; scalar_t__ bar0_res; int bar0_rid; scalar_t__ irq_res; scalar_t__ parent_dmat; scalar_t__ io_dmat; scalar_t__ srb_dmat; scalar_t__ srb_dmamap; struct hpt_iop_srb** srb; scalar_t__ ctlcfg_dmat; scalar_t__ ctlcfg_dmamap; int ctlcfg_ptr; scalar_t__ sim; scalar_t__ irq_handle; scalar_t__ path; scalar_t__ ioctl_dev; } ;
struct TYPE_2__ {int func_code; } ;
struct ccb_setasync {scalar_t__ callback_arg; int callback; scalar_t__ event_enable; TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_10 (struct hpt_iop_hba*) ;
 int FUNC_11 (struct hpt_iop_hba*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (union ccb*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_17(struct hpt_iop_hba *VAR_6)
{
 int VAR_7;

 if (VAR_6->ioctl_dev)
  FUNC_9(VAR_6->ioctl_dev);

 if (VAR_6->path) {
  struct ccb_setasync VAR_8;

  FUNC_16(&VAR_8.ccb_h, VAR_6->path, 5);
  VAR_8.ccb_h.func_code = VAR_4;
  VAR_8.event_enable = 0;
  VAR_8.callback = VAR_5;
  VAR_8.callback_arg = VAR_6->sim;
  FUNC_13((union ccb *)&VAR_8);
  FUNC_15(VAR_6->path);
 }

 if (VAR_6->irq_handle)
  FUNC_5(VAR_6->pcidev, VAR_6->irq_res, VAR_6->irq_handle);

 if (VAR_6->sim) {
  FUNC_10(VAR_6);
  FUNC_14(FUNC_8(VAR_6->sim));
  FUNC_7(VAR_6->sim, VAR_3);
  FUNC_11(VAR_6);
 }

 if (VAR_6->ctlcfg_dmat) {
  FUNC_2(VAR_6->ctlcfg_dmat, VAR_6->ctlcfg_dmamap);
  FUNC_3(VAR_6->ctlcfg_dmat,
     VAR_6->ctlcfg_ptr, VAR_6->ctlcfg_dmamap);
  FUNC_0(VAR_6->ctlcfg_dmat);
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct hpt_iop_srb *VAR_9 = VAR_6->srb[VAR_7];
  if (VAR_9->dma_map)
   FUNC_1(VAR_6->io_dmat, VAR_9->dma_map);
  FUNC_6(&VAR_9->timeout);
 }

 if (VAR_6->srb_dmat) {
  FUNC_2(VAR_6->srb_dmat, VAR_6->srb_dmamap);
  FUNC_1(VAR_6->srb_dmat, VAR_6->srb_dmamap);
  FUNC_0(VAR_6->srb_dmat);
 }

 if (VAR_6->io_dmat)
  FUNC_0(VAR_6->io_dmat);

 if (VAR_6->parent_dmat)
  FUNC_0(VAR_6->parent_dmat);

 if (VAR_6->irq_res)
  FUNC_4(VAR_6->pcidev, VAR_1,
     0, VAR_6->irq_res);

 if (VAR_6->bar0_res)
  FUNC_4(VAR_6->pcidev, VAR_2,
     VAR_6->bar0_rid, VAR_6->bar0_res);
 if (VAR_6->bar2_res)
  FUNC_4(VAR_6->pcidev, VAR_2,
     VAR_6->bar2_rid, VAR_6->bar2_res);
 FUNC_12(&VAR_6->lock);
}
