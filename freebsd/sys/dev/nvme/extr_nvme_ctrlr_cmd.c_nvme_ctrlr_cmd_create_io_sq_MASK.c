
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_command {int prp1; void* cdw11; void* cdw10; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_qpair {int num_entries; int id; int cmd_bus_addr; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct nvme_request* FUNC_2 (int ,void*) ;
 int FUNC_3 (struct nvme_controller*,struct nvme_request*) ;

void
FUNC_4(struct nvme_controller *VAR_1,
    struct nvme_qpair *VAR_2, nvme_cb_fn_t VAR_3, void *VAR_4)
{
 struct nvme_request *VAR_5;
 struct nvme_command *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);

 VAR_6 = &VAR_5->cmd;
 VAR_6->opc = VAR_0;





 VAR_6->cdw10 = FUNC_0(((VAR_2->num_entries-1) << 16) | VAR_2->id);

 VAR_6->cdw11 = FUNC_0((VAR_2->id << 16) | 0x1);
 VAR_6->prp1 = FUNC_1(VAR_2->cmd_bus_addr);

 FUNC_3(VAR_1, VAR_5);
}
