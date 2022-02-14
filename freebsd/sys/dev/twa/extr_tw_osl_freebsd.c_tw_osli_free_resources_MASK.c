
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int sysctl_ctxt; struct cdev* ctrl_dev; int * reg_res; int reg_res_id; int bus_dev; int * irq_res; int irq_res_id; scalar_t__ parent_tag; scalar_t__ ioctl_tag; scalar_t__ dma_tag; scalar_t__ cmd_tag; int cmd_map; scalar_t__ dma_mem; scalar_t__ non_dma_mem; scalar_t__ req_ctx_buf; scalar_t__ ioctl_map; } ;
struct tw_osli_req_context {scalar_t__ dma_map; int ioctl_wake_timeout_lock; } ;
struct cdev {int dummy; } ;
typedef int TW_VOID ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (struct cdev*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct twa_softc*) ;
 int FUNC_10 (int,struct twa_softc*,char*,...) ;
 struct tw_osli_req_context* FUNC_11 (struct twa_softc*,int ) ;
 int FUNC_12 (struct twa_softc*) ;

__attribute__((used)) static TW_VOID
FUNC_13(struct twa_softc *VAR_4)
{
 struct tw_osli_req_context *VAR_5;
 TW_INT32 VAR_6 = 0;

 FUNC_10(3, VAR_4, "entered");


 FUNC_9(VAR_4);

 if (VAR_4->req_ctx_buf)
  while ((VAR_5 = FUNC_11(VAR_4, VAR_2)) !=
   ((void*)0)) {
   FUNC_7(VAR_5->ioctl_wake_timeout_lock);

   if ((VAR_6 = FUNC_1(VAR_4->dma_tag,
     VAR_5->dma_map)))
    FUNC_10(1, VAR_4,
     "dmamap_destroy(dma) returned %d",
     VAR_6);
  }

 if ((VAR_4->ioctl_tag) && (VAR_4->ioctl_map))
  if ((VAR_6 = FUNC_1(VAR_4->ioctl_tag, VAR_4->ioctl_map)))
   FUNC_10(1, VAR_4,
    "dmamap_destroy(ioctl) returned %d", VAR_6);


 if (VAR_4->req_ctx_buf)
  FUNC_6(VAR_4->req_ctx_buf, VAR_3);

 if (VAR_4->non_dma_mem)
  FUNC_6(VAR_4->non_dma_mem, VAR_3);

 if (VAR_4->dma_mem) {
  FUNC_2(VAR_4->cmd_tag, VAR_4->cmd_map);
  FUNC_3(VAR_4->cmd_tag, VAR_4->dma_mem,
   VAR_4->cmd_map);
 }
 if (VAR_4->cmd_tag)
  if ((VAR_6 = FUNC_0(VAR_4->cmd_tag)))
   FUNC_10(1, VAR_4,
    "dma_tag_destroy(cmd) returned %d", VAR_6);

 if (VAR_4->dma_tag)
  if ((VAR_6 = FUNC_0(VAR_4->dma_tag)))
   FUNC_10(1, VAR_4,
    "dma_tag_destroy(dma) returned %d", VAR_6);

 if (VAR_4->ioctl_tag)
  if ((VAR_6 = FUNC_0(VAR_4->ioctl_tag)))
   FUNC_10(1, VAR_4,
    "dma_tag_destroy(ioctl) returned %d", VAR_6);

 if (VAR_4->parent_tag)
  if ((VAR_6 = FUNC_0(VAR_4->parent_tag)))
   FUNC_10(1, VAR_4,
    "dma_tag_destroy(parent) returned %d", VAR_6);



 if ((VAR_6 = FUNC_12(VAR_4)))
   FUNC_10(1, VAR_4,
    "teardown_intr returned %d", VAR_6);

 if (VAR_4->irq_res != ((void*)0))
  if ((VAR_6 = FUNC_4(VAR_4->bus_dev,
    VAR_0, VAR_4->irq_res_id, VAR_4->irq_res)))
   FUNC_10(1, VAR_4,
    "release_resource(irq) returned %d", VAR_6);



 if (VAR_4->reg_res != ((void*)0))
  if ((VAR_6 = FUNC_4(VAR_4->bus_dev,
    VAR_1, VAR_4->reg_res_id, VAR_4->reg_res)))
   FUNC_10(1, VAR_4,
    "release_resource(io) returned %d", VAR_6);



 if (VAR_4->ctrl_dev != (struct cdev *)((void*)0))
  FUNC_5(VAR_4->ctrl_dev);

 if ((VAR_6 = FUNC_8(&VAR_4->sysctl_ctxt)))
  FUNC_10(1, VAR_4,
   "sysctl_ctx_free returned %d", VAR_6);

}
