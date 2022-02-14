
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvme_tracker {int payload_dma_map; TYPE_2__* qpair; struct nvme_request* req; } ;
struct TYPE_6__ {int payload; TYPE_5__* bio; } ;
struct nvme_request {int type; TYPE_1__ u; int payload_size; struct nvme_qpair* qpair; } ;
struct nvme_qpair {int lock; TYPE_3__* ctrlr; int outstanding_tr; int free_tr; int queued_req; int is_enabled; } ;
typedef int intmax_t ;
struct TYPE_9__ {int bio_bcount; } ;
struct TYPE_8__ {int max_xfer_size; scalar_t__ is_failed; } ;
struct TYPE_7__ {int dma_tag_payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct nvme_request*,int ) ;
 struct nvme_tracker* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nvme_tracker*,int ) ;
 int FUNC_4 (int *,struct nvme_tracker*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,struct nvme_tracker*,int ) ;
 int FUNC_6 (int ,int ,TYPE_5__*,int ,struct nvme_tracker*,int ) ;
 int FUNC_7 (int ,int ,int ,int ,struct nvme_tracker*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,struct nvme_request*) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_3__*,char*,int) ;
 int FUNC_13 (struct nvme_qpair*,struct nvme_tracker*,int ,int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,struct nvme_tracker*) ;
 int FUNC_15 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_16(struct nvme_qpair *VAR_8, struct nvme_request *VAR_9)
{
 struct nvme_tracker *VAR_10;
 int VAR_11 = 0;

 FUNC_8(&VAR_8->lock, VAR_2);

 VAR_10 = FUNC_2(&VAR_8->free_tr);
 VAR_9->qpair = VAR_8;

 if (VAR_10 == ((void*)0) || !VAR_8->is_enabled) {






  if (VAR_8->ctrlr->is_failed) {






   FUNC_11(VAR_8->ctrlr, VAR_9);
  } else {






   FUNC_1(&VAR_8->queued_req, VAR_9, VAR_6);
  }
  return;
 }

 FUNC_4(&VAR_8->free_tr, VAR_10, VAR_7);
 FUNC_3(&VAR_8->outstanding_tr, VAR_10, VAR_7);
 VAR_10->req = VAR_9;

 switch (VAR_9->type) {
 case 128:
  FUNC_0(VAR_9->payload_size <= VAR_8->ctrlr->max_xfer_size,
      ("payload_size (%d) exceeds max_xfer_size (%d)\n",
      VAR_9->payload_size, VAR_8->ctrlr->max_xfer_size));
  VAR_11 = FUNC_5(VAR_10->qpair->dma_tag_payload,
      VAR_10->payload_dma_map, VAR_9->u.payload, VAR_9->payload_size,
      VAR_5, VAR_10, 0);
  if (VAR_11 != 0)
   FUNC_12(VAR_8->ctrlr,
       "bus_dmamap_load returned 0x%x!\n", VAR_11);
  break;
 case 129:
  FUNC_14(VAR_10->qpair, VAR_10);
  break;
 case 131:
  FUNC_0(VAR_9->u.bio->bio_bcount <= VAR_8->ctrlr->max_xfer_size,
      ("bio->bio_bcount (%jd) exceeds max_xfer_size (%d)\n",
      (intmax_t)VAR_9->u.bio->bio_bcount,
      VAR_8->ctrlr->max_xfer_size));
  VAR_11 = FUNC_6(VAR_10->qpair->dma_tag_payload,
      VAR_10->payload_dma_map, VAR_9->u.bio, VAR_5, VAR_10, 0);
  if (VAR_11 != 0)
   FUNC_12(VAR_8->ctrlr,
       "bus_dmamap_load_bio returned 0x%x!\n", VAR_11);
  break;
 case 130:
  VAR_11 = FUNC_7(VAR_10->qpair->dma_tag_payload,
      VAR_10->payload_dma_map, VAR_9->u.payload,
      VAR_5, VAR_10, 0);
  if (VAR_11 != 0)
   FUNC_12(VAR_8->ctrlr,
       "bus_dmamap_load_ccb returned 0x%x!\n", VAR_11);
  break;
 default:
  FUNC_15("unknown nvme request type 0x%x\n", VAR_9->type);
  break;
 }

 if (VAR_11 != 0) {







  FUNC_10(&VAR_8->lock);
  FUNC_13(VAR_8, VAR_10, VAR_3,
      VAR_4, VAR_0, VAR_1);
  FUNC_9(&VAR_8->lock);
 }
}
