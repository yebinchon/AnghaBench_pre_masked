
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tracker {size_t cid; int timer; struct nvme_request* req; } ;
struct TYPE_2__ {size_t cid; } ;
struct nvme_request {TYPE_1__ cmd; scalar_t__ timeout; } ;
struct nvme_qpair {size_t sq_tail; size_t num_entries; int num_cmds; int sq_tdbl_off; struct nvme_controller* ctrlr; int queuemem_map; int dma_tag; int * cmd; int cpu; struct nvme_tracker** act_tr; int lock; } ;
struct nvme_controller {int timeout_period; int bus_handle; int bus_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,size_t) ;
 int FUNC_2 (int *,int,int ,struct nvme_tracker*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 () ;

void
FUNC_6(struct nvme_qpair *VAR_5, struct nvme_tracker *VAR_6)
{
 struct nvme_request *VAR_7;
 struct nvme_controller *VAR_8;

 FUNC_4(&VAR_5->lock, VAR_2);

 VAR_7 = VAR_6->req;
 VAR_7->cmd.cid = VAR_6->cid;
 VAR_5->act_tr[VAR_6->cid] = VAR_6;
 VAR_8 = VAR_5->ctrlr;

 if (VAR_7->timeout)
  FUNC_2(&VAR_6->timer, VAR_8->timeout_period * VAR_3,
      VAR_4, VAR_6, VAR_5->cpu);


 FUNC_3(&VAR_5->cmd[VAR_5->sq_tail], &VAR_7->cmd, sizeof(VAR_7->cmd));

 if (++VAR_5->sq_tail == VAR_5->num_entries)
  VAR_5->sq_tail = 0;

 FUNC_0(VAR_5->dma_tag, VAR_5->queuemem_map,
     VAR_0 | VAR_1);





 FUNC_5();


 FUNC_1(VAR_5->ctrlr->bus_tag, VAR_5->ctrlr->bus_handle,
     VAR_5->sq_tdbl_off, VAR_5->sq_tail);
 VAR_5->num_cmds++;
}
