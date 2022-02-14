
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nvme_command {void* cdw11; void* cdw10; void* nsid; int opc; } ;
struct nvme_request {struct nvme_command cmd; } ;
struct nvme_namespace {int id; int ctrlr; } ;
struct nvme_dsm_range {int dummy; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct nvme_request* FUNC_1 (void*,int,int ,void*) ;
 int FUNC_2 (int ,struct nvme_request*) ;

int
FUNC_3(struct nvme_namespace *VAR_3, void *VAR_4,
    uint8_t VAR_5, nvme_cb_fn_t VAR_6, void *VAR_7)
{
 struct nvme_request *VAR_8;
 struct nvme_command *VAR_9;

 VAR_8 = FUNC_1(VAR_4,
     VAR_5 * sizeof(struct nvme_dsm_range), VAR_6, VAR_7);

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_9 = &VAR_8->cmd;
 VAR_9->opc = VAR_2;
 VAR_9->nsid = FUNC_0(VAR_3->id);


 VAR_9->cdw10 = FUNC_0(VAR_5 - 1);
 VAR_9->cdw11 = FUNC_0(VAR_1);

 FUNC_2(VAR_3->ctrlr, VAR_8);

 return (0);
}
