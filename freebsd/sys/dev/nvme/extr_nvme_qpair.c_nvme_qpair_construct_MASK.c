
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
typedef void* uint32_t ;
struct nvme_tracker {int cid; size_t* prp; size_t prp_bus_addr; struct nvme_qpair* qpair; int timer; int payload_dma_map; } ;
struct nvme_qpair {int vector; int id; int num_entries; size_t num_trackers; int rid; size_t cmd_bus_addr; size_t cpl_bus_addr; int domain; void* act_tr; int free_tr; int dma_tag_payload; int queued_req; int outstanding_tr; void* cq_hdbl_off; void* sq_tdbl_off; struct nvme_completion* cpl; struct nvme_command* cmd; scalar_t__ num_failures; scalar_t__ num_retries; scalar_t__ num_intr_handler_calls; scalar_t__ num_cmds; int queuemem_map; int dma_tag; int lock; int tag; int res; struct nvme_controller* ctrlr; } ;
struct nvme_controller {int dstrd; int dev; scalar_t__ msix_enabled; } ;
struct nvme_completion {int dummy; } ;
struct nvme_command {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nvme_tracker*,int ) ;
 int FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,...) ;
 int FUNC_6 (int ,int,int,int ,int ,int *,int *,size_t,int,size_t,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int *,size_t,int ,size_t*,int ) ;
 scalar_t__ FUNC_10 (int ,void**,int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int,int *,int ,struct nvme_qpair*,int *) ;
 int FUNC_13 (int *,int) ;
 int * VAR_14 ;
 void* FUNC_14 (int,int ,int ,int) ;
 int FUNC_15 (int *,char*,int *,int ) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (struct nvme_controller*,char*,...) ;
 int FUNC_18 (struct nvme_qpair*) ;
 int VAR_15 ;
 int VAR_16 ;
 size_t FUNC_19 (uintptr_t,int) ;
 int VAR_17 ;
 scalar_t__ FUNC_20 (size_t) ;

int
FUNC_21(struct nvme_qpair *VAR_18,
    uint32_t VAR_19, uint32_t VAR_20,
    struct nvme_controller *VAR_21)
{
 struct nvme_tracker *VAR_22;
 size_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 uint64_t VAR_28, VAR_29, VAR_30;
 uint8_t *VAR_31, *VAR_32, *VAR_33;
 int VAR_34, VAR_35;

 VAR_18->vector = VAR_21->msix_enabled ? VAR_18->id : 0;
 VAR_18->num_entries = VAR_19;
 VAR_18->num_trackers = VAR_20;
 VAR_18->ctrlr = VAR_21;

 if (VAR_21->msix_enabled) {





  VAR_18->rid = VAR_18->vector + 1;

  VAR_18->res = FUNC_4(VAR_21->dev, VAR_13,
      &VAR_18->rid, VAR_12);
  FUNC_12(VAR_21->dev, VAR_18->res,
      VAR_4 | VAR_3, ((void*)0),
      VAR_15, VAR_18, &VAR_18->tag);
  if (VAR_18->id == 0) {
   FUNC_5(VAR_21->dev, VAR_18->res, VAR_18->tag,
       "admin");
  } else {
   FUNC_5(VAR_21->dev, VAR_18->res, VAR_18->tag,
       "io%d", VAR_18->id - 1);
  }
 }

 FUNC_15(&VAR_18->lock, "nvme qpair lock", ((void*)0), VAR_5);


 VAR_35 = FUNC_6(FUNC_11(VAR_21->dev),
     4, VAR_11, VAR_1,
     VAR_1, ((void*)0), ((void*)0), VAR_10,
     (VAR_10/VAR_11)+1, VAR_11, 0,
     ((void*)0), ((void*)0), &VAR_18->dma_tag_payload);
 if (VAR_35 != 0) {
  FUNC_17(VAR_21, "payload tag create failed %d\n", VAR_35);
  goto out;
 }





 VAR_23 = VAR_18->num_entries * sizeof(struct nvme_command);
 VAR_23 = FUNC_19(VAR_23, VAR_11);
 VAR_24 = VAR_18->num_entries * sizeof(struct nvme_completion);
 VAR_24 = FUNC_19(VAR_24, VAR_11);
 VAR_25 = sizeof(uint64_t) * VAR_9;;
 VAR_27 = VAR_18->num_trackers * VAR_25;
 VAR_26 = VAR_23 + VAR_24 + VAR_27;

 VAR_35 = FUNC_6(FUNC_11(VAR_21->dev),
     VAR_11, 0, VAR_1, VAR_1, ((void*)0), ((void*)0),
     VAR_26, 1, VAR_26, 0, ((void*)0), ((void*)0), &VAR_18->dma_tag);
 if (VAR_35 != 0) {
  FUNC_17(VAR_21, "tag create failed %d\n", VAR_35);
  goto out;
 }
 FUNC_7(VAR_18->dma_tag, VAR_18->domain);

 if (FUNC_10(VAR_18->dma_tag, (void **)&VAR_31,
     VAR_0, &VAR_18->queuemem_map)) {
  FUNC_17(VAR_21, "failed to alloc qpair memory\n");
  goto out;
 }

 if (FUNC_9(VAR_18->dma_tag, VAR_18->queuemem_map,
     VAR_31, VAR_26, VAR_16, &VAR_28, 0) != 0) {
  FUNC_17(VAR_21, "failed to load qpair memory\n");
  goto out;
 }

 VAR_18->num_cmds = 0;
 VAR_18->num_intr_handler_calls = 0;
 VAR_18->num_retries = 0;
 VAR_18->num_failures = 0;
 VAR_18->cmd = (struct nvme_command *)VAR_31;
 VAR_18->cpl = (struct nvme_completion *)(VAR_31 + VAR_23);
 VAR_32 = (uint8_t *)(VAR_31 + VAR_23 + VAR_24);
 VAR_18->cmd_bus_addr = VAR_28;
 VAR_18->cpl_bus_addr = VAR_28 + VAR_23;
 VAR_29 = VAR_28 + VAR_23 + VAR_24;






 VAR_18->sq_tdbl_off = FUNC_16(VAR_14[0]) +
     (VAR_18->id << (VAR_21->dstrd + 1));
 VAR_18->cq_hdbl_off = FUNC_16(VAR_14[0]) +
     (VAR_18->id << (VAR_21->dstrd + 1)) + (1 << VAR_21->dstrd);

 FUNC_2(&VAR_18->free_tr);
 FUNC_2(&VAR_18->outstanding_tr);
 FUNC_1(&VAR_18->queued_req);

 VAR_30 = VAR_29;
 VAR_33 = VAR_32;
 for (VAR_34 = 0; VAR_34 < VAR_18->num_trackers; VAR_34++) {

  if (VAR_30 + VAR_25 > VAR_29 + VAR_27) {
   VAR_18->num_trackers = VAR_34;
   break;
  }





  if (FUNC_20(VAR_30) !=
      FUNC_20(VAR_30 + VAR_25 - 1)) {
   VAR_30 = FUNC_19(VAR_30, VAR_11);
   VAR_33 =
       (uint8_t *)FUNC_19((uintptr_t)VAR_33, VAR_11);
  }

  VAR_22 = FUNC_14(sizeof(*VAR_22), VAR_6,
      FUNC_0(VAR_18->domain), VAR_8 | VAR_7);
  FUNC_8(VAR_18->dma_tag_payload, 0,
      &VAR_22->payload_dma_map);
  FUNC_13(&VAR_22->timer, 1);
  VAR_22->cid = VAR_34;
  VAR_22->qpair = VAR_18;
  VAR_22->prp = (uint64_t *)VAR_33;
  VAR_22->prp_bus_addr = VAR_30;
  FUNC_3(&VAR_18->free_tr, VAR_22, VAR_17);
  VAR_30 += VAR_25;
  VAR_33 += VAR_25;
 }

 if (VAR_18->num_trackers == 0) {
  FUNC_17(VAR_21, "failed to allocate enough trackers\n");
  goto out;
 }

 VAR_18->act_tr = FUNC_14(sizeof(struct nvme_tracker *) *
     VAR_18->num_entries, VAR_6, FUNC_0(VAR_18->domain),
     VAR_8 | VAR_7);
 return (0);

out:
 FUNC_18(VAR_18);
 return (VAR_2);
}
