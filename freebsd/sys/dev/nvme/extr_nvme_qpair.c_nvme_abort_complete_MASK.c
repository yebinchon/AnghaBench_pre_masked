
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tracker {size_t cid; TYPE_1__* qpair; } ;
struct nvme_completion {int cdw0; } ;
struct TYPE_2__ {int ctrlr; int ** act_tr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,struct nvme_tracker*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, const struct nvme_completion *VAR_4)
{
 struct nvme_tracker *VAR_5 = VAR_3;







 if (VAR_4->cdw0 == 1 && VAR_5->qpair->act_tr[VAR_5->cid] != ((void*)0)) {





  FUNC_0(VAR_5->qpair->ctrlr,
      "abort command failed, aborting command manually\n");
  FUNC_1(VAR_5->qpair, VAR_5,
      VAR_1, VAR_2, 0, VAR_0);
 }
}
