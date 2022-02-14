
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_qpair {int dummy; } ;
struct nvme_controller {int num_io_queues; struct nvme_qpair* ioq; } ;
struct nvme_completion_poll_status {int cpl; scalar_t__ done; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_completion_poll_status*) ;
 int VAR_1 ;
 int FUNC_2 (struct nvme_controller*,struct nvme_qpair*,int ,struct nvme_completion_poll_status*) ;
 int FUNC_3 (struct nvme_controller*,struct nvme_qpair*,int ,struct nvme_completion_poll_status*) ;
 int FUNC_4 (struct nvme_controller*,char*) ;

__attribute__((used)) static int
FUNC_5(struct nvme_controller *VAR_2)
{
 struct nvme_completion_poll_status VAR_3;
 struct nvme_qpair *VAR_4;

 for (int VAR_5 = 0; VAR_5 < VAR_2->num_io_queues; VAR_5++) {
  VAR_4 = &VAR_2->ioq[VAR_5];

  VAR_3.done = 0;
  FUNC_3(VAR_2, VAR_4,
      VAR_1, &VAR_3);
  FUNC_1(&VAR_3);
  if (FUNC_0(&VAR_3.cpl)) {
   FUNC_4(VAR_2, "nvme_destroy_io_sq failed!\n");
   return (VAR_0);
  }

  VAR_3.done = 0;
  FUNC_2(VAR_2, VAR_4,
      VAR_1, &VAR_3);
  FUNC_1(&VAR_3);
  if (FUNC_0(&VAR_3.cpl)) {
   FUNC_4(VAR_2, "nvme_destroy_io_cq failed!\n");
   return (VAR_0);
  }
 }

 return (0);
}
