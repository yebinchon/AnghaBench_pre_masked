
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int cmd; } ;
struct nvme_namespace {int ctrlr; int id; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,struct nvme_request*) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(struct nvme_namespace *VAR_1, nvme_cb_fn_t VAR_2, void *VAR_3)
{
 struct nvme_request *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_2(&VAR_4->cmd, VAR_1->id);
 FUNC_1(VAR_1->ctrlr, VAR_4);

 return (0);
}
