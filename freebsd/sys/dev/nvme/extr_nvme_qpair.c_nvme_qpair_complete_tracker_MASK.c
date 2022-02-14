
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_tracker {struct nvme_request* req; int payload_dma_map; int timer; } ;
struct TYPE_4__ {scalar_t__ cid; } ;
struct nvme_request {scalar_t__ retries; scalar_t__ type; int cb_arg; int (* cb_fn ) (int ,struct nvme_completion*) ;TYPE_2__ cmd; } ;
struct nvme_qpair {int lock; int queued_req; TYPE_1__* ctrlr; int free_tr; int outstanding_tr; int dma_tag_payload; int ** act_tr; int num_failures; int num_retries; } ;
struct nvme_completion {size_t cid; } ;
typedef scalar_t__ error_print_t ;
typedef int boolean_t ;
struct TYPE_3__ {int is_resetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 struct nvme_request* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct nvme_tracker*,int ) ;
 int FUNC_5 (int *,struct nvme_tracker*,int ) ;
 int FUNC_6 (struct nvme_qpair*,struct nvme_request*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nvme_completion*) ;
 int FUNC_13 (struct nvme_completion*) ;
 int FUNC_14 (struct nvme_request*) ;
 int FUNC_15 (struct nvme_qpair*,TYPE_2__*) ;
 int FUNC_16 (struct nvme_qpair*,struct nvme_completion*) ;
 int FUNC_17 (struct nvme_qpair*,struct nvme_tracker*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (int ,struct nvme_completion*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_19(struct nvme_qpair *VAR_8, struct nvme_tracker *VAR_9,
    struct nvme_completion *VAR_10, error_print_t VAR_11)
{
 struct nvme_request *VAR_12;
 boolean_t VAR_13, VAR_14, VAR_15;

 VAR_12 = VAR_9->req;
 VAR_14 = FUNC_12(VAR_10);
 VAR_15 = FUNC_13(VAR_10);
 VAR_13 = VAR_14 && VAR_15 && VAR_12->retries < VAR_5;
 if (VAR_13)
  VAR_8->num_retries++;
 if (VAR_14 && VAR_12->retries >= VAR_5 && VAR_15)
  VAR_8->num_failures++;

 if (VAR_14 && (VAR_11 == VAR_2 ||
  (!VAR_13 && VAR_11 == VAR_3))) {
  FUNC_15(VAR_8, &VAR_12->cmd);
  FUNC_16(VAR_8, VAR_10);
 }

 VAR_8->act_tr[VAR_10->cid] = ((void*)0);

 FUNC_0(VAR_10->cid == VAR_12->cmd.cid, ("cpl cid does not match cmd cid\n"));

 if (VAR_12->cb_fn && !VAR_13)
  VAR_12->cb_fn(VAR_12->cb_arg, VAR_10);

 FUNC_10(&VAR_8->lock);
 FUNC_9(&VAR_9->timer);

 if (VAR_13) {
  VAR_12->retries++;
  FUNC_17(VAR_8, VAR_9);
 } else {
  if (VAR_12->type != VAR_4) {
   FUNC_7(VAR_8->dma_tag_payload,
       VAR_9->payload_dma_map,
       VAR_0 | VAR_1);
   FUNC_8(VAR_8->dma_tag_payload,
       VAR_9->payload_dma_map);
  }

  FUNC_14(VAR_12);
  VAR_9->req = ((void*)0);

  FUNC_5(&VAR_8->outstanding_tr, VAR_9, VAR_7);
  FUNC_4(&VAR_8->free_tr, VAR_9, VAR_7);






  if (!FUNC_1(&VAR_8->queued_req) &&
      !VAR_8->ctrlr->is_resetting) {
   VAR_12 = FUNC_2(&VAR_8->queued_req);
   FUNC_3(&VAR_8->queued_req, VAR_6);
   FUNC_6(VAR_8, VAR_12);
  }
 }

 FUNC_11(&VAR_8->lock);
}
