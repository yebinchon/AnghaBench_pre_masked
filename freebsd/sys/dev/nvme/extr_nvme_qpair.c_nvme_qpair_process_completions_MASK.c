
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tracker {int dummy; } ;
struct nvme_qpair {size_t cq_head; size_t num_entries; int phase; int cq_hdbl_off; TYPE_1__* ctrlr; struct nvme_completion* cpl; int sq_head; struct nvme_tracker** act_tr; int queuemem_map; int dma_tag; int is_enabled; int num_intr_handler_calls; } ;
struct nvme_completion {size_t cid; int sqhd; int status; } ;
struct TYPE_2__ {int bus_handle; int bus_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (size_t*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct nvme_completion*) ;
 int FUNC_8 (struct nvme_completion*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (struct nvme_qpair*,struct nvme_tracker*,struct nvme_completion*,int ) ;

bool
FUNC_11(struct nvme_qpair *VAR_4)
{
 struct nvme_tracker *VAR_5;
 struct nvme_completion VAR_6;
 int VAR_7 = 0;
 bool VAR_8 = VAR_3 || FUNC_2();

 VAR_4->num_intr_handler_calls++;






 if (!VAR_4->is_enabled)
  return (0);
 if (FUNC_3(VAR_8)) {
  if (VAR_4->cq_head == VAR_4->num_entries) {





   VAR_4->cq_head = 0;
   VAR_4->phase = !VAR_4->phase;
  } else if (VAR_4->cq_head == 0) {







   VAR_6 = VAR_4->cpl[VAR_4->num_entries - 1];
   FUNC_7(&VAR_6);
   VAR_4->phase = !FUNC_1(VAR_6.status);
  }
 }

 FUNC_5(VAR_4->dma_tag, VAR_4->queuemem_map,
     VAR_0 | VAR_1);
 while (1) {
  VAR_6 = VAR_4->cpl[VAR_4->cq_head];


  FUNC_7(&VAR_6);

  if (FUNC_1(VAR_6.status) != VAR_4->phase)
   break;

  VAR_5 = VAR_4->act_tr[VAR_6.cid];

  if (VAR_5 != ((void*)0)) {
   FUNC_10(VAR_4, VAR_5, &VAR_6, VAR_2);
   VAR_4->sq_head = VAR_6.sqhd;
   VAR_7++;
  } else if (!VAR_8) {
   FUNC_9(VAR_4->ctrlr,
       "cpl does not map to outstanding cmd\n");

   FUNC_8(&VAR_4->cpl[VAR_4->cq_head]);
   FUNC_0(0, ("received completion for unknown cmd"));
  }







  if (++VAR_4->cq_head == VAR_4->num_entries) {
   FUNC_4(&VAR_4->cq_head, 0);
   VAR_4->phase = !VAR_4->phase;
  }

  FUNC_6(VAR_4->ctrlr->bus_tag, VAR_4->ctrlr->bus_handle,
      VAR_4->cq_hdbl_off, VAR_4->cq_head);
 }
 return (VAR_7 != 0);
}
