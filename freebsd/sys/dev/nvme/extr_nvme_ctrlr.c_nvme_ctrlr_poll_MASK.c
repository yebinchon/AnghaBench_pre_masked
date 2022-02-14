
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpl; } ;
struct nvme_controller {int num_io_queues; TYPE_1__* ioq; TYPE_1__ adminq; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct nvme_controller *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->adminq);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_io_queues; VAR_1++)
  if (VAR_0->ioq && VAR_0->ioq[VAR_1].cpl)
   FUNC_0(&VAR_0->ioq[VAR_1]);
}
