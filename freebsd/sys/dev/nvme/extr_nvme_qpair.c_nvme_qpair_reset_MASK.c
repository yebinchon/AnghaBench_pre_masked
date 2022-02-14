
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_qpair {int phase; int num_entries; int cpl; int cmd; scalar_t__ cq_head; scalar_t__ sq_tail; scalar_t__ sq_head; } ;
struct nvme_completion {int dummy; } ;
struct nvme_command {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct nvme_qpair *VAR_0)
{

 VAR_0->sq_head = VAR_0->sq_tail = VAR_0->cq_head = 0;
 VAR_0->phase = 1;

 FUNC_0(VAR_0->cmd, 0,
     VAR_0->num_entries * sizeof(struct nvme_command));
 FUNC_0(VAR_0->cpl, 0,
     VAR_0->num_entries * sizeof(struct nvme_completion));
}
