
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_controller {int num_io_queues; } ;
struct TYPE_2__ {int cdw0; } ;
struct nvme_completion_poll_status {TYPE_1__ cpl; scalar_t__ done; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nvme_completion_poll_status*) ;
 int VAR_1 ;
 int FUNC_3 (struct nvme_controller*,int,int ,struct nvme_completion_poll_status*) ;
 int FUNC_4 (struct nvme_controller*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct nvme_controller *VAR_3)
{
 struct nvme_completion_poll_status VAR_4;
 int VAR_5, VAR_6;

 VAR_4.done = 0;
 FUNC_3(VAR_3, VAR_3->num_io_queues,
     VAR_1, &VAR_4);
 FUNC_2(&VAR_4);
 if (FUNC_1(&VAR_4.cpl)) {
  FUNC_4(VAR_3, "nvme_ctrlr_set_num_qpairs failed!\n");
  return (VAR_0);
 }






 VAR_6 = (VAR_4.cpl.cdw0 & 0xFFFF) + 1;
 VAR_5 = (VAR_4.cpl.cdw0 >> 16) + 1;






 VAR_3->num_io_queues = FUNC_0(VAR_3->num_io_queues, VAR_6);
 VAR_3->num_io_queues = FUNC_0(VAR_3->num_io_queues, VAR_5);
 if (VAR_3->num_io_queues > VAR_2)
  VAR_3->num_io_queues -= VAR_3->num_io_queues % VAR_2;

 return (0);
}
