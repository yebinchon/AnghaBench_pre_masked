
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_command {int cdw10; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_qpair {int id; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct nvme_request* FUNC_1 (int ,void*) ;
 int FUNC_2 (struct nvme_controller*,struct nvme_request*) ;

void
FUNC_3(struct nvme_controller *VAR_1,
    struct nvme_qpair *VAR_2, nvme_cb_fn_t VAR_3, void *VAR_4)
{
 struct nvme_request *VAR_5;
 struct nvme_command *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4);

 VAR_6 = &VAR_5->cmd;
 VAR_6->opc = VAR_0;





 VAR_6->cdw10 = FUNC_0(VAR_2->id);

 FUNC_2(VAR_1, VAR_5);
}
