
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nvme_request {int cb_arg; int (* cb_fn ) (int ,struct nvme_completion*) ;int cmd; } ;
struct nvme_qpair {int id; } ;
struct nvme_completion {int status; int sqid; } ;
typedef int cpl ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvme_completion*,int ,int) ;
 scalar_t__ FUNC_1 (struct nvme_completion*) ;
 int FUNC_2 (struct nvme_request*) ;
 int FUNC_3 (struct nvme_qpair*,int *) ;
 int FUNC_4 (struct nvme_qpair*,struct nvme_completion*) ;
 int FUNC_5 (int ,struct nvme_completion*) ;

void
FUNC_6(struct nvme_qpair *VAR_4,
    struct nvme_request *VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 struct nvme_completion VAR_8;
 boolean_t VAR_9;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sqid = VAR_4->id;
 VAR_8.status |= (VAR_6 & VAR_0) << VAR_1;
 VAR_8.status |= (VAR_7 & VAR_2) << VAR_3;

 VAR_9 = FUNC_1(&VAR_8);

 if (VAR_9) {
  FUNC_3(VAR_4, &VAR_5->cmd);
  FUNC_4(VAR_4, &VAR_8);
 }

 if (VAR_5->cb_fn)
  VAR_5->cb_fn(VAR_5->cb_arg, &VAR_8);

 FUNC_2(VAR_5);
}
