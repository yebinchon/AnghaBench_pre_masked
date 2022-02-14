
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvme_command {int cdw10; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct nvme_request* FUNC_1 (int ,void*) ;
 int FUNC_2 (struct nvme_controller*,struct nvme_request*) ;

void
FUNC_3(struct nvme_controller *VAR_1, uint16_t VAR_2,
    uint16_t VAR_3, nvme_cb_fn_t VAR_4, void *VAR_5)
{
 struct nvme_request *VAR_6;
 struct nvme_command *VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5);

 VAR_7 = &VAR_6->cmd;
 VAR_7->opc = VAR_0;
 VAR_7->cdw10 = FUNC_0((VAR_2 << 16) | VAR_3);

 FUNC_2(VAR_1, VAR_6);
}
