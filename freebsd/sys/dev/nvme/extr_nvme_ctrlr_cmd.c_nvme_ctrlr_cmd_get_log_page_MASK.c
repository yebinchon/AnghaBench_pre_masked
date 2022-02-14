
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nvme_command {int cdw10; void* nsid; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 struct nvme_request* FUNC_1 (void*,int,int ,void*) ;
 int FUNC_2 (struct nvme_controller*,struct nvme_request*) ;

void
FUNC_3(struct nvme_controller *VAR_1, uint8_t VAR_2,
    uint32_t VAR_3, void *VAR_4, uint32_t VAR_5, nvme_cb_fn_t VAR_6,
    void *VAR_7)
{
 struct nvme_request *VAR_8;
 struct nvme_command *VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_9 = &VAR_8->cmd;
 VAR_9->opc = VAR_0;
 VAR_9->nsid = FUNC_0(VAR_3);
 VAR_9->cdw10 = ((VAR_5/sizeof(uint32_t)) - 1) << 16;
 VAR_9->cdw10 |= VAR_2;
 VAR_9->cdw10 = FUNC_0(VAR_9->cdw10);

 FUNC_2(VAR_1, VAR_8);
}
