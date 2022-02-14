
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tracker {int dummy; } ;
struct nvme_request {int dummy; } ;
struct nvme_qpair {int lock; int ctrlr; int outstanding_tr; int queued_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct nvme_request* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct nvme_tracker* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct nvme_qpair*,struct nvme_request*,int ,int ) ;
 int FUNC_10 (struct nvme_qpair*,struct nvme_tracker*,int ,int ,int ,int ) ;
 int VAR_4 ;

void
FUNC_11(struct nvme_qpair *VAR_5)
{
 struct nvme_tracker *VAR_6;
 struct nvme_request *VAR_7;

 if (!FUNC_5(&VAR_5->lock))
  return;

 FUNC_6(&VAR_5->lock);

 while (!FUNC_0(&VAR_5->queued_req)) {
  VAR_7 = FUNC_1(&VAR_5->queued_req);
  FUNC_2(&VAR_5->queued_req, VAR_4);
  FUNC_8(VAR_5->ctrlr, "failing queued i/o\n");
  FUNC_7(&VAR_5->lock);
  FUNC_9(VAR_5, VAR_7, VAR_2,
      VAR_3);
  FUNC_6(&VAR_5->lock);
 }


 while (!FUNC_3(&VAR_5->outstanding_tr)) {
  VAR_6 = FUNC_4(&VAR_5->outstanding_tr);




  FUNC_8(VAR_5->ctrlr, "failing outstanding i/o\n");
  FUNC_7(&VAR_5->lock);
  FUNC_10(VAR_5, VAR_6, VAR_2,
      VAR_3, VAR_0, VAR_1);
  FUNC_6(&VAR_5->lock);
 }

 FUNC_7(&VAR_5->lock);
}
