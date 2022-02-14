
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int num_io_queues; int * ioq; scalar_t__ is_initialized; int adminq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nvme_controller *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->adminq);





 if (VAR_0->is_initialized) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_io_queues; VAR_1++)
   FUNC_1(&VAR_0->ioq[VAR_1]);
 }
}
