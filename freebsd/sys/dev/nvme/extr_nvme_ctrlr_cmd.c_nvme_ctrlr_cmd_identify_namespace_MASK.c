
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_command {int nsid; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_namespace_data {int dummy; } ;
struct nvme_controller {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct nvme_request* FUNC_1 (void*,int,int ,void*) ;
 int FUNC_2 (struct nvme_controller*,struct nvme_request*) ;

void
FUNC_3(struct nvme_controller *VAR_1, uint32_t VAR_2,
 void *VAR_3, nvme_cb_fn_t VAR_4, void *VAR_5)
{
 struct nvme_request *VAR_6;
 struct nvme_command *VAR_7;

 VAR_6 = FUNC_1(VAR_3,
     sizeof(struct nvme_namespace_data), VAR_4, VAR_5);

 VAR_7 = &VAR_6->cmd;
 VAR_7->opc = VAR_0;




 VAR_7->nsid = FUNC_0(VAR_2);

 FUNC_2(VAR_1, VAR_6);
}
