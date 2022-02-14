
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nvme_request {int cmd; } ;
struct nvme_namespace {int ctrlr; int id; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (void*,int,int ,void*) ;
 int FUNC_1 (int ,struct nvme_request*) ;
 int FUNC_2 (struct nvme_namespace*) ;
 int FUNC_3 (int *,int ,int ,int) ;

int
FUNC_4(struct nvme_namespace *VAR_1, void *VAR_2, uint64_t VAR_3,
    uint32_t VAR_4, nvme_cb_fn_t VAR_5, void *VAR_6)
{
 struct nvme_request *VAR_7;

 VAR_7 = FUNC_0(VAR_2,
     VAR_4*FUNC_2(VAR_1), VAR_5, VAR_6);

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_3(&VAR_7->cmd, VAR_1->id, VAR_3, VAR_4);

 FUNC_1(VAR_1->ctrlr, VAR_7);

 return (0);
}
