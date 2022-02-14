
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nvme_request {int cmd; } ;
struct nvme_namespace {int ctrlr; int id; } ;
struct bio {int bio_offset; int bio_bcount; } ;
typedef int nvme_cb_fn_t ;


 int VAR_0 ;
 struct nvme_request* FUNC_0 (struct bio*,int ,void*) ;
 int FUNC_1 (int ,struct nvme_request*) ;
 int FUNC_2 (struct nvme_namespace*) ;
 int FUNC_3 (int *,int ,int,int) ;

int
FUNC_4(struct nvme_namespace *VAR_1, struct bio *VAR_2,
    nvme_cb_fn_t VAR_3, void *VAR_4)
{
 struct nvme_request *VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_2->bio_offset / FUNC_2(VAR_1);
 VAR_7 = VAR_2->bio_bcount / FUNC_2(VAR_1);
 FUNC_3(&VAR_5->cmd, VAR_1->id, VAR_6, VAR_7);

 FUNC_1(VAR_1->ctrlr, VAR_5);

 return (0);
}
