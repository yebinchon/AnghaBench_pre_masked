
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct nvme_command {int dummy; } ;
struct nvme_request {int * qpair; struct nvme_command cmd; } ;
struct nvme_namespace {int ctrlr; int id; } ;
struct nvme_completion_poll_status {scalar_t__ done; } ;
typedef size_t off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct nvme_request* FUNC_1 (void*,size_t,int ,struct nvme_completion_poll_status*) ;
 int VAR_5 ;
 int FUNC_2 (int ,struct nvme_request*) ;
 int FUNC_3 (struct nvme_command*,int ) ;
 size_t FUNC_4 (struct nvme_namespace*) ;
 int FUNC_5 (struct nvme_command*,int ,size_t,size_t) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct nvme_namespace *VAR_6, void *VAR_7, off_t VAR_8, size_t VAR_9)
{
 struct nvme_completion_poll_status VAR_10;
 struct nvme_request *VAR_11;
 struct nvme_command *VAR_12;
 uint64_t VAR_13, VAR_14;
 int VAR_15;

 VAR_10.done = VAR_3;
 VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_5,
     &VAR_10);
 if (VAR_11 == ((void*)0))
  return (VAR_0);

 VAR_12 = &VAR_11->cmd;

 if (VAR_9 > 0) {
  VAR_13 = VAR_8 / FUNC_4(VAR_6);
  VAR_14 = VAR_9 / FUNC_4(VAR_6);
  FUNC_5(VAR_12, VAR_6->id, VAR_13, VAR_14);
 } else
  FUNC_3(VAR_12, VAR_6->id);

 FUNC_2(VAR_6->ctrlr, VAR_11);
 if (VAR_11->qpair == ((void*)0))
  return (VAR_1);

 VAR_15 = 0;
 while ((VAR_15++ < VAR_4) && (VAR_10.done == VAR_3)) {
  FUNC_0(5);
  FUNC_6(VAR_11->qpair);
 }
 if (VAR_10.done == VAR_3)
  return (VAR_2);

 return (0);
}
