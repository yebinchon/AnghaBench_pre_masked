
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tracker {int payload_dma_map; } ;
struct nvme_qpair {scalar_t__ dma_tag_payload; scalar_t__ dma_tag; int free_tr; struct nvme_tracker* act_tr; int queuemem_map; int * cmd; scalar_t__ res; TYPE_1__* ctrlr; int lock; scalar_t__ tag; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nvme_tracker* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nvme_tracker*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct nvme_tracker*,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_13(struct nvme_qpair *VAR_3)
{
 struct nvme_tracker *VAR_4;

 if (VAR_3->tag)
  FUNC_8(VAR_3->ctrlr->dev, VAR_3->res, VAR_3->tag);

 if (FUNC_11(&VAR_3->lock))
  FUNC_10(&VAR_3->lock);

 if (VAR_3->res)
  FUNC_7(VAR_3->ctrlr->dev, VAR_1,
      FUNC_12(VAR_3->res), VAR_3->res);

 if (VAR_3->cmd != ((void*)0)) {
  FUNC_5(VAR_3->dma_tag, VAR_3->queuemem_map);
  FUNC_6(VAR_3->dma_tag, VAR_3->cmd,
      VAR_3->queuemem_map);
 }

 if (VAR_3->act_tr)
  FUNC_9(VAR_3->act_tr, VAR_0);

 while (!FUNC_0(&VAR_3->free_tr)) {
  VAR_4 = FUNC_1(&VAR_3->free_tr);
  FUNC_2(&VAR_3->free_tr, VAR_4, VAR_2);
  FUNC_4(VAR_3->dma_tag_payload,
      VAR_4->payload_dma_map);
  FUNC_9(VAR_4, VAR_0);
 }

 if (VAR_3->dma_tag)
  FUNC_3(VAR_3->dma_tag);

 if (VAR_3->dma_tag_payload)
  FUNC_3(VAR_3->dma_tag_payload);
}
